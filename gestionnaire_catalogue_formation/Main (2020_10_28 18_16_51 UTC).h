#ifndef _MAIN_H
#define _MAIN_H

#include <wx/wx.h>
#include "IhmFormationFrameLister.h"
#include "IhmFormationPrincFrameCatalogue.h"

#include "IhmFormationAjouterFormationLGT.h"
#include "IhmFormationSupprimerFormationLGT.h"
#include "IhmFormationModifierFormationLGT.h"

#include "IhmFormationAjouterFormationLP.h"
#include "IhmFormationSupprimerFormationLP.h"
#include "IhmFormationModifierFormationLP.h"

#include "IhmFormationAjouterFormationAlternance.h"
#include "IhmFormationSupprimerFormationAlternance.h"
#include "IhmFormationModifierFormationAlternance.h"

#include "IhmFormationAjouterFormationEnseignementSuperieur.h"
#include "IhmFormationSupprimerFormationEnseignementSuperieur.h"
#include "IhmFormationModifierFormationEnseignementSuperieur.h"


#include "UcGerer.h"
#include "UcExporter.h"
#include "SqlitePersiBny.h"
#include  <thread>
#include "IhmFormationPrincFrameCatalogue.h"

wxDECLARE_EVENT(MY_EVENT_AJOUTERLGT, wxCommandEvent);
wxDECLARE_EVENT(MY_EVENT_SUPPRIMERLGT, wxCommandEvent);
wxDECLARE_EVENT(MY_EVENT_MODIFIERLGT, wxCommandEvent);

wxDECLARE_EVENT(MY_EVENT_AJOUTERLP, wxCommandEvent);
wxDECLARE_EVENT(MY_EVENT_SUPPRIMERLP, wxCommandEvent);
wxDECLARE_EVENT(MY_EVENT_MODIFIERLP, wxCommandEvent);

wxDECLARE_EVENT(MY_EVENT_AJOUTERALTERNANCE, wxCommandEvent);
wxDECLARE_EVENT(MY_EVENT_SUPPRIMERALTERNANCE, wxCommandEvent);
wxDECLARE_EVENT(MY_EVENT_MODIFIERALTERNANCE, wxCommandEvent);

wxDECLARE_EVENT(MY_EVENT_AJOUTERENSEIGNEMENTSUPERIEUR, wxCommandEvent);
wxDECLARE_EVENT(MY_EVENT_SUPPRIMERENSEIGNEMENTSUPERIEUR, wxCommandEvent);
wxDECLARE_EVENT(MY_EVENT_MODIFIERENSEIGNEMENTSUPERIEUR, wxCommandEvent);

wxDECLARE_EVENT(MY_EVENT_EXPORTER, wxCommandEvent);
wxDECLARE_EVENT(MY_EVENT_LISTER, wxCommandEvent);
wxDECLARE_EVENT(MY_EVENT_APROPOSQUITTER, wxCommandEvent);
wxDECLARE_EVENT(MY_EVENT_DOCUMENTATION, wxCommandEvent);
wxDECLARE_EVENT(MY_EVENT_OUVRIRAJOUTERLISTER, wxMouseEvent);
wxDECLARE_EVENT(MY_EVENT_FERMERAJOUTERLISTER, wxMouseEvent);

class IhmFormationPrincFrameCatalogue;
class IhmFormationFrameLister;
 
class Main : public wxApp {
	
  private:
    IhmFormationPrincFrameCatalogue * ihmFormationPrincFrameCatalogue;
    IhmFormationFrameLister * ihmFormationFrameLister;
   
  public:
  
    bool OnInit();
	int OnExit();
	
  private:
  
    void onAjouterFormationLGTClick(wxCommandEvent&);
    void onSupprimerFormationLGTClick(wxCommandEvent&);
    void onModifierFormationLGTClick(wxCommandEvent&);
    
    void onAjouterFormationLPClick(wxCommandEvent&);
    void onSupprimerFormationLPClick(wxCommandEvent&);
    void onModifierFormationLPClick(wxCommandEvent&);
    
    void onAjouterFormationAlternanceClick(wxCommandEvent&);
    void onSupprimerFormationAlternanceClick(wxCommandEvent&);
    void onModifierFormationAlternanceClick(wxCommandEvent&);
    
    void onAjouterFormationEnseignementSuperieurClick(wxCommandEvent&);
    void onSupprimerFormationEnseignementSuperieurClick(wxCommandEvent&);
    void onModifierFormationEnseignementSuperieurClick(wxCommandEvent&);
    
    void onExporterFormationClick(wxCommandEvent&);
    void onListerFormationClick(wxCommandEvent&);
    void onMenuQuitterClick(wxCommandEvent&);
    void onMenuDocumentationClick(wxCommandEvent&); 
    void onListerMouseOpenClick(wxMouseEvent&);
    void onListerMouseCloseClick(wxMouseEvent&);
    
};

#endif
