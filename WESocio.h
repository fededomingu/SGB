#ifndef WESOCIO_H
#define WESOCIO_H
#include "wxfb_project.h"

class Biblioteca;

class WESocio : public C_Socio {
	
private:
	Biblioteca *m_biblioteca;
	int indice_socio;
protected:
	void ClickSocioSet( wxCommandEvent& event )  override;
	void ClickSocioClose( wxCommandEvent& event )  override;
	
public:
	WESocio(wxWindow *parent, Biblioteca *m_biblioteca, int indice_socio);
	
};

#endif

