#include "WPrincipal.h"
#include "Biblioteca.h"
#include "Prestamos.h"
#include "string_conv.h"
#include <string>
#include <iostream>
#include "Utils.h"
#include <wx/msgdlg.h>
#include "WLibro.h"
#include "WSocio.h"
#include "WCPrestamo.h"
#include <wx/icon.h>
#include "sgb.xpm"
#include <cctype>
#include <wx/colour.h>
using namespace std;


WPrincipal::WPrincipal(Biblioteca *biblioteca)
	: Principal(nullptr), m_biblioteca(biblioteca)  {
	SetIcon(wxIcon(sgb_xpm));
	RefreshGrid();
}

void WPrincipal::CargarFilas(int i){
	Prestamos &p = m_biblioteca->VerPrestamo(i);
	m_grid_prestamos->SetCellValue(i, 0, std_to_wx(std::to_string(p.getDNI_P())));
	m_grid_prestamos->SetCellValue(i, 1, std_to_wx(p.getApellido_P()+", "+p.getNombre_P()));
	m_grid_prestamos->SetCellValue(i, 2, std_to_wx(p.getMovil_P()));
	m_grid_prestamos->SetCellValue(i, 3, std_to_wx(std::to_string(p.getCodigo_P())));
	m_grid_prestamos->SetCellValue(i, 4, std_to_wx(p.getTitulo_P()));
	m_grid_prestamos->SetCellValue(i, 5, std_to_wx(std::to_string(p.getDia_P())+"/"+std::to_string(p.getMes_P())+"/"+std::to_string(p.getAnio_P())));
}

void WPrincipal::AdvertenciaDeDevolucion(){
	for(int i = 0;i<m_biblioteca->CantidadPrestamos();i++){
		int fecha = 0;
		fecha += m_biblioteca->VerPrestamo(i).getAnio_P()*10000;
		fecha += m_biblioteca->VerPrestamo(i).getMes_P()*100;
		fecha += m_biblioteca->VerPrestamo(i).getDia_P();
		if(fecha < FechaActual())
			for(int j = 0;j<6;j++)
			m_grid_prestamos->SetCellBackgroundColour(i, j, *wxRED);
		if(fecha >= FechaActual() && fecha < FechaActual()+5)
			for(int j = 0;j<6;j++)
			m_grid_prestamos->SetCellBackgroundColour(i, j, *wxYELLOW);
	}
}

void WPrincipal::RefreshGrid(){
	int cant_pres = m_biblioteca->CantidadPrestamos();
	if(cant_pres > 0){
	m_grid_prestamos->ClearGrid();
	m_grid_prestamos->AppendRows(cant_pres);
	for(int i=0;i<cant_pres;i++) CargarFilas(i);
	m_grid_prestamos->SetSelectionMode(wxGrid::wxGridSelectRows);
	AdvertenciaDeDevolucion();
	}
}

void WPrincipal::ClickPplSearch( wxCommandEvent& event )  {
	if(m_biblioteca->CantidadPrestamos() == 0)wxMessageBox(c_to_wx("No hay prestamos todavia"));
	else {
	std::string buscar = wx_to_std(m_txt_ppl_search->GetValue());
		if( buscar.size() == 0) wxMessageBox(c_to_wx("Ingrese un Nombre o DNI a buscar"));
		else {int res;
			if(is_number(buscar)){
					res = m_biblioteca->BuscarDNI(std::stoi(buscar), 0);
				if(res == NO_SE_ENCUENTRA)
					res = m_biblioteca->BuscarCodigo(std::stoi(buscar), 0);
				if(res == NO_SE_ENCUENTRA) wxMessageBox("No se encontro");
			}else {
				res = m_biblioteca->BuscarApellidoYNombre(wx_to_std(m_txt_ppl_search->GetValue()), 0);
			if(res == NO_SE_ENCUENTRA)
				res = m_biblioteca->BuscarTitulo(wx_to_std(m_txt_ppl_search->GetValue()), 0);
			if(res == NO_SE_ENCUENTRA)
				{wxMessageBox("No se encontro");
			}else{
			m_grid_prestamos->SetGridCursor(res,0);
			m_grid_prestamos->SelectRow(res);
				}
			}
		}
	}
}

void WPrincipal::ClickGrilla( wxGridEvent& event )  {
	if(m_biblioteca->CantidadPrestamos() > 0){
	int columna = event.GetCol(); int c_pres = m_biblioteca->CantidadPrestamos();
	switch(columna){
	case 0: m_biblioteca->OrdenPrestamos(ORDEN_DNI_P); break;
	case 1: m_biblioteca->OrdenPrestamos(ORDEN_APELLIDO_Y_NOMBRE_P); break;
	case 2: m_biblioteca->OrdenPrestamos(ORDEN_MOVIL_P); break;
	case 3: m_biblioteca->OrdenPrestamos(ORDEN_CODIGO_P); break;
	case 4: m_biblioteca->OrdenPrestamos(ORDEN_TITULO_P); break;
	case 5: m_biblioteca->OrdenPrestamos(ORDEN_DEVOLUCION_P); break;
	}
	for(int i=0;i<c_pres;i++) CargarFilas(i);
	}
}

void WPrincipal::ClickLibros( wxCommandEvent& event )  {
	WLibro new_windows(this, m_biblioteca);
	new_windows.ShowModal();
}

void WPrincipal::ClickSocios( wxCommandEvent& event )  {
	WSocio new_windows(this, m_biblioteca);
	new_windows.ShowModal();
}

void WPrincipal::ClickPrestamos( wxCommandEvent& event )  {
	WCPrestamo new_windows(this, m_biblioteca);
	if(new_windows.ShowModal()==1)
		RefreshGrid();
}

void WPrincipal::ClickDevolucion( wxCommandEvent& event )  {
	if(m_biblioteca->CantidadPrestamos() == 0) wxMessageBox(c_to_wx("No hay ningun prestamo"));
	else {	int f_actual = m_grid_prestamos->GetGridCursorRow();
	int res = wxMessageBox(c_to_wx("¿Devolver el libro?"), m_grid_prestamos->GetCellValue(f_actual, 4), wxYES_NO);
		if (res == wxYES){
			m_grid_prestamos->DeleteRows(f_actual,1);
			m_biblioteca->Devolucion(f_actual);
			m_biblioteca->setPrestamos();
			m_biblioteca->VerLibro(f_actual).editStock(m_biblioteca->VerLibro(f_actual).getStock()+1);
			m_biblioteca->setLibros();
			wxMessageBox(c_to_wx("Devolucion Correcta"));
			RefreshGrid();
		}
	}
}


