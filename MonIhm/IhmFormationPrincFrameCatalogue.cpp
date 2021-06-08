#include "IhmFormationPrincFrameCatalogue.h"

IhmFormationPrincFrameCatalogue::IhmFormationPrincFrameCatalogue( wxWindow* parent )
:
PrincFrameCatalogue( parent )
{

}

void IhmFormationPrincFrameCatalogue::OnMenuAjouterFormation( wxCommandEvent& event )
{
// TODO: Implement OnMenuAjouterFormation
wxCommandEvent eventForMain(MY_EVENT_AJOUTER, this->GetId());
wxTheApp->SafelyProcessEvent(eventForMain);
}
