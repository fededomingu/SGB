#include "WCPrestamo.h"
#include "Biblioteca.h"
#include <wx/window.h>
#include "string_conv.h"
#include "Socios.h"
#include "Libros.h"
#include "Prestamos.h"
#include "Utils.h"
#include <cstring>
#include <string>
#include <wx/msgdlg.h>

WCPrestamo::WCPrestamo(wxWindow *parent, Biblioteca *biblioteca) 
	: C_Prestamo(parent), m_biblioteca(biblioteca) {
	
	Socios s;
	Libros l;
	int pos_libro;
	
}

void WCPrestamo::ClickBuscarDNI( wxCommandEvent& event )  {
	int doc;
	if(wx_to_std(m_txt_prestamo_dni_search->GetValue()).size() == 0) doc = 0;
	else doc = std::stoi(wx_to_std(m_txt_prestamo_dni_search->GetValue()));
	int pos_socio = m_biblioteca->BuscarDNI(doc, 0);
	if(pos_socio == NO_SE_ENCUENTRA){wxMessageBox("Socio no encontrado");
	}else {  s=m_biblioteca->VerSocio(pos_socio);
		m_txt_prestamo_nombre->SetValue(wx_to_std(s.getNombre()));
		m_txt_prestamo_apellido->SetValue(wx_to_std(s.getApellido()));
		m_txt_prestamo_domicilio->SetValue(wx_to_std(s.getDomicilio()));
		m_txt_prestamo_movil->SetValue(wx_to_std(s.getMovil()));
		}
	}

void WCPrestamo::ClickBuscarCodigo( wxCommandEvent& event )  {
	int cod;
	if(wx_to_std(m_txt_prestamo_codigo_search->GetValue()).size() == 0) cod = 0;
	else cod = std::stoi(wx_to_std(m_txt_prestamo_codigo_search->GetValue()));
	pos_libro = m_biblioteca->BuscarCodigo(cod, 0);
	if(pos_libro == NO_SE_ENCUENTRA){wxMessageBox("Codigo no encontrado");
	}else{	l = m_biblioteca->VerLibro(pos_libro);
		m_txt_prestamo_titulo->SetValue(wx_to_std(l.getTitulo()));
		m_txt_prestamo_autor->SetValue(wx_to_std(l.getAutor()));
		m_txt_prestamo_editorial->SetValue(wx_to_std(l.getEditorial()));
		m_txt_prestamo_stock->SetValue(wx_to_std(std::to_string(l.getStock())));
		}
	}


void WCPrestamo::ClickSet( wxCommandEvent& event )  {
	int dias_pres;
	if(wx_to_std(m_txt_prestamo_cant_dias->GetValue()).size() == 0 ) dias_pres = 0;
	else dias_pres = std::stoi(wx_to_std(m_txt_prestamo_cant_dias->GetValue()));
	 Prestamos p(s, l, dias_pres);
		std::string e = p.ValidarPrestamo(s, l);
		if(e.size()) wxMessageBox(std_to_wx(e), "Datos Incorrectos", wxOK|wxICON_ERROR, this);
		else{
		m_biblioteca->AddPrestamo(p);
		m_biblioteca->setPrestamos();
		m_biblioteca->VerLibro(pos_libro).editStock(m_biblioteca->VerLibro(pos_libro).getStock()-1);
		m_biblioteca->setLibros();
		wxMessageBox(c_to_wx("Prestamo registrado correctamente"));
		EndModal(1);
		}
}

void WCPrestamo::ClickClose( wxCommandEvent& event )  {
	EndModal(0);
}

