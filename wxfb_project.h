///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.1.0-0-g733bf3d)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/sizer.h>
#include <wx/grid.h>
#include <wx/frame.h>
#include <wx/tglbtn.h>
#include <wx/dialog.h>
#include <wx/wrapsizer.h>
#include <wx/statline.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class Principal
///////////////////////////////////////////////////////////////////////////////
class Principal : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText2;
		wxTextCtrl* m_txt_ppl_search;
		wxButton* m_btn_ppl_search;
		wxGrid* m_grid_prestamos;
		wxButton* m_btn_libros;
		wxButton* m_btn_Socios;
		wxButton* m_btn_Prestamo;
		wxButton* m_btn_devolucion;

		// Virtual event handlers, override them in your derived class
		virtual void ClickPplSearch( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickLibros( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickSocios( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickPrestamos( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickDevolucion( wxCommandEvent& event ) { event.Skip(); }


	public:

		Principal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("SGB"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 913,460 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Principal();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Libro
///////////////////////////////////////////////////////////////////////////////
class Libro : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText3;
		wxTextCtrl* m_txt_libro_search;
		wxButton* m_btn_search_libro;
		wxGrid* m_grid_libros;
		wxToggleButton* m_btn_libro_agregar;
		wxToggleButton* m_btn_libro_modificar;
		wxButton* m_btn_libro_delet;
		wxToggleButton* m_btn_libro_cancelar;

		// Virtual event handlers, override them in your derived class
		virtual void ClickLibroSearch( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickGrid( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickNuevo( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEdit( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickDelet( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickClose( wxCommandEvent& event ) { event.Skip(); }


	public:

		Libro( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Libros"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 850,410 ), long style = wxDEFAULT_DIALOG_STYLE );

		~Libro();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Socio
///////////////////////////////////////////////////////////////////////////////
class Socio : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText10;
		wxTextCtrl* m_txt_socio_search;
		wxButton* m_btn_socio_search;
		wxGrid* m_grid_socios;
		wxButton* m_btn_socio_nuevo;
		wxButton* m_btn_socio_modificar;
		wxButton* m_btn_libro_delet;
		wxButton* m_btn_socio_candelar;

		// Virtual event handlers, override them in your derived class
		virtual void ClickSocioSearch( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickGrid( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickNuevo( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEdit( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickDelet( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickCancel( wxCommandEvent& event ) { event.Skip(); }


	public:

		Socio( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 619,365 ), long style = wxDEFAULT_DIALOG_STYLE );

		~Socio();

};

///////////////////////////////////////////////////////////////////////////////
/// Class C_Libro
///////////////////////////////////////////////////////////////////////////////
class C_Libro : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText4;
		wxTextCtrl* m_txt_libro_titulo;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_txt_libro_autor;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_txt_libro_editorial;
		wxStaticText* m_staticText9;
		wxTextCtrl* m_txt_libro_codigo;
		wxStaticText* m_staticText10;
		wxTextCtrl* m_txt_libro_stock;
		wxButton* m_btn_libro_guardar;
		wxButton* m_btn_libro_close;

		// Virtual event handlers, override them in your derived class
		virtual void ClickLibroSet( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickLibroClose( wxCommandEvent& event ) { event.Skip(); }


	public:

		C_Libro( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Cargar Libros"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 387,241 ), long style = wxDEFAULT_DIALOG_STYLE );

		~C_Libro();

};

///////////////////////////////////////////////////////////////////////////////
/// Class C_Socio
///////////////////////////////////////////////////////////////////////////////
class C_Socio : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText11;
		wxTextCtrl* m_txt_socio_nombre;
		wxStaticText* m_staticText12;
		wxTextCtrl* m_txt_socio_apellido;
		wxStaticText* m_staticText13;
		wxTextCtrl* m_txt_socio_domicilio;
		wxStaticText* m_staticText14;
		wxTextCtrl* m_txt_socio_dni;
		wxStaticText* m_staticText15;
		wxTextCtrl* m_txt_socio_movil;
		wxButton* m_btn_guardar;
		wxButton* m_btn_cancelar;

		// Virtual event handlers, override them in your derived class
		virtual void ClickSocioSet( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickSocioClose( wxCommandEvent& event ) { event.Skip(); }


	public:

		C_Socio( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Cargar Socio"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 400,230 ), long style = wxDEFAULT_DIALOG_STYLE );

		~C_Socio();

};

///////////////////////////////////////////////////////////////////////////////
/// Class C_Prestamo
///////////////////////////////////////////////////////////////////////////////
class C_Prestamo : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText16;
		wxTextCtrl* m_txt_prestamo_dni_search;
		wxButton* m_btn_buscar_dni_prestamo;
		wxStaticLine* m_staticline21;
		wxStaticText* m_staticText17;
		wxTextCtrl* m_txt_prestamo_codigo_search;
		wxButton* m_btn_buscar_codigo_prestamo;
		wxStaticLine* m_staticline1;
		wxStaticText* m_staticText18;
		wxTextCtrl* m_txt_prestamo_nombre;
		wxStaticText* m_staticText20;
		wxTextCtrl* m_txt_prestamo_apellido;
		wxStaticText* m_staticText21;
		wxTextCtrl* m_txt_prestamo_domicilio;
		wxStaticText* m_staticText22;
		wxTextCtrl* m_txt_prestamo_movil;
		wxStaticLine* m_staticline2;
		wxStaticText* m_staticText23;
		wxTextCtrl* m_txt_prestamo_titulo;
		wxStaticText* m_staticText24;
		wxTextCtrl* m_txt_prestamo_autor;
		wxStaticText* m_staticText25;
		wxTextCtrl* m_txt_prestamo_editorial;
		wxStaticText* m_staticText26;
		wxTextCtrl* m_txt_prestamo_stock;
		wxStaticLine* m_staticline11;
		wxStaticText* m_staticText27;
		wxTextCtrl* m_txt_prestamo_cant_dias;
		wxButton* m_btn_prestamo_prestar;
		wxButton* m_btn_prestamo_close;

		// Virtual event handlers, override them in your derived class
		virtual void ClickBuscarDNI( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBuscarCodigo( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickSet( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickClose( wxCommandEvent& event ) { event.Skip(); }


	public:

		C_Prestamo( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Prestamo"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 700,300 ), long style = wxDEFAULT_DIALOG_STYLE );

		~C_Prestamo();

};

