#include "WESocio.h"
#include "Biblioteca.h"
#include "string_conv.h"
#include <wx/msgdlg.h>

WESocio::WESocio(wxWindow *parent, Biblioteca *biblioteca, int ind_soc) 
	: C_Socio(parent), m_biblioteca(biblioteca), indice_socio(ind_soc) {
	
	Socios &s = m_biblioteca->VerSocio(indice_socio);
	m_txt_socio_dni->SetValue(std_to_wx(std::to_string(s.getDNI())));
	m_txt_socio_nombre->SetValue(s.getNombre());
	m_txt_socio_apellido->SetValue(s.getApellido());
	m_txt_socio_domicilio->SetValue(s.getDomicilio());
	m_txt_socio_movil->SetValue(s.getMovil());
	m_txt_socio_dni->Disable();
	
}

void WESocio::ClickSocioSet( wxCommandEvent& event )  {
	
	Socios s(
			 std::stoi(wx_to_std(m_txt_socio_dni->GetValue())),
			 wx_to_std(m_txt_socio_nombre->GetValue()),
			 wx_to_std(m_txt_socio_apellido->GetValue()),
			 wx_to_std(m_txt_socio_domicilio->GetValue()),
			 wx_to_std(m_txt_socio_movil->GetValue())
			 );
	std::string e = s.ValidarSocio();
	if (e.size()>0){
		wxMessageBox(std_to_wx(e), "Datos incorrectos", wxOK|wxICON_ERROR,this);
	}else{
		if(m_biblioteca->ExisteSocio(s.getDNI())){
			wxMessageBox(c_to_wx("El DNI ya existe"));
		}else{
		m_biblioteca->EditarSocio(s,indice_socio);
		m_biblioteca->setSocios();
		EndModal(1);
		}
	}
}	

void WESocio::ClickSocioClose( wxCommandEvent& event )  {
	EndModal(0);
}

