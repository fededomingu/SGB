#include "WLibro.h"
#include "Biblioteca.h"
#include "Libros.h"
#include "string_conv.h"
#include "WCLibro.h"
#include <wx/msgdlg.h>
#include "WELibro.h"
#include "Utils.h"


WLibro::WLibro(wxWindow *parent, Biblioteca *biblioteca) 
	: Libro(parent), m_biblioteca(biblioteca){
	RefreshGrid();
	}

void WLibro::CargarFilas(int i){
	Libros &l= m_biblioteca->VerLibro(i);
	m_grid_libros->SetCellValue(i, 0, std_to_wx(std::to_string(l.getCodigo())));
	m_grid_libros->SetCellValue(i, 1, std_to_wx(l.getTitulo()));
	m_grid_libros->SetCellValue(i, 2, std_to_wx(l.getAutor()));
	m_grid_libros->SetCellValue(i, 3, std_to_wx(l.getEditorial()));
	m_grid_libros->SetCellValue(i, 4, std_to_wx(std::to_string(l.getStock())));
}

void WLibro::RefreshGrid(){
	int cant_lib = m_biblioteca->CantidadLibros();
	if(cant_lib > 0){
	m_grid_libros->ClearGrid();
	m_grid_libros->AppendRows(cant_lib);
	for(int i=0;i<cant_lib;i++) CargarFilas(i);
	m_grid_libros->SetSelectionMode(wxGrid::wxGridSelectRows);
	}
}

void WLibro::ClickLibroSearch( wxCommandEvent& event )  {
	if(m_biblioteca->CantidadLibros() == 0) wxMessageBox(c_to_wx("No hay libros cargados"));
	std::string buscar = wx_to_std(m_txt_libro_search->GetValue());
	if(buscar.size() == 0) wxMessageBox(c_to_wx("Debe ingrese un Codigo o Titulo"));
		else{int res;
			if(is_number(buscar))
			res = m_biblioteca->BuscarCodigo(std::stoi(wx_to_std(m_txt_libro_search->GetValue())), 0);
			else{	res = m_biblioteca->BuscarTitulo(wx_to_std(m_txt_libro_search->GetValue()), 0);
				if(res == NO_SE_ENCUENTRA)	wxMessageBox("No se encontro");
				else{
				m_grid_libros->SetGridCursor(res,0);
				m_grid_libros->SelectRow(res);
					}
				}	
			}
}



void WLibro::ClickNuevo( wxCommandEvent& event )  {
	WCLibro new_windows(this, m_biblioteca);
	if (new_windows.ShowModal()==1) RefreshGrid();
}

void WLibro::ClickEdit( wxCommandEvent& event )  {
	int f_actual = m_grid_libros->GetGridCursorRow(); 
	if(m_biblioteca->CantidadLibros() == 0) wxMessageBox(c_to_wx("No hay ningun libro cargado todavia"));
	else {	WELibro new_windows(this, m_biblioteca, f_actual); 
	if (new_windows.ShowModal())
		CargarFilas(f_actual);
	}
}

void WLibro::ClickClose( wxCommandEvent& event )  {
	EndModal(0);
}

void WLibro::ClickDelet( wxCommandEvent& event )  {
	int f_actual = m_grid_libros->GetGridCursorRow();
	if(m_biblioteca->CantidadLibros() == 0) wxMessageBox(c_to_wx("No hay ningun libro cargado todavia"));
	else{	int res = wxMessageBox(c_to_wx("¡Eliminar libro?"), m_grid_libros->GetCellValue(f_actual, 1), wxYES_NO);
	if (res == wxYES){
		m_grid_libros->DeleteRows(f_actual, 1);
		m_biblioteca->DeletLibro(f_actual);
		m_biblioteca->setLibros();
		RefreshGrid();
		}
	}
}

void WLibro::ClickGrid( wxGridEvent& event )  {
	if(m_biblioteca->CantidadLibros() > 0){
	int columna = event.GetCol(), c_lib = m_biblioteca->CantidadLibros();
	switch(columna){
	case 0: m_biblioteca->OrdenLibros(ORDEN_CODIGO_L); break;
	case 1: m_biblioteca->OrdenLibros(ORDEN_TITULO_L); break;
	case 2: m_biblioteca->OrdenLibros(ORDEN_AUTOR_L); break;
	case 3: m_biblioteca->OrdenLibros(ORDEN_EDITORAL_L); break;
	case 4: m_biblioteca->OrdenLibros(ORDEN_STOCK_L); break;
	}
	for(int i=0;i<c_lib;i++) CargarFilas(i);
	}
}

