///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

Principal::Principal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	lb_dni_codigo = new wxStaticText( this, wxID_ANY, wxT("DNI / Codigo"), wxDefaultPosition, wxDefaultSize, 0 );
	lb_dni_codigo->Wrap( -1 );
	bSizer3->Add( lb_dni_codigo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_textCtrl1, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_btn_search = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_btn_search, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer2->Add( bSizer3, 0, wxEXPAND, 5 );

	m_staticline1 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer2->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );

	m_grid_sgb = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid_sgb->CreateGrid( 5, 5 );
	m_grid_sgb->EnableEditing( true );
	m_grid_sgb->EnableGridLines( true );
	m_grid_sgb->EnableDragGridSize( false );
	m_grid_sgb->SetMargins( 0, 0 );

	// Columns
	m_grid_sgb->EnableDragColMove( false );
	m_grid_sgb->EnableDragColSize( true );
	m_grid_sgb->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid_sgb->EnableDragRowSize( true );
	m_grid_sgb->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid_sgb->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer2->Add( m_grid_sgb, 1, wxALL|wxEXPAND, 5 );

	m_staticline2 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer2->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_btn_libros = new wxButton( this, wxID_ANY, wxT("Libros"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_btn_libros, 0, wxALL, 5 );

	m_btn_socios = new wxButton( this, wxID_ANY, wxT("Socios"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_btn_socios, 0, wxALL, 5 );

	m_btn_prestamos = new wxButton( this, wxID_ANY, wxT("Prestamos"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_btn_prestamos, 0, wxALL, 5 );

	m_btn_devolucion = new wxButton( this, wxID_ANY, wxT("Devolución"), wxDefaultPosition, wxDefaultSize, 0 );
	m_btn_devolucion->Enable( false );

	bSizer4->Add( m_btn_devolucion, 0, wxALL, 5 );


	bSizer2->Add( bSizer4, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer2 );
	this->Layout();

	this->Centre( wxBOTH );
}

Principal::~Principal()
{
}

Libros::Libros( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Codigo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer8->Add( m_staticText12, 0, wxALL, 5 );

	m_txt_codigo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_txt_codigo->Enable( false );

	bSizer8->Add( m_txt_codigo, 1, wxALL, 5 );

	m_button7 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button7->Enable( false );

	bSizer8->Add( m_button7, 0, wxALL, 5 );


	bSizer7->Add( bSizer8, 0, wxEXPAND, 5 );

	m_staticline4 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer7->Add( m_staticline4, 0, wxEXPAND | wxALL, 5 );

	wxWrapSizer* wSizer2;
	wSizer2 = new wxWrapSizer( wxHORIZONTAL, wxWRAPSIZER_DEFAULT_FLAGS );

	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("Titulo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	wSizer2->Add( m_staticText17, 1, wxALL, 5 );

	m_txt_titulo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 450,-1 ), 0 );
	wSizer2->Add( m_txt_titulo, 1, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("Autor"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	wSizer2->Add( m_staticText18, 0, wxALL, 5 );

	m_txt_autor = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 450,-1 ), 0 );
	wSizer2->Add( m_txt_autor, 0, wxALL, 5 );

	m_staticText19 = new wxStaticText( this, wxID_ANY, wxT("Editorial"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	wSizer2->Add( m_staticText19, 0, wxALL, 5 );

	m_txt_editorial = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	wSizer2->Add( m_txt_editorial, 0, wxALL, 5 );

	m_staticText20 = new wxStaticText( this, wxID_ANY, wxT("Año"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	wSizer2->Add( m_staticText20, 0, wxALL, 5 );

	m_txt_anio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), 0 );
	wSizer2->Add( m_txt_anio, 0, wxALL, 5 );

	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("Stcok"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	wSizer2->Add( m_staticText23, 0, wxALL, 5 );

	m_spin_stock = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	wSizer2->Add( m_spin_stock, 0, wxALL, 5 );


	bSizer7->Add( wSizer2, 1, wxEXPAND, 5 );

	m_staticline5 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer7->Add( m_staticline5, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_btn_guardar = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_btn_guardar, 0, wxALL, 5 );

	m_button9 = new wxButton( this, wxID_ANY, wxT("Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_button9, 0, wxALL, 5 );

	m_button10 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_button10, 0, wxALL, 5 );


	bSizer7->Add( bSizer11, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer7 );
	this->Layout();

	this->Centre( wxBOTH );
}

Libros::~Libros()
{
}

Socios::Socios( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* b_editar_socio;
	b_editar_socio = new wxBoxSizer( wxHORIZONTAL );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	b_editar_socio->Add( m_staticText12, 0, wxALL, 5 );

	m_txt_codigo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_txt_codigo->Enable( false );

	b_editar_socio->Add( m_txt_codigo, 1, wxALL, 5 );

	m_button7 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button7->Enable( false );

	b_editar_socio->Add( m_button7, 0, wxALL, 5 );


	bSizer7->Add( b_editar_socio, 0, wxEXPAND, 5 );

	m_staticline4 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer7->Add( m_staticline4, 0, wxEXPAND | wxALL, 5 );

	wxWrapSizer* wSizer_socio;
	wSizer_socio = new wxWrapSizer( wxHORIZONTAL, wxWRAPSIZER_DEFAULT_FLAGS );

	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	wSizer_socio->Add( m_staticText17, 1, wxALL, 5 );

	m_txt_nombre = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	wSizer_socio->Add( m_txt_nombre, 1, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("Apellido"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	wSizer_socio->Add( m_staticText18, 0, wxALL, 5 );

	m_txt_apellido = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	wSizer_socio->Add( m_txt_apellido, 0, wxALL, 5 );

	m_staticText19 = new wxStaticText( this, wxID_ANY, wxT("DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	wSizer_socio->Add( m_staticText19, 0, wxALL, 5 );

	m_txt_dni = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), 0 );
	wSizer_socio->Add( m_txt_dni, 0, wxALL, 5 );

	m_staticText20 = new wxStaticText( this, wxID_ANY, wxT("Domicilio"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	wSizer_socio->Add( m_staticText20, 0, wxALL, 5 );

	m_txt_domicilio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	wSizer_socio->Add( m_txt_domicilio, 0, wxALL, 5 );

	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("E-mail"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	wSizer_socio->Add( m_staticText23, 0, wxALL, 5 );

	m_txt_email = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 300,-1 ), 0 );
	wSizer_socio->Add( m_txt_email, 0, wxALL, 5 );

	m_staticText37 = new wxStaticText( this, wxID_ANY, wxT("Movil"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText37->Wrap( -1 );
	wSizer_socio->Add( m_staticText37, 0, wxALL, 5 );

	m_txt_movil = new wxTextCtrl( this, wxID_ANY, wxT("3425785589"), wxDefaultPosition, wxSize( 80,-1 ), 0 );
	wSizer_socio->Add( m_txt_movil, 0, wxALL, 5 );

	wxStaticBoxSizer* sb_fecha_nacimiento;
	sb_fecha_nacimiento = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Fecha de Nacimiento") ), wxHORIZONTAL );

	m_staticText38 = new wxStaticText( sb_fecha_nacimiento->GetStaticBox(), wxID_ANY, wxT("Dia"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText38->Wrap( -1 );
	sb_fecha_nacimiento->Add( m_staticText38, 0, wxALL, 5 );

	m_txt_dia_nac = new wxTextCtrl( sb_fecha_nacimiento->GetStaticBox(), wxID_ANY, wxT("12"), wxDefaultPosition, wxSize( 30,-1 ), 0 );
	sb_fecha_nacimiento->Add( m_txt_dia_nac, 0, wxALL, 5 );

	m_staticText39 = new wxStaticText( sb_fecha_nacimiento->GetStaticBox(), wxID_ANY, wxT("Mes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText39->Wrap( -1 );
	sb_fecha_nacimiento->Add( m_staticText39, 0, wxALL, 5 );

	m_txt_mes_nac = new wxTextCtrl( sb_fecha_nacimiento->GetStaticBox(), wxID_ANY, wxT("05"), wxDefaultPosition, wxSize( 30,-1 ), 0 );
	sb_fecha_nacimiento->Add( m_txt_mes_nac, 0, wxALL, 5 );

	m_staticText40 = new wxStaticText( sb_fecha_nacimiento->GetStaticBox(), wxID_ANY, wxT("Año"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText40->Wrap( -1 );
	sb_fecha_nacimiento->Add( m_staticText40, 0, wxALL, 5 );

	m_txt_anio_nac = new wxTextCtrl( sb_fecha_nacimiento->GetStaticBox(), wxID_ANY, wxT("1981"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	sb_fecha_nacimiento->Add( m_txt_anio_nac, 0, wxALL, 5 );


	wSizer_socio->Add( sb_fecha_nacimiento, 1, wxEXPAND, 5 );


	bSizer7->Add( wSizer_socio, 1, wxEXPAND, 5 );

	m_staticline5 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer7->Add( m_staticline5, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* b_menu_socio;
	b_menu_socio = new wxBoxSizer( wxHORIZONTAL );

	m_btn_guardar_socio = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	b_menu_socio->Add( m_btn_guardar_socio, 0, wxALL, 5 );

	m_btn_editar_socio = new wxButton( this, wxID_ANY, wxT("Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	b_menu_socio->Add( m_btn_editar_socio, 0, wxALL, 5 );

	m_btn_cancelar_socio = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	b_menu_socio->Add( m_btn_cancelar_socio, 0, wxALL, 5 );


	bSizer7->Add( b_menu_socio, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer7 );
	this->Layout();

	this->Centre( wxBOTH );
}

Socios::~Socios()
{
}

Prestamos::Prestamos( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer26;
	bSizer26 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxHORIZONTAL );

	bSizer23->SetMinSize( wxSize( 300,-1 ) );
	m_staticText41 = new wxStaticText( this, wxID_ANY, wxT("DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	bSizer23->Add( m_staticText41, 0, wxALL, 5 );

	m_textCtrl39 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer23->Add( m_textCtrl39, 1, wxALL, 5 );

	m_button19 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer23->Add( m_button19, 0, wxALL, 5 );


	bSizer20->Add( bSizer23, 0, wxEXPAND, 5 );

	m_staticline10 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer20->Add( m_staticline10, 0, wxEXPAND | wxALL, 5 );

	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Socio") ), wxVERTICAL );

	sbSizer3->SetMinSize( wxSize( 300,-1 ) );
	wxWrapSizer* wSizer5;
	wSizer5 = new wxWrapSizer( wxHORIZONTAL, wxWRAPSIZER_DEFAULT_FLAGS );

	wSizer5->SetMinSize( wxSize( 300,180 ) );
	m_staticText45 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45->Wrap( -1 );
	wSizer5->Add( m_staticText45, 0, wxALL, 5 );

	m_textCtrl42 = new wxTextCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	m_textCtrl42->Enable( false );

	wSizer5->Add( m_textCtrl42, 0, wxALL, 5 );

	m_staticText46 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("Apellido"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText46->Wrap( -1 );
	wSizer5->Add( m_staticText46, 0, wxALL, 5 );

	m_textCtrl43 = new wxTextCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	m_textCtrl43->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_textCtrl43->Enable( false );

	wSizer5->Add( m_textCtrl43, 0, wxALL, 5 );

	m_staticText48 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("Domicilio"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText48->Wrap( -1 );
	wSizer5->Add( m_staticText48, 0, wxALL, 5 );

	m_textCtrl45 = new wxTextCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	m_textCtrl45->Enable( false );

	wSizer5->Add( m_textCtrl45, 0, wxALL, 5 );

	m_staticText49 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("E-mail"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText49->Wrap( -1 );
	wSizer5->Add( m_staticText49, 0, wxALL, 5 );

	m_textCtrl46 = new wxTextCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 210,-1 ), 0 );
	m_textCtrl46->Enable( false );

	wSizer5->Add( m_textCtrl46, 0, wxALL, 5 );

	m_staticText47 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("Movil"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47->Wrap( -1 );
	wSizer5->Add( m_staticText47, 0, wxALL, 5 );

	m_textCtrl44 = new wxTextCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), 0 );
	m_textCtrl44->Enable( false );

	wSizer5->Add( m_textCtrl44, 0, wxALL, 5 );


	sbSizer3->Add( wSizer5, 1, wxEXPAND, 5 );


	bSizer20->Add( sbSizer3, 0, wxEXPAND, 5 );


	bSizer26->Add( bSizer20, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxHORIZONTAL );

	bSizer24->SetMinSize( wxSize( 300,-1 ) );
	m_staticText42 = new wxStaticText( this, wxID_ANY, wxT("Codigo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText42->Wrap( -1 );
	bSizer24->Add( m_staticText42, 0, wxALL, 5 );

	m_textCtrl40 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer24->Add( m_textCtrl40, 1, wxALL, 5 );

	m_button20 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer24->Add( m_button20, 0, wxALL, 5 );


	bSizer21->Add( bSizer24, 0, wxEXPAND, 5 );

	m_staticline14 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer21->Add( m_staticline14, 0, wxEXPAND | wxALL, 5 );

	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Libro") ), wxVERTICAL );

	sbSizer4->SetMinSize( wxSize( 300,-1 ) );
	wxWrapSizer* wSizer6;
	wSizer6 = new wxWrapSizer( wxHORIZONTAL, wxWRAPSIZER_DEFAULT_FLAGS );

	wSizer6->SetMinSize( wxSize( 300,180 ) );
	m_staticText50 = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, wxT("Titulo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText50->Wrap( -1 );
	wSizer6->Add( m_staticText50, 0, wxALL, 5 );

	m_textCtrl47 = new wxTextCtrl( sbSizer4->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 220,-1 ), 0 );
	m_textCtrl47->Enable( false );

	wSizer6->Add( m_textCtrl47, 0, wxALL, 5 );

	m_staticText51 = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, wxT("Autor"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText51->Wrap( -1 );
	wSizer6->Add( m_staticText51, 0, wxALL, 5 );

	m_textCtrl48 = new wxTextCtrl( sbSizer4->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 220,-1 ), 0 );
	m_textCtrl48->Enable( false );

	wSizer6->Add( m_textCtrl48, 0, wxALL, 5 );

	m_staticText52 = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, wxT("Editorial"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText52->Wrap( -1 );
	wSizer6->Add( m_staticText52, 0, wxALL, 5 );

	m_textCtrl49 = new wxTextCtrl( sbSizer4->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 210,-1 ), 0 );
	m_textCtrl49->Enable( false );

	wSizer6->Add( m_textCtrl49, 0, wxALL, 5 );

	m_staticText53 = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, wxT("Año"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText53->Wrap( -1 );
	wSizer6->Add( m_staticText53, 0, wxALL, 5 );

	m_textCtrl50 = new wxTextCtrl( sbSizer4->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), 0 );
	m_textCtrl50->Enable( false );

	wSizer6->Add( m_textCtrl50, 0, wxALL, 5 );

	m_staticText54 = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, wxT("Stock"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText54->Wrap( -1 );
	wSizer6->Add( m_staticText54, 0, wxALL, 5 );

	m_textCtrl51 = new wxTextCtrl( sbSizer4->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), 0 );
	m_textCtrl51->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_textCtrl51->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_textCtrl51->Enable( false );

	wSizer6->Add( m_textCtrl51, 0, wxALL, 5 );


	sbSizer4->Add( wSizer6, 0, 0, 5 );


	bSizer21->Add( sbSizer4, 0, 0, 5 );


	bSizer26->Add( bSizer21, 1, wxEXPAND, 5 );


	bSizer19->Add( bSizer26, 0, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer5;
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Fecha de Prestamo") ), wxHORIZONTAL );

	m_staticText55 = new wxStaticText( sbSizer5->GetStaticBox(), wxID_ANY, wxT("Dia"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText55->Wrap( -1 );
	sbSizer5->Add( m_staticText55, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl52 = new wxTextCtrl( sbSizer5->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), 0 );
	sbSizer5->Add( m_textCtrl52, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText56 = new wxStaticText( sbSizer5->GetStaticBox(), wxID_ANY, wxT("Mes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText56->Wrap( -1 );
	sbSizer5->Add( m_staticText56, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl53 = new wxTextCtrl( sbSizer5->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), 0 );
	sbSizer5->Add( m_textCtrl53, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText57 = new wxStaticText( sbSizer5->GetStaticBox(), wxID_ANY, wxT("Año"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText57->Wrap( -1 );
	sbSizer5->Add( m_staticText57, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl54 = new wxTextCtrl( sbSizer5->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 70,-1 ), 0 );
	sbSizer5->Add( m_textCtrl54, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText58 = new wxStaticText( sbSizer5->GetStaticBox(), wxID_ANY, wxT("Dias Prestados"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText58->Wrap( -1 );
	sbSizer5->Add( m_staticText58, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl4 = new wxSpinCtrl( sbSizer5->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 10, 0 );
	sbSizer5->Add( m_spinCtrl4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer19->Add( sbSizer5, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxHORIZONTAL );

	m_button21 = new wxButton( this, wxID_ANY, wxT("Prestar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer25->Add( m_button21, 0, wxALL, 5 );

	m_button22 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer25->Add( m_button22, 0, wxALL, 5 );


	bSizer19->Add( bSizer25, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer19 );
	this->Layout();

	this->Centre( wxBOTH );
}

Prestamos::~Prestamos()
{
}
