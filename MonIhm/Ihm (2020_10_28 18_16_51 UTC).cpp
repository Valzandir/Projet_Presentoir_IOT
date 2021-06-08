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
	wxMenuItem* BacSTI2D;
	BacSTI2D = new wxMenuItem( LyceeGeneralTechno, wxID_ANY, wxString( wxT("BacSTI2D") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeGeneralTechno->Append( BacSTI2D );
	
	wxMenuItem* BacS;
	BacS = new wxMenuItem( LyceeGeneralTechno, wxID_ANY, wxString( wxT("Bac S") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeGeneralTechno->Append( BacS );
	
	wxMenuItem* BacL;
	BacL = new wxMenuItem( LyceeGeneralTechno, wxID_ANY, wxString( wxT("BacL") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeGeneralTechno->Append( BacL );
	
	LyceeGeneralTechno->AppendSeparator();
	
	wxMenuItem* AjouterFormationLGT;
	AjouterFormationLGT = new wxMenuItem( LyceeGeneralTechno, wxID_ANY, wxString( wxT("+ Ajouter une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeGeneralTechno->Append( AjouterFormationLGT );
	
	m_menubar3->Append( LyceeGeneralTechno, wxT("Lycee general et Technologique") ); 
	
	LyceeProfessionnel = new wxMenu();
	wxMenuItem* MenuItemConception;
	MenuItemConception = new wxMenuItem( LyceeProfessionnel, wxID_ANY, wxString( wxT("Conception") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeProfessionnel->Append( MenuItemConception );
	
	wxMenuItem* MenuItemElectrotechnique;
	MenuItemElectrotechnique = new wxMenuItem( LyceeProfessionnel, wxID_ANY, wxString( wxT("Electrotechnique") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeProfessionnel->Append( MenuItemElectrotechnique );
	
	wxMenuItem* MenuItemAutomobile;
	MenuItemAutomobile = new wxMenuItem( LyceeProfessionnel, wxID_ANY, wxString( wxT("Automobile") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeProfessionnel->Append( MenuItemAutomobile );
	
	wxMenuItem* MenuItemCarosserie;
	MenuItemCarosserie = new wxMenuItem( LyceeProfessionnel, wxID_ANY, wxString( wxT("Carosserie") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeProfessionnel->Append( MenuItemCarosserie );
	
	wxMenuItem* MenuItemTechniqueOutillage;
	MenuItemTechniqueOutillage = new wxMenuItem( LyceeProfessionnel, wxID_ANY, wxString( wxT("Technique Outillage") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeProfessionnel->Append( MenuItemTechniqueOutillage );
	
	LyceeProfessionnel->AppendSeparator();
	
	wxMenuItem* AjouterFormationLP;
	AjouterFormationLP = new wxMenuItem( LyceeProfessionnel, wxID_ANY, wxString( wxT("+ Ajouter une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	LyceeProfessionnel->Append( AjouterFormationLP );
	
	m_menubar3->Append( LyceeProfessionnel, wxT("Lycee Professionnel") ); 
	
	Alternance = new wxMenu();
	wxMenuItem* MenuItemBTS_IPE;
	MenuItemBTS_IPE = new wxMenuItem( Alternance, wxID_ANY, wxString( wxT("BTS IPE") ) , wxEmptyString, wxITEM_NORMAL );
	Alternance->Append( MenuItemBTS_IPE );
	
	wxMenuItem* MenuItemBTS_PCI;
	MenuItemBTS_PCI = new wxMenuItem( Alternance, wxID_ANY, wxString( wxT("BTS PCI") ) , wxEmptyString, wxITEM_NORMAL );
	Alternance->Append( MenuItemBTS_PCI );
	
	Alternance->AppendSeparator();
	
	wxMenuItem* AjouterFormationAlternance;
	AjouterFormationAlternance = new wxMenuItem( Alternance, wxID_ANY, wxString( wxT("+ Ajouter une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	Alternance->Append( AjouterFormationAlternance );
	
	m_menubar3->Append( Alternance, wxT("Alternance") ); 
	
	EnseignementSuperieur = new wxMenu();
	wxMenuItem* MenuItemBTSMaintenanceVehicule;
	MenuItemBTSMaintenanceVehicule = new wxMenuItem( EnseignementSuperieur, wxID_ANY, wxString( wxT("BTS Maintenance Vehicule") ) , wxEmptyString, wxITEM_NORMAL );
	EnseignementSuperieur->Append( MenuItemBTSMaintenanceVehicule );
	
	wxMenuItem* MenuItemBTSConceptionProduitsIndustriels;
	MenuItemBTSConceptionProduitsIndustriels = new wxMenuItem( EnseignementSuperieur, wxID_ANY, wxString( wxT("BTS Conception Produits Industriels") ) , wxEmptyString, wxITEM_NORMAL );
	EnseignementSuperieur->Append( MenuItemBTSConceptionProduitsIndustriels );
	
	wxMenuItem* MenuItemBTSConceptiondeProcessusdeRealisation;
	MenuItemBTSConceptiondeProcessusdeRealisation = new wxMenuItem( EnseignementSuperieur, wxID_ANY, wxString( wxT("BTS Conception de Processus de Realisation") ) , wxEmptyString, wxITEM_NORMAL );
	EnseignementSuperieur->Append( MenuItemBTSConceptiondeProcessusdeRealisation );
	
	wxMenuItem* MenuItemBTSElectrotechnique;
	MenuItemBTSElectrotechnique = new wxMenuItem( EnseignementSuperieur, wxID_ANY, wxString( wxT("BTS Electrotechnique") ) , wxEmptyString, wxITEM_NORMAL );
	EnseignementSuperieur->Append( MenuItemBTSElectrotechnique );
	
	wxMenuItem* MenuItemBTSSystemesNumeriques;
	MenuItemBTSSystemesNumeriques = new wxMenuItem( EnseignementSuperieur, wxID_ANY, wxString( wxT("BTS Systemes Numeriques") ) , wxEmptyString, wxITEM_NORMAL );
	EnseignementSuperieur->Append( MenuItemBTSSystemesNumeriques );
	
	EnseignementSuperieur->AppendSeparator();
	
	wxMenuItem* AjouterFormationEnseignementSup;
	AjouterFormationEnseignementSup = new wxMenuItem( EnseignementSuperieur, wxID_ANY, wxString( wxT("+ Ajouter une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	EnseignementSuperieur->Append( AjouterFormationEnseignementSup );
	
	m_menubar3->Append( EnseignementSuperieur, wxT("Enseignement superieur") ); 
	
	this->SetMenuBar( m_menubar3 );
	
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( AjouterFormationLGT->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuAjouterFormationLGT ) );
}

PrincFrameCatalogue::~PrincFrameCatalogue()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuAjouterFormationLGT ) );
	
}

AjouterFormation::AjouterFormation( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
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
	
	StaticTextEmplacement = new wxStaticText( this, wxID_ANY, wxT("Emplacement"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextEmplacement->Wrap( -1 );
	bSizer2->Add( StaticTextEmplacement, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterEmplacement = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterEmplacement, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	boutonConfirmer = new wxButton( this, wxID_ANY, wxT("Confirmer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( boutonConfirmer, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	boutonAnnuler = new wxButton( this, wxID_ANY, wxT("Annuler"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( boutonAnnuler, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	this->SetSizer( bSizer2 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boutonConfirmer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormation::buttonConfirmerEvt ), NULL, this );
	boutonAnnuler->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormation::buttonAnnulerEvt ), NULL, this );
}

AjouterFormation::~AjouterFormation()
{
	// Disconnect Events
	boutonConfirmer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormation::buttonConfirmerEvt ), NULL, this );
	boutonAnnuler->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormation::buttonAnnulerEvt ), NULL, this );
	
}
