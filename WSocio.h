#ifndef WSOCIO_H
#define WSOCIO_H
#include "wxfb_project.h"
#include "Biblioteca.h"
#include <wx/window.h>


class WSocio : public Socio {
	
private:
	Biblioteca *m_biblioteca;
	void CargarFilas(int i);
	void RefreshGrid();
protected:
	void ClickGrid( wxGridEvent& event )  override;
	void ClickDelet( wxCommandEvent& event )  override;
	void ClickNuevo( wxCommandEvent& event )  override;
	void ClickEdit( wxCommandEvent& event )  override;
	void ClickCancel( wxCommandEvent& event )  override;
	void ClickSocioSearch( wxCommandEvent& event )  override;
	
public:
	WSocio(wxWindow *parent, Biblioteca *m_biblioteca);
};

#endif

