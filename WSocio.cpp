#include "WSocio.h"
#include "Biblioteca.h"
#include "Socios.h"
#include "string_conv.h"
#include "WCSocio.h"
#include "WESocio.h"
#include <wx/msgdlg.h>
#include "Utils.h"


WSocio::WSocio(wxWindow *parent, Biblioteca *biblioteca)
	: Socio(parent), m_biblioteca(biblioteca) {
	RefreshGrid();
}

void WSocio::CargarFilas(int i){
	Socios &s= m_biblioteca->VerSocio(i);
	m_grid_socios->SetCellValue(i, 0, std_to_wx(std::to_string(s.getDNI())));
	m_grid_socios->SetCellValue(i, 1, std_to_wx(s.getApellido()+", "+s.getNombre()));
	m_grid_socios->SetCellValue(i, 2, std_to_wx(s.getDomicilio()));
	m_grid_socios->SetCellValue(i, 3, std_to_wx(s.getMovil()));
}

void WSocio::RefreshGrid(){
	int cant_soc = m_biblioteca->CantidadSocios();
	if(cant_soc > 0){
	m_grid_socios->ClearGrid();
	m_grid_socios->AppendRows(cant_soc);
	for(int i=0;i<cant_soc;i++) CargarFilas(i);
	m_grid_socios->SetSelectionMode(wxGrid::wxGridSelectRows);
	}
}

void WSocio::ClickSocioSearch( wxCommandEvent& event )  {
	if (m_biblioteca->CantidadSocios() == 0) wxMessageBox(c_to_wx("No hay socias cargados"));
	std::string buscar = wx_to_std(m_txt_socio_search->GetValue());
	if(buscar.size() == 0) wxMessageBox(c_to_wx("Debe ingresar un nombre o DNI a buscar"));
	else{ int res;
		if (is_number(buscar))	
			res = m_biblioteca->BuscarDNI(std::stoi(wx_to_std(m_txt_socio_search->GetValue())), 0);
		else{
			res = m_biblioteca->BuscarApellidoYNombre(wx_to_std(m_txt_socio_search->GetValue()), 0);
			if(res == NO_SE_ENCUENTRA)
				wxMessageBox("No se encontro");
			else{
				m_grid_socios->SetGridCursor(res,0);
				m_grid_socios->SelectRow(res);
			}
		}	
	}
}


void WSocio::ClickNuevo( wxCommandEvent& event )  {
	WCSocio new_windows(this, m_biblioteca);
	if (new_windows.ShowModal()==1) RefreshGrid();
}

void WSocio::ClickEdit( wxCommandEvent& event )  {
	int f_actual = m_grid_socios->GetGridCursorRow();
	if(m_biblioteca->CantidadSocios() == 0) wxMessageBox(c_to_wx("No hay ningun socio cargado todavia"));
	else{	WESocio new_windows(this, m_biblioteca, f_actual);
	if (new_windows.ShowModal())
		CargarFilas(f_actual);
	}
}

void WSocio::ClickCancel( wxCommandEvent& event )  {
	EndModal(0);
}

void WSocio::ClickDelet( wxCommandEvent& event )  {
	int f_actual = m_grid_socios->GetGridCursorRow();
	if(m_biblioteca->CantidadSocios() == 0) wxMessageBox(c_to_wx("No hay ningun socio cargado todavia"));
	else{	int res = wxMessageBox(c_to_wx("¿Eliminar Socio DNI "+m_grid_socios->GetCellValue(f_actual, 0)+", "+m_grid_socios->GetCellValue(f_actual, 1))+"?", "Eliminar", wxYES_NO);
	if (res == wxYES){
		m_grid_socios->DeleteRows(f_actual, 1);
		m_biblioteca->DeletSocio(f_actual);
		m_biblioteca->setSocios();
		RefreshGrid();
		}
	}
}

void WSocio::ClickGrid( wxGridEvent& event )  {
	if(m_biblioteca->CantidadSocios() > 0){
	int columna = event.GetCol(); int c_soc = m_biblioteca->CantidadSocios();
	switch(columna){
	case 0: m_biblioteca->OrdenSocios(ORDEN_DNI_S); break;
	case 1: m_biblioteca->OrdenSocios(ORDEN_APELLIDO_Y_NOMBRE_S); break;
	case 2: m_biblioteca->OrdenSocios(ORDEN_DOMICILIO_S); break;
	case 3: m_biblioteca->OrdenSocios(ORDEN_MOVIL_S); break;
	}
	for(int i=0;i<c_soc;i++) CargarFilas(i);
	}
}

