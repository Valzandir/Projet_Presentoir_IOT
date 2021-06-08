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
	
	m_staticText29 = new wxStaticText( this, wxID_ANY, wxT("Bienvenue dans le catalogue des formations. (CRUD)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	bSizer7->Add( m_staticText29, 0, wxALL, 5 );
	
	m_staticText30 = new wxStaticText( this, wxID_ANY, wxT("Cliquez sur les menus dans la barre des menus pour acceder aux options concernant les formations."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	bSizer7->Add( m_staticText30, 0, wxALL, 5 );
	
	Lister_Alternance = new wxButton( this, wxID_ANY, wxT("ListerAlternance"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( Lister_Alternance, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer7 );
	this->Layout();
	m_menubar3 = new wxMenuBar( 0 );
	Fichier_options = new wxMenu();
	wxMenuItem* ExporterFormation;
	ExporterFormation = new wxMenuItem( Fichier_options, wxID_ANY, wxString( wxT("Exporter les formations") ) , wxEmptyString, wxITEM_NORMAL );
	Fichier_options->Append( ExporterFormation );
	
	wxMenuItem* ListerFormations;
	ListerFormations = new wxMenuItem( Fichier_options, wxID_ANY, wxString( wxT("Lister les formations") ) , wxEmptyString, wxITEM_NORMAL );
	Fichier_options->Append( ListerFormations );
	
	m_menubar3->Append( Fichier_options, wxT("Fichier") ); 
	
	Alternance = new wxMenu();
	wxMenuItem* AjouterFormationAlternance;
	AjouterFormationAlternance = new wxMenuItem( Alternance, wxID_ANY, wxString( wxT("+ Ajouter une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	Alternance->Append( AjouterFormationAlternance );
	
	wxMenuItem* SupprimerFormationAlternance;
	SupprimerFormationAlternance = new wxMenuItem( Alternance, wxID_ANY, wxString( wxT("- Supprimer une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	Alternance->Append( SupprimerFormationAlternance );
	
	wxMenuItem* ModifierFormationAlternance;
	ModifierFormationAlternance = new wxMenuItem( Alternance, wxID_ANY, wxString( wxT("Modifier une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	Alternance->Append( ModifierFormationAlternance );
	
	m_menubar3->Append( Alternance, wxT("Alternance") ); 
	
	EnseignementSuperieur = new wxMenu();
	wxMenuItem* AjouterFormationEnseignementSup;
	AjouterFormationEnseignementSup = new wxMenuItem( EnseignementSuperieur, wxID_ANY, wxString( wxT("+ Ajouter une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	EnseignementSuperieur->Append( AjouterFormationEnseignementSup );
	
	wxMenuItem* SupprimerFormationEnseignementSuperieur;
	SupprimerFormationEnseignementSuperieur = new wxMenuItem( EnseignementSuperieur, wxID_ANY, wxString( wxT("- Supprimer une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	EnseignementSuperieur->Append( SupprimerFormationEnseignementSuperieur );
	
	wxMenuItem* ModifierFormationEnseignementSuperieur;
	ModifierFormationEnseignementSuperieur = new wxMenuItem( EnseignementSuperieur, wxID_ANY, wxString( wxT("Modifier une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	EnseignementSuperieur->Append( ModifierFormationEnseignementSuperieur );
	
	m_menubar3->Append( EnseignementSuperieur, wxT("Enseignement superieur") ); 
	
	LyceeGeneralTechno = new wxMenu();
	wxMenuItem* AjouterFormationLGT;
	AjouterFormationLGT = new wxMenuItem( LyceeGeneralTechno, wxID_ANY, wxString( wxT("+ Ajouter une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeGeneralTechno->Append( AjouterFormationLGT );
	
	wxMenuItem* SupprimerFormationLGT;
	SupprimerFormationLGT = new wxMenuItem( LyceeGeneralTechno, wxID_ANY, wxString( wxT("- Supprimer une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeGeneralTechno->Append( SupprimerFormationLGT );
	
	wxMenuItem* ModifierFormationLGT;
	ModifierFormationLGT = new wxMenuItem( LyceeGeneralTechno, wxID_ANY, wxString( wxT("Modifier une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeGeneralTechno->Append( ModifierFormationLGT );
	
	m_menubar3->Append( LyceeGeneralTechno, wxT("Lycee general et Technologique") ); 
	
	LyceeProfessionnel = new wxMenu();
	wxMenuItem* AjouterFormationLP;
	AjouterFormationLP = new wxMenuItem( LyceeProfessionnel, wxID_ANY, wxString( wxT("+ Ajouter une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeProfessionnel->Append( AjouterFormationLP );
	
	wxMenuItem* SupprimerFormationLP;
	SupprimerFormationLP = new wxMenuItem( LyceeProfessionnel, wxID_ANY, wxString( wxT("- Supprimer une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeProfessionnel->Append( SupprimerFormationLP );
	
	wxMenuItem* ModifierFormationLP;
	ModifierFormationLP = new wxMenuItem( LyceeProfessionnel, wxID_ANY, wxString( wxT("Modifier une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeProfessionnel->Append( ModifierFormationLP );
	
	m_menubar3->Append( LyceeProfessionnel, wxT("Lycee Professionnel") ); 
	
	A_Propos = new wxMenu();
	wxMenuItem* ExporterFormation1;
	ExporterFormation1 = new wxMenuItem( A_Propos, wxID_ANY, wxString( wxT("Exporter les formations") ) , wxEmptyString, wxITEM_NORMAL );
	A_Propos->Append( ExporterFormation1 );
	
	wxMenuItem* ListerFormations1;
	ListerFormations1 = new wxMenuItem( A_Propos, wxID_ANY, wxString( wxT("Lister les formations") ) , wxEmptyString, wxITEM_NORMAL );
	A_Propos->Append( ListerFormations1 );
	
	wxMenuItem* Documentation_IHM_CRUD;
	Documentation_IHM_CRUD = new wxMenuItem( A_Propos, wxID_ANY, wxString( wxT("Documentation") ) , wxEmptyString, wxITEM_NORMAL );
	A_Propos->Append( Documentation_IHM_CRUD );
	
	wxMenuItem* MenuQuitter;
	MenuQuitter = new wxMenuItem( A_Propos, wxID_ANY, wxString( wxT("Quitter") ) , wxEmptyString, wxITEM_NORMAL );
	A_Propos->Append( MenuQuitter );
	
	m_menubar3->Append( A_Propos, wxT("A Propos") ); 
	
	this->SetMenuBar( m_menubar3 );
	
	
	this->Centre( wxBOTH );
	
	// Connect Events
	Lister_Alternance->Connect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( PrincFrameCatalogue::onListerMouseOpen ), NULL, this );
	Lister_Alternance->Connect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( PrincFrameCatalogue::onListerMouseClose ), NULL, this );
	this->Connect( ExporterFormation->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuExporterFormation ) );
	this->Connect( ListerFormations->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuListerFormation ) );
	this->Connect( AjouterFormationAlternance->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuAjouterFormationAlternance ) );
	this->Connect( SupprimerFormationAlternance->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuSupprimerFormationAlternance ) );
	this->Connect( ModifierFormationAlternance->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuModifierFormationAlternance ) );
	this->Connect( AjouterFormationEnseignementSup->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuAjouterFormationEnseignementSuperieur ) );
	this->Connect( SupprimerFormationEnseignementSuperieur->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuSupprimerFormationEnseignementSuperieur ) );
	this->Connect( ModifierFormationEnseignementSuperieur->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuModifierFormationEnseignementSuperieur ) );
	this->Connect( AjouterFormationLGT->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuAjouterFormationLGT ) );
	this->Connect( SupprimerFormationLGT->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuSupprimerFormationLGT ) );
	this->Connect( ModifierFormationLGT->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuModifierFormationLGT ) );
	this->Connect( AjouterFormationLP->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuAjouterFormationLP ) );
	this->Connect( SupprimerFormationLP->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuSupprimerFormationLP ) );
	this->Connect( ModifierFormationLP->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuModifierFormationLP ) );
	this->Connect( ExporterFormation1->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuExporterFormation ) );
	this->Connect( ListerFormations1->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuListerFormation ) );
	this->Connect( Documentation_IHM_CRUD->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuDocumentationCRUD ) );
	this->Connect( MenuQuitter->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuQuitter ) );
}

PrincFrameCatalogue::~PrincFrameCatalogue()
{
	// Disconnect Events
	Lister_Alternance->Disconnect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( PrincFrameCatalogue::onListerMouseOpen ), NULL, this );
	Lister_Alternance->Disconnect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( PrincFrameCatalogue::onListerMouseClose ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuExporterFormation ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuListerFormation ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuAjouterFormationAlternance ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuSupprimerFormationAlternance ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuModifierFormationAlternance ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuAjouterFormationEnseignementSuperieur ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuSupprimerFormationEnseignementSuperieur ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuModifierFormationEnseignementSuperieur ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuAjouterFormationLGT ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuSupprimerFormationLGT ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuModifierFormationLGT ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuAjouterFormationLP ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuSupprimerFormationLP ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuModifierFormationLP ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuExporterFormation ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuListerFormation ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuDocumentationCRUD ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuQuitter ) );
	
}

AjouterFormationLGT::AjouterFormationLGT( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	StaticTextNom = new wxStaticText( this, wxID_ANY, wxT("Nom"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextNom->Wrap( -1 );
	bSizer2->Add( StaticTextNom, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterNom = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterNom, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextSigle = new wxStaticText( this, wxID_ANY, wxT("Sigle"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextSigle->Wrap( -1 );
	bSizer2->Add( StaticTextSigle, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterSigle = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterSigle, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextVideo = new wxStaticText( this, wxID_ANY, wxT("Video"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextVideo->Wrap( -1 );
	bSizer2->Add( StaticTextVideo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterVideo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterVideo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextProspectus = new wxStaticText( this, wxID_ANY, wxT("Prospectus"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextProspectus->Wrap( -1 );
	bSizer2->Add( StaticTextProspectus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterProspectus = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterProspectus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextCode = new wxStaticText( this, wxID_ANY, wxT("Code"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextCode->Wrap( -1 );
	bSizer2->Add( StaticTextCode, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterCode = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterCode, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	boutonConfirmer = new wxButton( this, wxID_ANY, wxT("Confirmer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( boutonConfirmer, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	boutonAnnuler = new wxButton( this, wxID_ANY, wxT("Annuler"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( boutonAnnuler, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	this->SetSizer( bSizer2 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boutonConfirmer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationLGT::buttonConfirmerEvt ), NULL, this );
	boutonAnnuler->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationLGT::buttonAnnulerEvt ), NULL, this );
}

AjouterFormationLGT::~AjouterFormationLGT()
{
	// Disconnect Events
	boutonConfirmer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationLGT::buttonConfirmerEvt ), NULL, this );
	boutonAnnuler->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationLGT::buttonAnnulerEvt ), NULL, this );
	
}

AjouterFormationLP::AjouterFormationLP( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	StaticTextNom = new wxStaticText( this, wxID_ANY, wxT("Nom"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextNom->Wrap( -1 );
	bSizer2->Add( StaticTextNom, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterNom = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterNom, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextSigle = new wxStaticText( this, wxID_ANY, wxT("Sigle"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextSigle->Wrap( -1 );
	bSizer2->Add( StaticTextSigle, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterSigle = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterSigle, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextVideo = new wxStaticText( this, wxID_ANY, wxT("Video"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextVideo->Wrap( -1 );
	bSizer2->Add( StaticTextVideo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterVideo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterVideo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextProspectus = new wxStaticText( this, wxID_ANY, wxT("Prospectus"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextProspectus->Wrap( -1 );
	bSizer2->Add( StaticTextProspectus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterProspectus = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterProspectus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextCode = new wxStaticText( this, wxID_ANY, wxT("Code"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextCode->Wrap( -1 );
	bSizer2->Add( StaticTextCode, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterCode = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterCode, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	boutonConfirmer = new wxButton( this, wxID_ANY, wxT("Confirmer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( boutonConfirmer, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	boutonAnnuler = new wxButton( this, wxID_ANY, wxT("Annuler"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( boutonAnnuler, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	this->SetSizer( bSizer2 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boutonConfirmer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationLP::buttonConfirmerEvt ), NULL, this );
	boutonAnnuler->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationLP::buttonAnnulerEvt ), NULL, this );
}

AjouterFormationLP::~AjouterFormationLP()
{
	// Disconnect Events
	boutonConfirmer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationLP::buttonConfirmerEvt ), NULL, this );
	boutonAnnuler->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationLP::buttonAnnulerEvt ), NULL, this );
	
}

AjouterFormationAlternance::AjouterFormationAlternance( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	StaticTextNom = new wxStaticText( this, wxID_ANY, wxT("Nom"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextNom->Wrap( -1 );
	bSizer2->Add( StaticTextNom, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterNom = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterNom, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextSigle = new wxStaticText( this, wxID_ANY, wxT("Sigle"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextSigle->Wrap( -1 );
	bSizer2->Add( StaticTextSigle, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterSigle = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterSigle, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextVideo = new wxStaticText( this, wxID_ANY, wxT("Video"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextVideo->Wrap( -1 );
	bSizer2->Add( StaticTextVideo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterVideo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterVideo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextProspectus = new wxStaticText( this, wxID_ANY, wxT("Prospectus"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextProspectus->Wrap( -1 );
	bSizer2->Add( StaticTextProspectus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterProspectus = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterProspectus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextCode = new wxStaticText( this, wxID_ANY, wxT("Code"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextCode->Wrap( -1 );
	bSizer2->Add( StaticTextCode, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterCode = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterCode, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	boutonConfirmer = new wxButton( this, wxID_ANY, wxT("Confirmer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( boutonConfirmer, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	boutonAnnuler = new wxButton( this, wxID_ANY, wxT("Annuler"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( boutonAnnuler, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	this->SetSizer( bSizer2 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boutonConfirmer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationAlternance::buttonConfirmerEvt ), NULL, this );
	boutonAnnuler->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationAlternance::buttonAnnulerEvt ), NULL, this );
}

AjouterFormationAlternance::~AjouterFormationAlternance()
{
	// Disconnect Events
	boutonConfirmer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationAlternance::buttonConfirmerEvt ), NULL, this );
	boutonAnnuler->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationAlternance::buttonAnnulerEvt ), NULL, this );
	
}

AjouterFormationEnseignementSuperieur::AjouterFormationEnseignementSuperieur( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	StaticTextNom = new wxStaticText( this, wxID_ANY, wxT("Nom"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextNom->Wrap( -1 );
	bSizer2->Add( StaticTextNom, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterNom = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterNom, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextSigle = new wxStaticText( this, wxID_ANY, wxT("Sigle"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextSigle->Wrap( -1 );
	bSizer2->Add( StaticTextSigle, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterSigle = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterSigle, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextVideo = new wxStaticText( this, wxID_ANY, wxT("Video"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextVideo->Wrap( -1 );
	bSizer2->Add( StaticTextVideo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterVideo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterVideo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextProspectus = new wxStaticText( this, wxID_ANY, wxT("Prospectus"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextProspectus->Wrap( -1 );
	bSizer2->Add( StaticTextProspectus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterProspectus = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterProspectus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextCode = new wxStaticText( this, wxID_ANY, wxT("Code"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextCode->Wrap( -1 );
	bSizer2->Add( StaticTextCode, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterCode = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterCode, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	boutonConfirmer = new wxButton( this, wxID_ANY, wxT("Confirmer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( boutonConfirmer, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	boutonAnnuler = new wxButton( this, wxID_ANY, wxT("Annuler"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( boutonAnnuler, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	this->SetSizer( bSizer2 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boutonConfirmer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationEnseignementSuperieur::buttonConfirmerEvt ), NULL, this );
	boutonAnnuler->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationEnseignementSuperieur::buttonAnnulerEvt ), NULL, this );
}

AjouterFormationEnseignementSuperieur::~AjouterFormationEnseignementSuperieur()
{
	// Disconnect Events
	boutonConfirmer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationEnseignementSuperieur::buttonConfirmerEvt ), NULL, this );
	boutonAnnuler->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationEnseignementSuperieur::buttonAnnulerEvt ), NULL, this );
	
}

SupprimerFormationLGT::SupprimerFormationLGT( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText25 = new wxStaticText( this, wxID_ANY, wxT("Choisissez le code de la formation a supprimer"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	bSizer6->Add( m_staticText25, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	TextCtrlCode = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer6->Add( TextCtrlCode, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonSupprimer = new wxButton( this, wxID_ANY, wxT("Supprimer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( boutonSupprimer, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonSupprimerTout = new wxButton( this, wxID_ANY, wxT("Supprimer toute les formations"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( boutonSupprimerTout, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonAnnuler = new wxButton( this, wxID_ANY, wxT("Annuler"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( boutonAnnuler, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer6 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boutonSupprimer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationLGT::buttonSupprimerEvt ), NULL, this );
	boutonSupprimerTout->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationLGT::boutonSupprimerToutEvt ), NULL, this );
	boutonAnnuler->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationLGT::buttonAnnulerEvt ), NULL, this );
}

SupprimerFormationLGT::~SupprimerFormationLGT()
{
	// Disconnect Events
	boutonSupprimer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationLGT::buttonSupprimerEvt ), NULL, this );
	boutonSupprimerTout->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationLGT::boutonSupprimerToutEvt ), NULL, this );
	boutonAnnuler->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationLGT::buttonAnnulerEvt ), NULL, this );
	
}

SupprimerFormationLP::SupprimerFormationLP( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText25 = new wxStaticText( this, wxID_ANY, wxT("Choisissez le code de la formation a supprimer"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	bSizer6->Add( m_staticText25, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	TextCtrlCode = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer6->Add( TextCtrlCode, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonSupprimer = new wxButton( this, wxID_ANY, wxT("Supprimer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( boutonSupprimer, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonSupprimerTout = new wxButton( this, wxID_ANY, wxT("Supprimer toute les formations"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( boutonSupprimerTout, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonAnnuler = new wxButton( this, wxID_ANY, wxT("Annuler"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( boutonAnnuler, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer6 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boutonSupprimer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationLP::buttonSupprimerEvt ), NULL, this );
	boutonSupprimerTout->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationLP::boutonSupprimerToutEvt ), NULL, this );
	boutonAnnuler->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationLP::buttonAnnulerEvt ), NULL, this );
}

SupprimerFormationLP::~SupprimerFormationLP()
{
	// Disconnect Events
	boutonSupprimer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationLP::buttonSupprimerEvt ), NULL, this );
	boutonSupprimerTout->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationLP::boutonSupprimerToutEvt ), NULL, this );
	boutonAnnuler->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationLP::buttonAnnulerEvt ), NULL, this );
	
}

SupprimerFormationAlternance::SupprimerFormationAlternance( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText25 = new wxStaticText( this, wxID_ANY, wxT("Choisissez le code de la formation a supprimer"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	bSizer6->Add( m_staticText25, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	TextCtrlCode = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer6->Add( TextCtrlCode, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonSupprimer = new wxButton( this, wxID_ANY, wxT("Supprimer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( boutonSupprimer, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonSupprimerTout = new wxButton( this, wxID_ANY, wxT("Supprimer toute les formations"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( boutonSupprimerTout, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonAnnuler = new wxButton( this, wxID_ANY, wxT("Annuler"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( boutonAnnuler, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer6 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boutonSupprimer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationAlternance::buttonSupprimerEvt ), NULL, this );
	boutonSupprimerTout->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationAlternance::boutonSupprimerToutEvt ), NULL, this );
	boutonAnnuler->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationAlternance::buttonAnnulerEvt ), NULL, this );
}

SupprimerFormationAlternance::~SupprimerFormationAlternance()
{
	// Disconnect Events
	boutonSupprimer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationAlternance::buttonSupprimerEvt ), NULL, this );
	boutonSupprimerTout->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationAlternance::boutonSupprimerToutEvt ), NULL, this );
	boutonAnnuler->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationAlternance::buttonAnnulerEvt ), NULL, this );
	
}

SupprimerFormationEnseignementSuperieur::SupprimerFormationEnseignementSuperieur( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText25 = new wxStaticText( this, wxID_ANY, wxT("Choisissez le code de la formation a supprimer"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	bSizer6->Add( m_staticText25, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	TextCtrlCode = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer6->Add( TextCtrlCode, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonSupprimer = new wxButton( this, wxID_ANY, wxT("Supprimer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( boutonSupprimer, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonSupprimerTout = new wxButton( this, wxID_ANY, wxT("Supprimer toute les formations"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( boutonSupprimerTout, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonAnnuler = new wxButton( this, wxID_ANY, wxT("Annuler"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( boutonAnnuler, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer6 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boutonSupprimer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationEnseignementSuperieur::buttonSupprimerEvt ), NULL, this );
	boutonSupprimerTout->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationEnseignementSuperieur::boutonSupprimerToutEvt ), NULL, this );
	boutonAnnuler->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationEnseignementSuperieur::buttonAnnulerEvt ), NULL, this );
}

SupprimerFormationEnseignementSuperieur::~SupprimerFormationEnseignementSuperieur()
{
	// Disconnect Events
	boutonSupprimer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationEnseignementSuperieur::buttonSupprimerEvt ), NULL, this );
	boutonSupprimerTout->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationEnseignementSuperieur::boutonSupprimerToutEvt ), NULL, this );
	boutonAnnuler->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationEnseignementSuperieur::buttonAnnulerEvt ), NULL, this );
	
}

ModifierFormationLGT::ModifierFormationLGT( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	StaticTextId = new wxStaticText( this, wxID_ANY, wxT("Rentrez le code de la formation a modifier"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextId->Wrap( -1 );
	bSizer10->Add( StaticTextId, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	TextCtrlId = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer10->Add( TextCtrlId, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonConfirmer = new wxButton( this, wxID_ANY, wxT("Confirmer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( boutonConfirmer, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonAnnuler = new wxButton( this, wxID_ANY, wxT("Annuler"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( boutonAnnuler, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer10 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boutonConfirmer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationLGT::boutonConfirmerEvt ), NULL, this );
	boutonAnnuler->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationLGT::boutonAnnulerEvt ), NULL, this );
}

ModifierFormationLGT::~ModifierFormationLGT()
{
	// Disconnect Events
	boutonConfirmer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationLGT::boutonConfirmerEvt ), NULL, this );
	boutonAnnuler->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationLGT::boutonAnnulerEvt ), NULL, this );
	
}

ModifierFormationLP::ModifierFormationLP( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	StaticTextId = new wxStaticText( this, wxID_ANY, wxT("Rentrez le code de la formation a modifier"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextId->Wrap( -1 );
	bSizer10->Add( StaticTextId, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	TextCtrlId = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer10->Add( TextCtrlId, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonConfirmer = new wxButton( this, wxID_ANY, wxT("Confirmer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( boutonConfirmer, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonAnnuler = new wxButton( this, wxID_ANY, wxT("Annuler"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( boutonAnnuler, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer10 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boutonConfirmer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationLP::boutonConfirmerEvt ), NULL, this );
	boutonAnnuler->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationLP::boutonAnnulerEvt ), NULL, this );
}

ModifierFormationLP::~ModifierFormationLP()
{
	// Disconnect Events
	boutonConfirmer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationLP::boutonConfirmerEvt ), NULL, this );
	boutonAnnuler->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationLP::boutonAnnulerEvt ), NULL, this );
	
}

ModifierFormationAlternance::ModifierFormationAlternance( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	StaticTextId = new wxStaticText( this, wxID_ANY, wxT("Rentrez le code de la formation a modifier"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextId->Wrap( -1 );
	bSizer10->Add( StaticTextId, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	TextCtrlId = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer10->Add( TextCtrlId, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonConfirmer = new wxButton( this, wxID_ANY, wxT("Confirmer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( boutonConfirmer, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonAnnuler = new wxButton( this, wxID_ANY, wxT("Annuler"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( boutonAnnuler, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer10 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boutonConfirmer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationAlternance::boutonConfirmerEvt ), NULL, this );
	boutonAnnuler->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationAlternance::boutonAnnulerEvt ), NULL, this );
}

ModifierFormationAlternance::~ModifierFormationAlternance()
{
	// Disconnect Events
	boutonConfirmer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationAlternance::boutonConfirmerEvt ), NULL, this );
	boutonAnnuler->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationAlternance::boutonAnnulerEvt ), NULL, this );
	
}

ModifierFormationEnseignementSuperieur::ModifierFormationEnseignementSuperieur( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	StaticTextId = new wxStaticText( this, wxID_ANY, wxT("Rentrez le code de la formation a modifier"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextId->Wrap( -1 );
	bSizer10->Add( StaticTextId, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	TextCtrlId = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer10->Add( TextCtrlId, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonConfirmer = new wxButton( this, wxID_ANY, wxT("Confirmer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( boutonConfirmer, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonAnnuler = new wxButton( this, wxID_ANY, wxT("Annuler"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( boutonAnnuler, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer10 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boutonConfirmer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationEnseignementSuperieur::boutonConfirmerEvt ), NULL, this );
	boutonAnnuler->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationEnseignementSuperieur::boutonAnnulerEvt ), NULL, this );
}

ModifierFormationEnseignementSuperieur::~ModifierFormationEnseignementSuperieur()
{
	// Disconnect Events
	boutonConfirmer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationEnseignementSuperieur::boutonConfirmerEvt ), NULL, this );
	boutonAnnuler->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationEnseignementSuperieur::boutonAnnulerEvt ), NULL, this );
	
}

FrameLister::FrameLister( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	texteFormation = new wxStaticText( this, wxID_ANY, wxT("formation"), wxDefaultPosition, wxDefaultSize, 0 );
	texteFormation->Wrap( -1 );
	bSizer14->Add( texteFormation, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer14 );
	this->Layout();
	
	this->Centre( wxBOTH );
}

FrameLister::~FrameLister()
{
}
