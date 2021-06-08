#include "IhmFormationPrincFrameCatalogue.h"

IhmFormationPrincFrameCatalogue::IhmFormationPrincFrameCatalogue( wxWindow* parent )
:
PrincFrameCatalogue( parent )
{

}

void IhmFormationPrincFrameCatalogue::OnMenuAjouterFormationLGT( wxCommandEvent& event )
{
// TODO: Implement OnMenuAjouterFormationLGT
wxCommandEvent eventForMain(MY_EVENT_AJOUTER, this->GetId());
wxTheApp->SafelyProcessEvent(eventForMain);
}







