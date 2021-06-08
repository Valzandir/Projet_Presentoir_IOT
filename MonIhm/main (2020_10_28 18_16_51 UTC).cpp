#include "Main.h"
#include "IhmFormationPrincFrameCatalogue.h"

//g++ -std=c++14  *.cpp  -I. -pthread -l sqlite3 $(wx-config --cflags) $(wx-config --libs)  -o test


wxDEFINE_EVENT(MY_EVENT_AJOUTER, wxCommandEvent);
wxDEFINE_EVENT(MY_EVENT_CONFIRMER, wxCommandEvent);
wxDEFINE_EVENT(MY_EVENT_QUITTER, wxCommandEvent);


bool Main::OnInit() 
{
	this->ihmFormationPrincFrameCatalogue = new IhmFormationPrincFrameCatalogue(NULL);
	this->Bind(MY_EVENT_AJOUTER,&Main::onAjouterFormationClick,this);
	//this->Bind(MY_EVENT_AJOUTER,&Main::onbuttonClick,this);
	this->ihmFormationPrincFrameCatalogue->Show();
	return true;
}
void Main::onAjouterFormationClick(wxCommandEvent&){
	//FormationIHMAjouterFormLGT * formationIHMAjouterFormLGT(new FormationIHMAjouterFormLGT(NULL));
	this->ihmFormationPrincFrameCatalogue->Disable();
	//formationIHMAjouterFormLGT->Show();
	UcGerer ucGerer("formation.db");
	ucGerer.doIt();
	this->ihmFormationPrincFrameCatalogue->Enable();
	//this->formationIHMPrincFrameCatalogue->Enable();
	
}

// cette fonction se lance suite au clic sur le menu Usager/Mesurer



int Main::OnExit()
{
	return 0;
}

IMPLEMENT_APP(Main)
