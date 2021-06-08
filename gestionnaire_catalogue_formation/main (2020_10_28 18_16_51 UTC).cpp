/******************************************************************
 * Auteur:
 * Guilloux Yan
 * LGT Les Eucalyptus - Nice
 * Section de technicien supérieur
 * Systèmes Numériques option Informatique et réseau (SN-IR)
 ******************************************************************/
#include "Main.h"


//g++ -std=c++14 *.cpp -I. -ljsoncpp -pthread -lsqlite3 $(wx-config --cflags) $(wx-config --libs) -o GererFormation

wxDEFINE_EVENT(MY_EVENT_AJOUTERLGT, wxCommandEvent);
wxDEFINE_EVENT(MY_EVENT_SUPPRIMERLGT, wxCommandEvent);
wxDEFINE_EVENT(MY_EVENT_MODIFIERLGT, wxCommandEvent);

wxDEFINE_EVENT(MY_EVENT_AJOUTERLP, wxCommandEvent);
wxDEFINE_EVENT(MY_EVENT_SUPPRIMERLP, wxCommandEvent);
wxDEFINE_EVENT(MY_EVENT_MODIFIERLP, wxCommandEvent);

wxDEFINE_EVENT(MY_EVENT_AJOUTERALTERNANCE, wxCommandEvent);
wxDEFINE_EVENT(MY_EVENT_SUPPRIMERALTERNANCE, wxCommandEvent);
wxDEFINE_EVENT(MY_EVENT_MODIFIERALTERNANCE, wxCommandEvent);

wxDEFINE_EVENT(MY_EVENT_AJOUTERENSEIGNEMENTSUPERIEUR, wxCommandEvent);
wxDEFINE_EVENT(MY_EVENT_SUPPRIMERENSEIGNEMENTSUPERIEUR, wxCommandEvent);
wxDEFINE_EVENT(MY_EVENT_MODIFIERENSEIGNEMENTSUPERIEUR, wxCommandEvent);

wxDEFINE_EVENT(MY_EVENT_EXPORTER, wxCommandEvent);
wxDEFINE_EVENT(MY_EVENT_LISTER, wxCommandEvent);
wxDEFINE_EVENT(MY_EVENT_APROPOSQUITTER, wxCommandEvent);
wxDEFINE_EVENT(MY_EVENT_DOCUMENTATION, wxCommandEvent);
wxDEFINE_EVENT(MY_EVENT_OUVRIRAJOUTERLISTER, wxMouseEvent);
wxDEFINE_EVENT(MY_EVENT_FERMERAJOUTERLISTER, wxMouseEvent);


bool Main::OnInit() 
{
	this->Bind(MY_EVENT_AJOUTERLGT,&Main::onAjouterFormationLGTClick,this);
	this->Bind(MY_EVENT_SUPPRIMERLGT,&Main::onSupprimerFormationLGTClick,this);
	this->Bind(MY_EVENT_MODIFIERLGT,&Main::onModifierFormationLGTClick,this);
	
	this->Bind(MY_EVENT_AJOUTERLP,&Main::onAjouterFormationLPClick,this);
	this->Bind(MY_EVENT_SUPPRIMERLP,&Main::onSupprimerFormationLPClick,this);
	this->Bind(MY_EVENT_MODIFIERLP,&Main::onModifierFormationLPClick,this);
	
	this->Bind(MY_EVENT_AJOUTERALTERNANCE,&Main::onAjouterFormationAlternanceClick,this);
	this->Bind(MY_EVENT_SUPPRIMERALTERNANCE,&Main::onSupprimerFormationAlternanceClick,this);
	this->Bind(MY_EVENT_MODIFIERALTERNANCE,&Main::onModifierFormationAlternanceClick,this);
	
	this->Bind(MY_EVENT_AJOUTERENSEIGNEMENTSUPERIEUR,&Main::onAjouterFormationEnseignementSuperieurClick,this);
	this->Bind(MY_EVENT_SUPPRIMERENSEIGNEMENTSUPERIEUR,&Main::onSupprimerFormationEnseignementSuperieurClick,this);
	this->Bind(MY_EVENT_MODIFIERENSEIGNEMENTSUPERIEUR,&Main::onModifierFormationEnseignementSuperieurClick,this);
	
	this->Bind(MY_EVENT_EXPORTER,&Main::onExporterFormationClick,this);
	this->Bind(MY_EVENT_LISTER,&Main::onListerFormationClick,this);
	this->Bind(MY_EVENT_APROPOSQUITTER,&Main::onMenuQuitterClick,this);
	this->Bind(MY_EVENT_DOCUMENTATION,&Main::onMenuDocumentationClick,this);
	this->Bind(MY_EVENT_APROPOSQUITTER,&Main::onMenuQuitterClick,this);
	this->Bind(MY_EVENT_DOCUMENTATION,&Main::onMenuDocumentationClick,this);
	this->Bind(MY_EVENT_APROPOSQUITTER,&Main::onMenuQuitterClick,this);
	this->Bind(MY_EVENT_DOCUMENTATION,&Main::onMenuDocumentationClick,this);
	this->Bind(MY_EVENT_OUVRIRAJOUTERLISTER,&Main::onListerMouseOpenClick,this);
	this->Bind(MY_EVENT_FERMERAJOUTERLISTER,&Main::onListerMouseCloseClick,this);
	
	
	this->ihmFormationPrincFrameCatalogue = new IhmFormationPrincFrameCatalogue(NULL);
	this->ihmFormationPrincFrameCatalogue->Show();
	
	
	
	
	return true;
}


void Main::onAjouterFormationLGTClick(wxCommandEvent&)
{
	this->ihmFormationPrincFrameCatalogue->Disable();
	UcGerer ucGerer("formation.db");
	ucGerer.doItLGT();
	this->ihmFormationPrincFrameCatalogue->Enable();
}
void Main::onSupprimerFormationLGTClick(wxCommandEvent&)
{
	this->ihmFormationPrincFrameCatalogue->Disable();
	UcGerer ucGerer("formation.db");
	ucGerer.doItLGTSuppr();
	this->ihmFormationPrincFrameCatalogue->Enable();
}
void Main::onModifierFormationLGTClick(wxCommandEvent&)
{
	this->ihmFormationPrincFrameCatalogue->Disable();
	UcGerer ucGerer("formation.db");
	ucGerer.doItLGTModif();
	this->ihmFormationPrincFrameCatalogue->Enable();
}


void Main::onAjouterFormationLPClick(wxCommandEvent&)
{
	this->ihmFormationPrincFrameCatalogue->Disable();
	UcGerer ucGerer("formation.db");
	ucGerer.doItLP();
	this->ihmFormationPrincFrameCatalogue->Enable();	
}
void Main::onSupprimerFormationLPClick(wxCommandEvent&)
{
	this->ihmFormationPrincFrameCatalogue->Disable();
	UcGerer ucGerer("formation.db");
	ucGerer.doItLPSuppr();
	this->ihmFormationPrincFrameCatalogue->Enable();
}
void Main::onModifierFormationLPClick(wxCommandEvent&)
{
	this->ihmFormationPrincFrameCatalogue->Disable();
	UcGerer ucGerer("formation.db");
	ucGerer.doItLPModif();
	this->ihmFormationPrincFrameCatalogue->Enable();
}


void Main::onAjouterFormationAlternanceClick(wxCommandEvent&)
{
	this->ihmFormationPrincFrameCatalogue->Disable();
	UcGerer ucGerer("formation.db");
	ucGerer.doItAlternance();
	this->ihmFormationPrincFrameCatalogue->Enable();
}
void Main::onModifierFormationAlternanceClick(wxCommandEvent&)
{
	this->ihmFormationPrincFrameCatalogue->Disable();
	UcGerer ucGerer("formation.db");
	ucGerer.doItAlternanceModif();
	this->ihmFormationPrincFrameCatalogue->Enable();	
}
void Main::onSupprimerFormationAlternanceClick(wxCommandEvent&)
{
	this->ihmFormationPrincFrameCatalogue->Disable();
	UcGerer gererLocal("formation.db");
	gererLocal.doItAlternanceSuppr();
	this->ihmFormationPrincFrameCatalogue->Enable();
}


void Main::onAjouterFormationEnseignementSuperieurClick(wxCommandEvent&)
{
	this->ihmFormationPrincFrameCatalogue->Disable();
	UcGerer gererLocal("formation.db");
	gererLocal.doItEnseignementSuperieur();
	this->ihmFormationPrincFrameCatalogue->Enable();	
}
void Main::onSupprimerFormationEnseignementSuperieurClick(wxCommandEvent&)
{
	this->ihmFormationPrincFrameCatalogue->Disable();
	UcGerer ucGerer("formation.db");
	ucGerer.doItEnseignementSuperieurSuppr();
	this->ihmFormationPrincFrameCatalogue->Enable();	
}
void Main::onModifierFormationEnseignementSuperieurClick(wxCommandEvent&)
{
	this->ihmFormationPrincFrameCatalogue->Disable();
	UcGerer ucGerer("formation.db");
	ucGerer.doItEnseignementSuperieurModif();
	this->ihmFormationPrincFrameCatalogue->Enable();
}


void Main::onExporterFormationClick(wxCommandEvent&)
{
	UcExporter ucExporter("formation.db");
	ucExporter.doIt();
}

void Main::onListerFormationClick(wxCommandEvent&)
{
	UcGerer ucGerer("formation.db");
	ucGerer.doItLister();	
}
void Main::onMenuQuitterClick(wxCommandEvent&)
{

}
void Main::onMenuDocumentationClick(wxCommandEvent&)
{

}

void Main::onListerMouseOpenClick(wxMouseEvent&)
{
this->ihmFormationFrameLister = new IhmFormationFrameLister(nullptr, "Alternance");
this->ihmFormationFrameLister->Show();
}

void Main::onListerMouseCloseClick(wxMouseEvent&)
{
this->ihmFormationFrameLister->Destroy();
}
int Main::OnExit()
{
	return 0;
}

IMPLEMENT_APP(Main)
