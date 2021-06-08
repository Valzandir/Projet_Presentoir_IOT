///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 16 2016)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __IHM_H__
#define __IHM_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/sizer.h>
#include <wx/gdicmn.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class PrincFrameCatalogue
///////////////////////////////////////////////////////////////////////////////
class PrincFrameCatalogue : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* m_menubar3;
		wxMenu* LyceeGeneralTechno;
		wxMenu* LyceeProfessionnel;
		wxMenu* Alternance;
		wxMenu* EnseignementSuperieur;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnMenuAjouterFormationLGT( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		PrincFrameCatalogue( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Catalogue des formations"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 700,50 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~PrincFrameCatalogue();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class AjouterFormation
///////////////////////////////////////////////////////////////////////////////
class AjouterFormation : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* StaticTextNom;
		wxTextCtrl* TextCtrlAjouterNom;
		wxStaticText* StaticTextSigle;
		wxTextCtrl* TextCtrlAjouterSigle;
		wxStaticText* StaticTextVideo;
		wxTextCtrl* TextCtrlAjouterVideo;
		wxStaticText* StaticTextProspectus;
		wxTextCtrl* TextCtrlAjouterProspectus;
		wxStaticText* StaticTextCode;
		wxTextCtrl* TextCtrlAjouterCode;
		wxStaticText* StaticTextEmplacement;
		wxTextCtrl* TextCtrlAjouterEmplacement;
		wxButton* boutonConfirmer;
		wxButton* boutonAnnuler;
		
		// Virtual event handlers, overide them in your derived class
		virtual void buttonConfirmerEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void buttonAnnulerEvt( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		AjouterFormation( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1172,104 ), long style = wxFRAME_FLOAT_ON_PARENT|wxTAB_TRAVERSAL );
		
		~AjouterFormation();
	
};

#endif //__IHM_H__
