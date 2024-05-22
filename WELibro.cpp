#include "WELibro.h"
#include "Biblioteca.h"
#include "wxfb_project.h"
#include "string_conv.h"
#include <string>
#include <wx/textctrl.h>
#include <wx/msgdlg.h>
#include "Libros.h"
#include "Utils.h"

WELibro::WELibro(wxWindow *parent, Biblioteca *biblioteca, int ind_lib) 
	: C_Libro(parent), m_biblioteca(biblioteca), indice_libro(ind_lib)  {
	
	Libros &l =  m_biblioteca->VerLibro(indice_libro);
	m_txt_libro_codigo->SetValue(std_to_wx(std::to_string(l.getCodigo())));
	m_txt_libro_titulo->SetValue(std_to_wx(l.getTitulo()));
	m_txt_libro_autor->SetValue(std_to_wx(l.getAutor()));
	m_txt_libro_editorial->SetValue(std_to_wx(l.getEditorial()));
	m_txt_libro_stock->SetValue(std_to_wx(std::to_string(l.getStock())));
	m_txt_libro_codigo->Disable();
}

void WELibro::ClickLibroSet( wxCommandEvent& event )  {
	int stk;
	if(wx_to_std(m_txt_libro_stock->GetValue()).size()== 0) stk = 0;
	else stk = std::stoi(wx_to_std(m_txt_libro_stock->GetValue()));
	Libros l(
			std::stoi(wx_to_std(m_txt_libro_codigo->GetValue())),
			wx_to_std(m_txt_libro_titulo->GetValue()),
			wx_to_std(m_txt_libro_autor->GetValue()),
			wx_to_std(m_txt_libro_editorial->GetValue()),
			stk);
		std::string e = l.ValidarLibro();
	if (e.size()){
		wxMessageBox(std_to_wx(e), "Datos incorrectos", wxOK|wxICON_ERROR,this);
	}else{
			m_biblioteca->EditarLibro(l, indice_libro);
			m_biblioteca->setLibros();
			EndModal(1);
	}
}
void WELibro::ClickLibroClose( wxCommandEvent& event )  {
	EndModal(0);
}


