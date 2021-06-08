///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 16 2016)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "Ihm.h"

///////////////////////////////////////////////////////////////////////////

PrincFrameCatalogue::PrincFrameCatalogue( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );
	
	
	this->SetSizer( bSizer7 );
	this->Layout();
	m_menubar3 = new wxMenuBar( 0 );
	LyceeGeneralTechno = new wxMenu();
	wxMenuItem* m_menuItem2;
	m_menuItem2 = new wxMenuItem( LyceeGeneralTechno, wxID_ANY, wxString( wxT("BacSTI2D") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeGeneralTechno->Append( m_menuItem2 );
	
	wxMenuItem* m_menuItem3;
	m_menuItem3 = new wxMenuItem( LyceeGeneralTechno, wxID_ANY, wxString( wxT("Bac S") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeGeneralTechno->Append( m_menuItem3 );
	
	wxMenuItem* m_menuItem4;
	m_menuItem4 = new wxMenuItem( LyceeGeneralTechno, wxID_ANY, wxString( wxT("BacL") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeGeneralTechno->Append( m_menuItem4 );
	
	wxMenuItem* Ajouter;
	Ajouter = new wxMenuItem( LyceeGeneralTechno, wxID_ANY, wxString( wxT("+ Ajouter une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeGeneralTechno->Append( Ajouter );
	
	m_menubar3->Append( LyceeGeneralTechno, wxT("Lycee general et Technologique") ); 
	
	LyceeProfessionnel = new wxMenu();
	wxMenuItem* m_menuItem6;
	m_menuItem6 = new wxMenuItem( LyceeProfessionnel, wxID_ANY, wxString( wxT("Conception") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeProfessionnel->Append( m_menuItem6 );
	
	wxMenuItem* m_menuItem7;
	m_menuItem7 = new wxMenuItem( LyceeProfessionnel, wxID_ANY, wxString( wxT("Electrotechnique") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeProfessionnel->Append( m_menuItem7 );
	
	wxMenuItem* m_menuItem8;
	m_menuItem8 = new wxMenuItem( LyceeProfessionnel, wxID_ANY, wxString( wxT("Automobile") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeProfessionnel->Append( m_menuItem8 );
	
	wxMenuItem* m_menuItem9;
	m_menuItem9 = new wxMenuItem( LyceeProfessionnel, wxID_ANY, wxString( wxT("Carosserie") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeProfessionnel->Append( m_menuItem9 );
	
	wxMenuItem* m_menuItem10;
	m_menuItem10 = new wxMenuItem( LyceeProfessionnel, wxID_ANY, wxString( wxT("Technique Outillage") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeProfessionnel->Append( m_menuItem10 );
	
	wxMenuItem* m_menuItem11;
	m_menuItem11 = new wxMenuItem( LyceeProfessionnel, wxID_ANY, wxString( wxT("+ Ajouter une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeProfessionnel->Append( m_menuItem11 );
	
	m_menubar3->Append( LyceeProfessionnel, wxT("Lycee Professionnel") ); 
	
	Alternance = new wxMenu();
	wxMenuItem* m_menuItem21;
	m_menuItem21 = new wxMenuItem( Alternance, wxID_ANY, wxString( wxT("BTS IPE") ) , wxEmptyString, wxITEM_NORMAL );
	Alternance->Append( m_menuItem21 );
	
	wxMenuItem* m_menuItem22;
	m_menuItem22 = new wxMenuItem( Alternance, wxID_ANY, wxString( wxT("BTS PCI") ) , wxEmptyString, wxITEM_NORMAL );
	Alternance->Append( m_menuItem22 );
	
	wxMenuItem* m_menuItem23;
	m_menuItem23 = new wxMenuItem( Alternance, wxID_ANY, wxString( wxT("+ Ajouter une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	Alternance->Append( m_menuItem23 );
	
	m_menubar3->Append( Alternance, wxT("Alternance") ); 
	
	EnseignementSuperieur = new wxMenu();
	m_menu7 = new wxMenu();
	wxMenuItem* m_menu7Item = new wxMenuItem( EnseignementSuperieur, wxID_ANY, wxT("BTS"), wxEmptyString, wxITEM_NORMAL, m_menu7 );
	wxMenuItem* m_menuItem12;
	m_menuItem12 = new wxMenuItem( m_menu7, wxID_ANY, wxString( wxT("Maintenance Vehicule") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu7->Append( m_menuItem12 );
	
	wxMenuItem* m_menuItem13;
	m_menuItem13 = new wxMenuItem( m_menu7, wxID_ANY, wxString( wxT("Conception Produits Industriels") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu7->Append( m_menuItem13 );
	
	wxMenuItem* m_menuItem14;
	m_menuItem14 = new wxMenuItem( m_menu7, wxID_ANY, wxString( wxT("Conception de processus de realisation") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu7->Append( m_menuItem14 );
	
	wxMenuItem* m_menuItem15;
	m_menuItem15 = new wxMenuItem( m_menu7, wxID_ANY, wxString( wxT("Electrotechnique") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu7->Append( m_menuItem15 );
	
	wxMenuItem* m_menuItem16;
	m_menuItem16 = new wxMenuItem( m_menu7, wxID_ANY, wxString( wxT("Systemes Numeriques") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu7->Append( m_menuItem16 );
	
	wxMenuItem* m_menuItem17;
	m_menuItem17 = new wxMenuItem( m_menu7, wxID_ANY, wxString( wxT("+ Ajouter une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu7->Append( m_menuItem17 );
	
	EnseignementSuperieur->Append( m_menu7Item );
	
	m_menu8 = new wxMenu();
	wxMenuItem* m_menu8Item = new wxMenuItem( EnseignementSuperieur, wxID_ANY, wxT("CPGE"), wxEmptyString, wxITEM_NORMAL, m_menu8 );
	wxMenuItem* m_menuItem18;
	m_menuItem18 = new wxMenuItem( m_menu8, wxID_ANY, wxString( wxT("PCS/IMPCSI") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu8->Append( m_menuItem18 );
	
	wxMenuItem* m_menuItem19;
	m_menuItem19 = new wxMenuItem( m_menu8, wxID_ANY, wxString( wxT("PTSIPTPT") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu8->Append( m_menuItem19 );
	
	wxMenuItem* m_menuItem20;
	m_menuItem20 = new wxMenuItem( m_menu8, wxID_ANY, wxString( wxT("+ Ajouter une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu8->Append( m_menuItem20 );
	
	EnseignementSuperieur->Append( m_menu8Item );
	
	m_menubar3->Append( EnseignementSuperieur, wxT("Enseignement superieur") ); 
	
	this->SetMenuBar( m_menubar3 );
	
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( Ajouter->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuAjouterFormation ) );
}

PrincFrameCatalogue::~PrincFrameCatalogue()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuAjouterFormation ) );
	
}

AjouterFormation::AjouterFormation( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Nom"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer2->Add( m_staticText1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterNom = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterNom, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Sigle"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer2->Add( m_staticText6, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterSigle = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterSigle, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Video"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer2->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterVideo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterVideo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText71 = new wxStaticText( this, wxID_ANY, wxT("Prospectus"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	bSizer2->Add( m_staticText71, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterProspectus = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterProspectus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Code"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer2->Add( m_staticText8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterCode = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterCode, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Emplacement"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer2->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterEmplacement = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterEmplacement, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	boutonConfirmer = new wxButton( this, wxID_ANY, wxT("Confirmer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( boutonConfirmer, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	this->SetSizer( bSizer2 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	TextCtrlAjouterNom->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( AjouterFormation::AjouterNomEvt ), NULL, this );
	boutonConfirmer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormation::buttonConfirmerEvt ), NULL, this );
}

AjouterFormation::~AjouterFormation()
{
	// Disconnect Events
	TextCtrlAjouterNom->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( AjouterFormation::AjouterNomEvt ), NULL, this );
	boutonConfirmer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormation::buttonConfirmerEvt ), NULL, this );
	
}
