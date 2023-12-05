///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
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
#include <wx/statline.h>
#include <wx/grid.h>
#include <wx/frame.h>
#include <wx/spinctrl.h>
#include <wx/wrapsizer.h>
#include <wx/dialog.h>
#include <wx/statbox.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class Principal
///////////////////////////////////////////////////////////////////////////////
class Principal : public wxFrame
{
	private:

	protected:
		wxStaticText* lb_dni_codigo;
		wxTextCtrl* m_textCtrl1;
		wxButton* m_btn_search;
		wxStaticLine* m_staticline1;
		wxGrid* m_grid_sgb;
		wxStaticLine* m_staticline2;
		wxButton* m_btn_libros;
		wxButton* m_btn_socios;
		wxButton* m_btn_prestamos;
		wxButton* m_btn_devolucion;

	public:

		Principal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("SGB"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 736,444 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Principal();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Libros
///////////////////////////////////////////////////////////////////////////////
class Libros : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText12;
		wxTextCtrl* m_txt_codigo;
		wxButton* m_button7;
		wxStaticLine* m_staticline4;
		wxStaticText* m_staticText17;
		wxTextCtrl* m_txt_titulo;
		wxStaticText* m_staticText18;
		wxTextCtrl* m_txt_autor;
		wxStaticText* m_staticText19;
		wxTextCtrl* m_txt_editorial;
		wxStaticText* m_staticText20;
		wxTextCtrl* m_txt_anio;
		wxStaticText* m_staticText23;
		wxSpinCtrl* m_spin_stock;
		wxStaticLine* m_staticline5;
		wxButton* m_btn_guardar;
		wxButton* m_button9;
		wxButton* m_button10;

	public:

		Libros( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Libros"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 531,261 ), long style = wxDEFAULT_DIALOG_STYLE );

		~Libros();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Socios
///////////////////////////////////////////////////////////////////////////////
class Socios : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText12;
		wxTextCtrl* m_txt_codigo;
		wxButton* m_button7;
		wxStaticLine* m_staticline4;
		wxStaticText* m_staticText17;
		wxTextCtrl* m_txt_nombre;
		wxStaticText* m_staticText18;
		wxTextCtrl* m_txt_apellido;
		wxStaticText* m_staticText19;
		wxTextCtrl* m_txt_dni;
		wxStaticText* m_staticText20;
		wxTextCtrl* m_txt_domicilio;
		wxStaticText* m_staticText23;
		wxTextCtrl* m_txt_email;
		wxStaticText* m_staticText37;
		wxTextCtrl* m_txt_movil;
		wxStaticText* m_staticText38;
		wxTextCtrl* m_txt_dia_nac;
		wxStaticText* m_staticText39;
		wxTextCtrl* m_txt_mes_nac;
		wxStaticText* m_staticText40;
		wxTextCtrl* m_txt_anio_nac;
		wxStaticLine* m_staticline5;
		wxButton* m_btn_guardar_socio;
		wxButton* m_btn_editar_socio;
		wxButton* m_btn_cancelar_socio;

	public:

		Socios( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Socios"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 648,273 ), long style = wxDEFAULT_DIALOG_STYLE );

		~Socios();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Prestamos
///////////////////////////////////////////////////////////////////////////////
class Prestamos : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText41;
		wxTextCtrl* m_textCtrl39;
		wxButton* m_button19;
		wxStaticLine* m_staticline10;
		wxStaticText* m_staticText45;
		wxTextCtrl* m_textCtrl42;
		wxStaticText* m_staticText46;
		wxTextCtrl* m_textCtrl43;
		wxStaticText* m_staticText48;
		wxTextCtrl* m_textCtrl45;
		wxStaticText* m_staticText49;
		wxTextCtrl* m_textCtrl46;
		wxStaticText* m_staticText47;
		wxTextCtrl* m_textCtrl44;
		wxStaticText* m_staticText42;
		wxTextCtrl* m_textCtrl40;
		wxButton* m_button20;
		wxStaticLine* m_staticline14;
		wxStaticText* m_staticText50;
		wxTextCtrl* m_textCtrl47;
		wxStaticText* m_staticText51;
		wxTextCtrl* m_textCtrl48;
		wxStaticText* m_staticText52;
		wxTextCtrl* m_textCtrl49;
		wxStaticText* m_staticText53;
		wxTextCtrl* m_textCtrl50;
		wxStaticText* m_staticText54;
		wxTextCtrl* m_textCtrl51;
		wxStaticText* m_staticText55;
		wxTextCtrl* m_textCtrl52;
		wxStaticText* m_staticText56;
		wxTextCtrl* m_textCtrl53;
		wxStaticText* m_staticText57;
		wxTextCtrl* m_textCtrl54;
		wxStaticText* m_staticText58;
		wxSpinCtrl* m_spinCtrl4;
		wxButton* m_button21;
		wxButton* m_button22;

	public:

		Prestamos( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Prestamos"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 636,382 ), long style = wxDEFAULT_DIALOG_STYLE );

		~Prestamos();

};

