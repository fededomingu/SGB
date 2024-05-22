#ifndef WPRINCIPAL_H
#define WPRINCIPAL_H
#include "wxfb_project.h"

class Biblioteca;

class WPrincipal : public Principal {
	
private:
	Biblioteca *m_biblioteca;
	void CargarFilas(int i);
	void RefreshGrid();
	void AdvertenciaDeDevolucion();
protected:
	void ClickPplSearch( wxCommandEvent& event )  override;
	void ClickGrilla( wxGridEvent& event )  override;
	void ClickLibros( wxCommandEvent& event )  override;
	void ClickSocios( wxCommandEvent& event )  override;
	void ClickPrestamos( wxCommandEvent& event )  override;
	void ClickDevolucion( wxCommandEvent& event )  override;
	
public:
	WPrincipal(Biblioteca *biblioteca);
	
};

#endif

