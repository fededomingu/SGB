#ifndef WCSOCIO_H
#define WCSOCIO_H
#include "wxfb_project.h"

class Biblioteca;

class WCSocio : public C_Socio {
	
private:
	Biblioteca *m_biblioteca;
	
protected:
	void ClickSocioSet( wxCommandEvent& event )  override;
	void ClickSocioClose( wxCommandEvent& event )  override;
	
public:
	WCSocio(wxWindow *parent, Biblioteca *m_biblioteca);
	
};

#endif

