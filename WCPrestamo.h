#ifndef WCPRESTAMO_H
#define WCPRESTAMO_H
#include "wxfb_project.h"
#include "Socios.h"
#include "Libros.h"

class Biblioteca;

class WCPrestamo : public C_Prestamo {
	
private:
		Biblioteca *m_biblioteca;
		Socios s;
		Libros l;
		int pos_libro;
protected:
	void ClickBuscarDNI( wxCommandEvent& event )  override;
	void ClickBuscarCodigo( wxCommandEvent& event )  override;
	void ClickSet( wxCommandEvent& event )  override;
	void ClickClose( wxCommandEvent& event )  override;
	
public:
	WCPrestamo(wxWindow *parent, Biblioteca *m_biblioteca);
	
};

#endif

