#include "WCLibro.h"
#include "string_conv.h"
#include "Libros.h"
#include <wx/msgdlg.h>
#include "Biblioteca.h"
#include <string>

WCLibro::WCLibro(wxWindow *parent, Biblioteca *biblioteca) 
	: C_Libro(parent), m_biblioteca(biblioteca) {
	
}

void WCLibro::ClickLibroSet( wxCommandEvent& event )  {
	int cod, stk;
	if(wx_to_std(m_txt_libro_codigo->GetValue()).size()== 0) cod = 0;
	else cod = std::stoi(wx_to_std(m_txt_libro_codigo->GetValue()));
	if(wx_to_std(m_txt_libro_stock->GetValue()).size()== 0) stk = 0;
	else stk = std::stoi(wx_to_std(m_txt_libro_stock->GetValue()));
	Libros l(
			 cod,
			 wx_to_std(m_txt_libro_titulo->GetValue()),
			 wx_to_std(m_txt_libro_autor->GetValue()),
			 wx_to_std(m_txt_libro_editorial->GetValue()),
			 stk
			 );
	std::string e = l.ValidarLibro();
	if (e.size()){
		wxMessageBox(std_to_wx(e), "Datos incorrectos", wxOK|wxICON_ERROR,this);
	}else{
		if(m_biblioteca->ExisteLibro(l.getCodigo())){
			wxMessageBox(c_to_wx("EL Codigo ya existe"));
			m_txt_libro_codigo->Clear();
			m_txt_libro_titulo->Clear();
			m_txt_libro_autor->Clear();
			m_txt_libro_stock->Clear();
		}else{ 
		m_biblioteca->AddLibro(l);
		m_biblioteca->setLibros();
		}
		EndModal(1);
	}
}

void WCLibro::ClickLibroClose( wxCommandEvent& event )  {
	EndModal(0);
}


