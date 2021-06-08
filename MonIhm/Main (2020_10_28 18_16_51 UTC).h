#ifndef _MAIN_H
#define _MAIN_H

#include <wx/wx.h>
#include "IhmFormationPrincFrameCatalogue.h"
#include "IhmFormationAjouterFormation.h"
#include "UcGerer.h"
#include "SqlitePersiBny.h"

wxDECLARE_EVENT(MY_EVENT_AJOUTER, wxCommandEvent);
wxDECLARE_EVENT(MY_EVENT_CONFIRMER, wxCommandEvent);
wxDECLARE_EVENT(MY_EVENT_QUITTER, wxCommandEvent);

class IhmFormationPrincFrameCatalogue;
 
class Main : public wxApp {
  private:
    IhmFormationPrincFrameCatalogue * ihmFormationPrincFrameCatalogue;
   
  public:
    bool OnInit();
	int OnExit();
  private:
    
    void onAjouterFormationClick(wxCommandEvent&);
   
};

#endif
