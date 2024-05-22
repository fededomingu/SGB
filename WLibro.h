#ifndef WLIBRO_H
#define WLIBRO_H
#include "wxfb_project.h"
class Biblioteca;

class WLibro : public Libro {
	
private:
	Biblioteca *m_biblioteca;
	void CargarFilas(int i);
	void RefreshGrid();
protected:
	void ClickGrid( wxGridEvent& event )  override;
	void ClickDelet( wxCommandEvent& event )  override;
	void ClickNuevo( wxCommandEvent& event )  override;
	void ClickEdit( wxCommandEvent& event )  override;
	void ClickClose( wxCommandEvent& event )  override;
	void ClickLibroSearch( wxCommandEvent& event )  override;
	
public:
	WLibro(wxWindow *parent, Biblioteca *m_biblioteca);
	
};

#endif

