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
		wxMenu* A_Propos;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnMenuAjouterFormationLGT( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuSupprimerFormationLGT( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuModifierFormationLGT( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuAjouterFormationLP( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuSupprimerFormationLP( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuModifierFormationLP( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuAjouterFormationAlternance( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuSupprimerFormationAlternance( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuModifierFormationAlternance( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuAjouterFormationEnseignementSuperieur( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuSupprimerFormationEnseignementSuperieur( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuModifierFormationEnseignementSuperieur( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuExporterFormation( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuListerFormation( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuDocumentationCRUD( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuQuitter( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		PrincFrameCatalogue( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Catalogue des formations"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 816,122 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~PrincFrameCatalogue();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class AjouterFormationLGT
///////////////////////////////////////////////////////////////////////////////
class AjouterFormationLGT : public wxFrame 
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
		wxButton* boutonConfirmer;
		wxButton* boutonAnnuler;
		
		// Virtual event handlers, overide them in your derived class
		virtual void buttonConfirmerEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void buttonAnnulerEvt( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		AjouterFormationLGT( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Lycee General Technologique"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1172,104 ), long style = wxDEFAULT_FRAME_STYLE|wxFRAME_FLOAT_ON_PARENT|wxTAB_TRAVERSAL );
		
		~AjouterFormationLGT();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class AjouterFormationLP
///////////////////////////////////////////////////////////////////////////////
class AjouterFormationLP : public wxFrame 
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
		wxButton* boutonConfirmer;
		wxButton* boutonAnnuler;
		
		// Virtual event handlers, overide them in your derived class
		virtual void buttonConfirmerEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void buttonAnnulerEvt( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		AjouterFormationLP( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Lycee professionnel"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1172,104 ), long style = wxDEFAULT_FRAME_STYLE|wxFRAME_FLOAT_ON_PARENT|wxTAB_TRAVERSAL );
		
		~AjouterFormationLP();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class AjouterFormationAlternance
///////////////////////////////////////////////////////////////////////////////
class AjouterFormationAlternance : public wxFrame 
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
		wxButton* boutonConfirmer;
		wxButton* boutonAnnuler;
		
		// Virtual event handlers, overide them in your derived class
		virtual void buttonConfirmerEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void buttonAnnulerEvt( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		AjouterFormationAlternance( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Alternance"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1172,104 ), long style = wxDEFAULT_FRAME_STYLE|wxFRAME_FLOAT_ON_PARENT|wxTAB_TRAVERSAL );
		
		~AjouterFormationAlternance();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class AjouterFormationEnseignementSuperieur
///////////////////////////////////////////////////////////////////////////////
class AjouterFormationEnseignementSuperieur : public wxFrame 
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
		wxButton* boutonConfirmer;
		wxButton* boutonAnnuler;
		
		// Virtual event handlers, overide them in your derived class
		virtual void buttonConfirmerEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void buttonAnnulerEvt( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		AjouterFormationEnseignementSuperieur( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("EnseignementSuperieur"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1172,104 ), long style = wxDEFAULT_FRAME_STYLE|wxFRAME_FLOAT_ON_PARENT|wxTAB_TRAVERSAL );
		
		~AjouterFormationEnseignementSuperieur();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class SupprimerFormationLGT
///////////////////////////////////////////////////////////////////////////////
class SupprimerFormationLGT : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText25;
		wxTextCtrl* TextCtrlId;
		wxButton* boutonSupprimer;
		wxButton* boutonSupprimerTout;
		wxButton* boutonAnnuler;
		
		// Virtual event handlers, overide them in your derived class
		virtual void buttonSupprimerEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void boutonSupprimerToutEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void buttonAnnulerEvt( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		SupprimerFormationLGT( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Lycee General Technologique"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 307,218 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~SupprimerFormationLGT();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class SupprimerFormationLP
///////////////////////////////////////////////////////////////////////////////
class SupprimerFormationLP : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText25;
		wxTextCtrl* TextCtrlId;
		wxButton* boutonSupprimer;
		wxButton* boutonSupprimerTout;
		wxButton* boutonAnnuler;
		
		// Virtual event handlers, overide them in your derived class
		virtual void buttonSupprimerEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void boutonSupprimerToutEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void buttonAnnulerEvt( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		SupprimerFormationLP( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Lycee professionnel"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 307,218 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~SupprimerFormationLP();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class SupprimerFormationAlternance
///////////////////////////////////////////////////////////////////////////////
class SupprimerFormationAlternance : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText25;
		wxTextCtrl* TextCtrlId;
		wxButton* boutonSupprimer;
		wxButton* boutonSupprimerTout;
		wxButton* boutonAnnuler;
		
		// Virtual event handlers, overide them in your derived class
		virtual void buttonSupprimerEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void boutonSupprimerToutEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void buttonAnnulerEvt( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		SupprimerFormationAlternance( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Alternance"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 307,218 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~SupprimerFormationAlternance();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class SupprimerFormationEnseignementSuperieur
///////////////////////////////////////////////////////////////////////////////
class SupprimerFormationEnseignementSuperieur : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText25;
		wxTextCtrl* TextCtrlId;
		wxButton* boutonSupprimer;
		wxButton* boutonSupprimerTout;
		wxButton* boutonAnnuler;
		
		// Virtual event handlers, overide them in your derived class
		virtual void buttonSupprimerEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void boutonSupprimerToutEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void buttonAnnulerEvt( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		SupprimerFormationEnseignementSuperieur( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("EnseignementSuperieur"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 307,218 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~SupprimerFormationEnseignementSuperieur();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ModifierFormationLGT
///////////////////////////////////////////////////////////////////////////////
class ModifierFormationLGT : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* StaticTextId;
		wxTextCtrl* TextCtrlId;
		wxButton* boutonConfirmer;
		wxButton* boutonAnnuler;
		
		// Virtual event handlers, overide them in your derived class
		virtual void boutonConfirmerEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void boutonAnnulerEvt( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ModifierFormationLGT( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Lycee General Technologique"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 332,201 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~ModifierFormationLGT();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ModifierFormationLP
///////////////////////////////////////////////////////////////////////////////
class ModifierFormationLP : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* StaticTextId;
		wxTextCtrl* TextCtrlId;
		wxButton* boutonConfirmer;
		wxButton* boutonAnnuler;
		
		// Virtual event handlers, overide them in your derived class
		virtual void boutonConfirmerEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void boutonAnnulerEvt( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ModifierFormationLP( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Lycee professionnel"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 332,201 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~ModifierFormationLP();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ModifierFormationAlternance
///////////////////////////////////////////////////////////////////////////////
class ModifierFormationAlternance : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* StaticTextId;
		wxTextCtrl* TextCtrlId;
		wxButton* boutonConfirmer;
		wxButton* boutonAnnuler;
		
		// Virtual event handlers, overide them in your derived class
		virtual void boutonConfirmerEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void boutonAnnulerEvt( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ModifierFormationAlternance( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Alternance"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 332,201 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~ModifierFormationAlternance();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ModifierFormationEnseignementSuperieur
///////////////////////////////////////////////////////////////////////////////
class ModifierFormationEnseignementSuperieur : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* StaticTextId;
		wxTextCtrl* TextCtrlId;
		wxButton* boutonConfirmer;
		wxButton* boutonAnnuler;
		
		// Virtual event handlers, overide them in your derived class
		virtual void boutonConfirmerEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void boutonAnnulerEvt( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ModifierFormationEnseignementSuperieur( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("EnseignementSuperieur"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 332,201 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~ModifierFormationEnseignementSuperieur();
	
};

#endif //__IHM_H__
