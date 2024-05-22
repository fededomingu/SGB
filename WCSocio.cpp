#include "WCSocio.h"
#include "string_conv.h"
#include <wx/msgdlg.h>
#include "Socios.h"
#include "Biblioteca.h"

WCSocio::WCSocio(wxWindow *parent, Biblioteca *biblioteca) : C_Socio(parent), m_biblioteca(biblioteca) {
	
}

void WCSocio::ClickSocioSet( wxCommandEvent& event )  {
		int doc;
		if(wx_to_std(m_txt_socio_dni->GetValue()).size() == 0) doc = 0;
		else doc = std::stoi(wx_to_std(m_txt_socio_dni->GetValue()));
	Socios s(
		doc,
		wx_to_std(m_txt_socio_nombre->GetValue()),
		wx_to_std(m_txt_socio_apellido->GetValue()),
		wx_to_std(m_txt_socio_domicilio->GetValue()),
		wx_to_std(m_txt_socio_movil->GetValue())
		);
	std::string e = s.ValidarSocio();
	if (e.size()){
		wxMessageBox(std_to_wx(e), "Datos incorrectos", wxOK|wxICON_ERROR,this);
	}else{
		if(m_biblioteca->ExisteSocio(s.getDNI())){
			wxMessageBox(c_to_wx("El DNI ya existe"));
			m_txt_socio_dni->Clear();
			m_txt_socio_nombre->Clear();
			m_txt_socio_apellido->Clear();
			m_txt_socio_domicilio->Clear();
			m_txt_socio_movil->Clear();
		}else{
			m_biblioteca->AddSocio(s);
			m_biblioteca->setSocios();
			EndModal(1);
		}
	}
}

void WCSocio::ClickSocioClose( wxCommandEvent& event )  {
	EndModal(0);
}



