///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.1.0-0-g733bf3d)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

Principal::Principal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* m_grilla_prestamos;
	m_grilla_prestamos = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("DIN / Apellido y Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer3->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txt_ppl_search = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_txt_ppl_search, 1, wxALL, 5 );

	m_btn_ppl_search = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_btn_ppl_search, 0, wxALL, 5 );


	m_grilla_prestamos->Add( bSizer3, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	m_grid_prestamos = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid_prestamos->CreateGrid( 0, 6 );
	m_grid_prestamos->EnableEditing( true );
	m_grid_prestamos->EnableGridLines( true );
	m_grid_prestamos->EnableDragGridSize( false );
	m_grid_prestamos->SetMargins( 0, 0 );

	// Columns
	m_grid_prestamos->SetColSize( 0, 63 );
	m_grid_prestamos->SetColSize( 1, 207 );
	m_grid_prestamos->SetColSize( 2, 80 );
	m_grid_prestamos->SetColSize( 3, 80 );
	m_grid_prestamos->SetColSize( 4, 239 );
	m_grid_prestamos->SetColSize( 5, 143 );
	m_grid_prestamos->EnableDragColMove( false );
	m_grid_prestamos->EnableDragColSize( false );
	m_grid_prestamos->SetColLabelValue( 0, wxT("DNI") );
	m_grid_prestamos->SetColLabelValue( 1, wxT("Apellido y Nombre") );
	m_grid_prestamos->SetColLabelValue( 2, wxT("Movil") );
	m_grid_prestamos->SetColLabelValue( 3, wxT("Codigo") );
	m_grid_prestamos->SetColLabelValue( 4, wxT("Titulo") );
	m_grid_prestamos->SetColLabelValue( 5, wxT("Fecha de Devolucion") );
	m_grid_prestamos->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid_prestamos->EnableDragRowSize( true );
	m_grid_prestamos->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid_prestamos->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer4->Add( m_grid_prestamos, 1, wxALL|wxEXPAND, 5 );


	m_grilla_prestamos->Add( bSizer4, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	m_btn_libros = new wxButton( this, wxID_ANY, wxT("Libros"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_btn_libros, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_btn_Socios = new wxButton( this, wxID_ANY, wxT("Socios"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_btn_Socios, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_btn_Prestamo = new wxButton( this, wxID_ANY, wxT("Prestamos"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_btn_Prestamo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_btn_devolucion = new wxButton( this, wxID_ANY, wxT("Devolucion"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_btn_devolucion, 0, wxALL, 5 );


	m_grilla_prestamos->Add( bSizer5, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( m_grilla_prestamos );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_btn_ppl_search->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Principal::ClickPplSearch ), NULL, this );
	m_grid_prestamos->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Principal::ClickGrilla ), NULL, this );
	m_btn_libros->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Principal::ClickLibros ), NULL, this );
	m_btn_Socios->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Principal::ClickSocios ), NULL, this );
	m_btn_Prestamo->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Principal::ClickPrestamos ), NULL, this );
	m_btn_devolucion->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Principal::ClickDevolucion ), NULL, this );
}

Principal::~Principal()
{
	// Disconnect Events
	m_btn_ppl_search->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Principal::ClickPplSearch ), NULL, this );
	m_grid_prestamos->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Principal::ClickGrilla ), NULL, this );
	m_btn_libros->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Principal::ClickLibros ), NULL, this );
	m_btn_Socios->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Principal::ClickSocios ), NULL, this );
	m_btn_Prestamo->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Principal::ClickPrestamos ), NULL, this );
	m_btn_devolucion->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Principal::ClickDevolucion ), NULL, this );

}

Libro::Libro( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Codigo / Titulo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer7->Add( m_staticText3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txt_libro_search = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_txt_libro_search, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_btn_search_libro = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_btn_search_libro, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer7, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	m_grid_libros = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid_libros->CreateGrid( 0, 5 );
	m_grid_libros->EnableEditing( true );
	m_grid_libros->EnableGridLines( true );
	m_grid_libros->EnableDragGridSize( false );
	m_grid_libros->SetMargins( 0, 0 );

	// Columns
	m_grid_libros->SetColSize( 0, 70 );
	m_grid_libros->SetColSize( 1, 201 );
	m_grid_libros->SetColSize( 2, 187 );
	m_grid_libros->SetColSize( 3, 210 );
	m_grid_libros->SetColSize( 4, 80 );
	m_grid_libros->EnableDragColMove( false );
	m_grid_libros->EnableDragColSize( false );
	m_grid_libros->SetColLabelValue( 0, wxT("Codigo") );
	m_grid_libros->SetColLabelValue( 1, wxT("Titulo") );
	m_grid_libros->SetColLabelValue( 2, wxT("Autor") );
	m_grid_libros->SetColLabelValue( 3, wxT("Editorial") );
	m_grid_libros->SetColLabelValue( 4, wxT("Stock") );
	m_grid_libros->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid_libros->EnableDragRowSize( true );
	m_grid_libros->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid_libros->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer8->Add( m_grid_libros, 1, wxALL|wxEXPAND, 5 );


	bSizer6->Add( bSizer8, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_btn_libro_agregar = new wxToggleButton( this, wxID_ANY, wxT("Nuevo"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_btn_libro_agregar, 0, wxALL, 5 );

	m_btn_libro_modificar = new wxToggleButton( this, wxID_ANY, wxT("Modificar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_btn_libro_modificar, 0, wxALL, 5 );

	m_btn_libro_delet = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_btn_libro_delet, 0, wxALL, 5 );

	m_btn_libro_cancelar = new wxToggleButton( this, wxID_ANY, wxT("Cerrar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_btn_libro_cancelar->SetValue( true );
	bSizer9->Add( m_btn_libro_cancelar, 0, wxALL, 5 );


	bSizer6->Add( bSizer9, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer6 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_btn_search_libro->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Libro::ClickLibroSearch ), NULL, this );
	m_grid_libros->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Libro::ClickGrid ), NULL, this );
	m_btn_libro_agregar->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( Libro::ClickNuevo ), NULL, this );
	m_btn_libro_modificar->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( Libro::ClickEdit ), NULL, this );
	m_btn_libro_delet->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Libro::ClickDelet ), NULL, this );
	m_btn_libro_cancelar->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( Libro::ClickClose ), NULL, this );
}

Libro::~Libro()
{
	// Disconnect Events
	m_btn_search_libro->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Libro::ClickLibroSearch ), NULL, this );
	m_grid_libros->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Libro::ClickGrid ), NULL, this );
	m_btn_libro_agregar->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( Libro::ClickNuevo ), NULL, this );
	m_btn_libro_modificar->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( Libro::ClickEdit ), NULL, this );
	m_btn_libro_delet->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Libro::ClickDelet ), NULL, this );
	m_btn_libro_cancelar->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( Libro::ClickClose ), NULL, this );

}

Socio::Socio( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("DNI / Apellido y Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer14->Add( m_staticText10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txt_socio_search = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_txt_socio_search, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_btn_socio_search = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_btn_socio_search, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer13->Add( bSizer14, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );

	m_grid_socios = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid_socios->CreateGrid( 0, 4 );
	m_grid_socios->EnableEditing( true );
	m_grid_socios->EnableGridLines( true );
	m_grid_socios->EnableDragGridSize( false );
	m_grid_socios->SetMargins( 0, 0 );

	// Columns
	m_grid_socios->SetColSize( 0, 80 );
	m_grid_socios->SetColSize( 1, 184 );
	m_grid_socios->SetColSize( 2, 170 );
	m_grid_socios->SetColSize( 3, 80 );
	m_grid_socios->EnableDragColMove( true );
	m_grid_socios->EnableDragColSize( true );
	m_grid_socios->SetColLabelValue( 0, wxT("DNI") );
	m_grid_socios->SetColLabelValue( 1, wxT("Apellido y Nombre") );
	m_grid_socios->SetColLabelValue( 2, wxT("Domicilio") );
	m_grid_socios->SetColLabelValue( 3, wxT("Movil") );
	m_grid_socios->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid_socios->EnableDragRowSize( true );
	m_grid_socios->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid_socios->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer15->Add( m_grid_socios, 1, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer15, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );

	m_btn_socio_nuevo = new wxButton( this, wxID_ANY, wxT("Nuevo"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( m_btn_socio_nuevo, 0, wxALL, 5 );

	m_btn_socio_modificar = new wxButton( this, wxID_ANY, wxT("Modificar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( m_btn_socio_modificar, 0, wxALL, 5 );

	m_btn_libro_delet = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( m_btn_libro_delet, 0, wxALL, 5 );

	m_btn_socio_candelar = new wxButton( this, wxID_ANY, wxT("Cerrar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( m_btn_socio_candelar, 0, wxALL, 5 );


	bSizer13->Add( bSizer16, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer13 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_btn_socio_search->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Socio::ClickSocioSearch ), NULL, this );
	m_grid_socios->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Socio::ClickGrid ), NULL, this );
	m_btn_socio_nuevo->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Socio::ClickNuevo ), NULL, this );
	m_btn_socio_modificar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Socio::ClickEdit ), NULL, this );
	m_btn_libro_delet->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Socio::ClickDelet ), NULL, this );
	m_btn_socio_candelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Socio::ClickCancel ), NULL, this );
}

Socio::~Socio()
{
	// Disconnect Events
	m_btn_socio_search->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Socio::ClickSocioSearch ), NULL, this );
	m_grid_socios->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Socio::ClickGrid ), NULL, this );
	m_btn_socio_nuevo->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Socio::ClickNuevo ), NULL, this );
	m_btn_socio_modificar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Socio::ClickEdit ), NULL, this );
	m_btn_libro_delet->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Socio::ClickDelet ), NULL, this );
	m_btn_socio_candelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Socio::ClickCancel ), NULL, this );

}

C_Libro::C_Libro( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );

	wxWrapSizer* wSizer1;
	wSizer1 = new wxWrapSizer( wxHORIZONTAL, wxWRAPSIZER_DEFAULT_FLAGS );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Titulo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	wSizer1->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txt_libro_titulo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 300,-1 ), 0 );
	wSizer1->Add( m_txt_libro_titulo, 0, wxALL, 5 );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Autor"), wxPoint( -1,-1 ), wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	wSizer1->Add( m_staticText5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txt_libro_autor = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 300,-1 ), 0 );
	wSizer1->Add( m_txt_libro_autor, 0, wxALL, 5 );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Editorial"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	wSizer1->Add( m_staticText6, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txt_libro_editorial = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 287,-1 ), 0 );
	wSizer1->Add( m_txt_libro_editorial, 0, wxALL, 5 );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Codigo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	wSizer1->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txt_libro_codigo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), 0 );
	wSizer1->Add( m_txt_libro_codigo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("Stock"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	wSizer1->Add( m_staticText10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txt_libro_stock = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), 0 );
	wSizer1->Add( m_txt_libro_stock, 0, wxALL, 5 );


	bSizer10->Add( wSizer1, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_btn_libro_guardar = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_btn_libro_guardar, 0, wxALL, 5 );

	m_btn_libro_close = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_btn_libro_close, 0, wxALL, 5 );


	bSizer10->Add( bSizer12, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer10 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_btn_libro_guardar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( C_Libro::ClickLibroSet ), NULL, this );
	m_btn_libro_close->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( C_Libro::ClickLibroClose ), NULL, this );
}

C_Libro::~C_Libro()
{
	// Disconnect Events
	m_btn_libro_guardar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( C_Libro::ClickLibroSet ), NULL, this );
	m_btn_libro_close->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( C_Libro::ClickLibroClose ), NULL, this );

}

C_Socio::C_Socio( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );

	wxWrapSizer* wSizer2;
	wSizer2 = new wxWrapSizer( wxHORIZONTAL, wxWRAPSIZER_DEFAULT_FLAGS );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	wSizer2->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txt_socio_nombre = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 305,-1 ), 0 );
	wSizer2->Add( m_txt_socio_nombre, 0, wxALL, 5 );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Aprellido"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	wSizer2->Add( m_staticText12, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txt_socio_apellido = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 304,-1 ), 0 );
	wSizer2->Add( m_txt_socio_apellido, 0, wxALL, 5 );

	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("Domicilio"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	wSizer2->Add( m_staticText13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txt_socio_domicilio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 300,-1 ), 0 );
	wSizer2->Add( m_txt_socio_domicilio, 0, wxALL, 5 );

	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	wSizer2->Add( m_staticText14, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txt_socio_dni = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 125,-1 ), 0 );
	wSizer2->Add( m_txt_socio_dni, 0, wxALL, 5 );

	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("Movil"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	wSizer2->Add( m_staticText15, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txt_socio_movil = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 125,-1 ), 0 );
	wSizer2->Add( m_txt_socio_movil, 0, wxALL, 5 );


	bSizer17->Add( wSizer2, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	m_btn_guardar = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_btn_guardar, 0, wxALL, 5 );

	m_btn_cancelar = new wxButton( this, wxID_ANY, wxT("Cerrar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_btn_cancelar, 0, wxALL, 5 );


	bSizer17->Add( bSizer20, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer17 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_btn_guardar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( C_Socio::ClickSocioSet ), NULL, this );
	m_btn_cancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( C_Socio::ClickSocioClose ), NULL, this );
}

C_Socio::~C_Socio()
{
	// Disconnect Events
	m_btn_guardar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( C_Socio::ClickSocioSet ), NULL, this );
	m_btn_cancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( C_Socio::ClickSocioClose ), NULL, this );

}

C_Prestamo::C_Prestamo( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxHORIZONTAL );

	bSizer23->SetMinSize( wxSize( 700,-1 ) );
	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );

	bSizer22->SetMinSize( wxSize( 350,-1 ) );
	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("DNI"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText16->Wrap( -1 );
	bSizer22->Add( m_staticText16, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txt_prestamo_dni_search = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( m_txt_prestamo_dni_search, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_btn_buscar_dni_prestamo = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( m_btn_buscar_dni_prestamo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer23->Add( bSizer22, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_staticline21 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	bSizer23->Add( m_staticline21, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxHORIZONTAL );

	bSizer24->SetMinSize( wxSize( 350,-1 ) );
	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("Codigo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	bSizer24->Add( m_staticText17, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txt_prestamo_codigo_search = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer24->Add( m_txt_prestamo_codigo_search, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_btn_buscar_codigo_prestamo = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer24->Add( m_btn_buscar_codigo_prestamo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer23->Add( bSizer24, 1, wxEXPAND, 5 );


	bSizer21->Add( bSizer23, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	m_staticline1 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer21->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxHORIZONTAL );

	wxWrapSizer* wSizer3;
	wSizer3 = new wxWrapSizer( wxHORIZONTAL, wxWRAPSIZER_DEFAULT_FLAGS );

	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	wSizer3->Add( m_staticText18, 0, wxALL, 5 );

	m_txt_prestamo_nombre = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 280,-1 ), 0 );
	m_txt_prestamo_nombre->Enable( false );

	wSizer3->Add( m_txt_prestamo_nombre, 0, wxALL, 5 );

	m_staticText20 = new wxStaticText( this, wxID_ANY, wxT("Apellido"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	wSizer3->Add( m_staticText20, 0, wxALL, 5 );

	m_txt_prestamo_apellido = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 280,-1 ), 0 );
	m_txt_prestamo_apellido->Enable( false );

	wSizer3->Add( m_txt_prestamo_apellido, 0, wxALL, 5 );

	m_staticText21 = new wxStaticText( this, wxID_ANY, wxT("Domicilio"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	wSizer3->Add( m_staticText21, 0, wxALL, 5 );

	m_txt_prestamo_domicilio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 275,-1 ), 0 );
	m_txt_prestamo_domicilio->Enable( false );

	wSizer3->Add( m_txt_prestamo_domicilio, 0, wxALL, 5 );

	m_staticText22 = new wxStaticText( this, wxID_ANY, wxT("Movil"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	wSizer3->Add( m_staticText22, 0, wxALL, 5 );

	m_txt_prestamo_movil = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_txt_prestamo_movil->Enable( false );

	wSizer3->Add( m_txt_prestamo_movil, 0, wxALL, 5 );


	bSizer25->Add( wSizer3, 0, 0, 5 );

	m_staticline2 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	bSizer25->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );

	wxWrapSizer* wSizer5;
	wSizer5 = new wxWrapSizer( wxHORIZONTAL, wxWRAPSIZER_DEFAULT_FLAGS );

	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("Titulo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	wSizer5->Add( m_staticText23, 0, wxALL, 5 );

	m_txt_prestamo_titulo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 270,-1 ), 0 );
	m_txt_prestamo_titulo->Enable( false );

	wSizer5->Add( m_txt_prestamo_titulo, 0, wxALL, 5 );

	m_staticText24 = new wxStaticText( this, wxID_ANY, wxT("Autor"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	wSizer5->Add( m_staticText24, 0, wxALL, 5 );

	m_txt_prestamo_autor = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 270,-1 ), 0 );
	m_txt_prestamo_autor->Enable( false );

	wSizer5->Add( m_txt_prestamo_autor, 0, wxALL, 5 );

	m_staticText25 = new wxStaticText( this, wxID_ANY, wxT("Editorial"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	wSizer5->Add( m_staticText25, 0, wxALL, 5 );

	m_txt_prestamo_editorial = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 258,-1 ), 0 );
	m_txt_prestamo_editorial->Enable( false );

	wSizer5->Add( m_txt_prestamo_editorial, 0, wxALL, 5 );

	m_staticText26 = new wxStaticText( this, wxID_ANY, wxT("Stock"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	wSizer5->Add( m_staticText26, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txt_prestamo_stock = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_txt_prestamo_stock->Enable( false );

	wSizer5->Add( m_txt_prestamo_stock, 0, wxALL, 5 );


	bSizer25->Add( wSizer5, 1, wxEXPAND, 5 );


	bSizer21->Add( bSizer25, 1, wxEXPAND, 5 );

	m_staticline11 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer21->Add( m_staticline11, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer26;
	bSizer26 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText27 = new wxStaticText( this, wxID_ANY, wxT("Dias Prestados"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	bSizer26->Add( m_staticText27, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txt_prestamo_cant_dias = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), 0 );
	bSizer26->Add( m_txt_prestamo_cant_dias, 0, wxALL, 5 );

	m_btn_prestamo_prestar = new wxButton( this, wxID_ANY, wxT("Prestar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer26->Add( m_btn_prestamo_prestar, 0, wxALL, 5 );

	m_btn_prestamo_close = new wxButton( this, wxID_ANY, wxT("Cerrar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer26->Add( m_btn_prestamo_close, 0, wxALL, 5 );


	bSizer21->Add( bSizer26, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer21 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_btn_buscar_dni_prestamo->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( C_Prestamo::ClickBuscarDNI ), NULL, this );
	m_btn_buscar_codigo_prestamo->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( C_Prestamo::ClickBuscarCodigo ), NULL, this );
	m_btn_prestamo_prestar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( C_Prestamo::ClickSet ), NULL, this );
	m_btn_prestamo_close->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( C_Prestamo::ClickClose ), NULL, this );
}

C_Prestamo::~C_Prestamo()
{
	// Disconnect Events
	m_btn_buscar_dni_prestamo->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( C_Prestamo::ClickBuscarDNI ), NULL, this );
	m_btn_buscar_codigo_prestamo->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( C_Prestamo::ClickBuscarCodigo ), NULL, this );
	m_btn_prestamo_prestar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( C_Prestamo::ClickSet ), NULL, this );
	m_btn_prestamo_close->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( C_Prestamo::ClickClose ), NULL, this );

}
