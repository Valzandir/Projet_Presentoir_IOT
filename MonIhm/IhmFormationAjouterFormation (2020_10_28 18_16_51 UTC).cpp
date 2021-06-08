#include "IhmFormationAjouterFormation.h"

IhmFormationAjouterFormation::IhmFormationAjouterFormation( wxWindow* parent )
:
AjouterFormation( parent )
{

}

void IhmFormationAjouterFormation::buttonConfirmerEvt( wxCommandEvent& event )
{

UcGerer ucGerer("formation.db");

std::string tab[6];

tab[0]=TextCtrlAjouterNom->GetValue().mb_str();
tab[1]=TextCtrlAjouterSigle->GetValue().mb_str();
tab[2]=TextCtrlAjouterVideo->GetValue().mb_str();
tab[3]=TextCtrlAjouterProspectus->GetValue().mb_str();
tab[4]=TextCtrlAjouterCode->GetValue().mb_str();
tab[5]=TextCtrlAjouterEmplacement->GetValue().mb_str();

ucGerer.ajouter(tab[0], tab[1] , tab[2] ,tab[3],tab[4] ,tab[5]);

std::cout << "Formation ajoutée : " << tab[0] << std::endl;
std::cout << "Nom = " << tab[0] << std::endl;
std::cout<< "Sigle = "<< tab[1]<< std::endl;
std::cout<< "Video = "<< tab[2]<< std::endl;
std::cout<< "Prospectus = " << tab[3]<< std::endl;
std::cout<< "Code = "<< tab[4]<< std::endl;
std::cout<< "Emplacement = "<< tab[5] << std::endl;

this->Close();
}

void IhmFormationAjouterFormation::buttonAnnulerEvt( wxCommandEvent& event )
{
// TODO: Implement buttonAnnulerEvt
this->Close();
}






