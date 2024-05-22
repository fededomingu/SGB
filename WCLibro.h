#ifndef WCLIBRO_H
#define WCLIBRO_H
#include "wxfb_project.h"

class Biblioteca;

class WCLibro : public C_Libro {
	
private:
	Biblioteca *m_biblioteca;
	
protected:
	void ClickLibroSet( wxCommandEvent& event )  override;
	void ClickLibroClose( wxCommandEvent& event )  override;
	
public:
	WCLibro(wxWindow *parent, Biblioteca *m_biblioteca);
};

#endif

