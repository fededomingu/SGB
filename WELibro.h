#ifndef WELIBRO_H
#define WELIBRO_H
#include "wxfb_project.h"

class Biblioteca;

class WELibro : public C_Libro {
	
private:
	Biblioteca *m_biblioteca;
	int indice_libro;
protected:
	void ClickLibroSet( wxCommandEvent& event )  override;
	void ClickLibroClose( wxCommandEvent& event )  override;
	
public:
	WELibro(wxWindow *parent, Biblioteca *m_biblioteca, int indice_libro);
	
};

#endif

