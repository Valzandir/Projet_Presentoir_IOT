/******************************************************************
 * Auteur:
 * Guilloux Yan
 * LGT Les Eucalyptus - Nice
 * Section de technicien supérieur
 * Systèmes Numériques option Informatique et réseau (SN-IR)
 ******************************************************************/

#include "UcGerer.h"

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

UcGerer::UcGerer(std::string dbFile): bd(dbFile.c_str()){
	}


std::string UcGerer::ajouterLGT(std::string nom , std::string sigle , std::string video ,std::string prospectus,std::string code)
{
	
	SqlitePersiBny::Resultat resultat;
	this->bd.executerSql("INSERT INTO LyceeGeneralTechno(nom,sigle,video,prospectus,code) VALUES('" +nom+ "','" +sigle+ "','" +video+ "','" +prospectus+ "','" +code+ "');",resultat);
	return bd.resultatToString(resultat);
}
std::string UcGerer::supprimerLGT(std::string code)
{
	SqlitePersiBny::Resultat resultat;
	this->bd.executerSql("DELETE from LyceeGeneralTechno WHERE code = '"+code+"';);" ,resultat);
	return SqlitePersiBny::resultatToString(resultat);
}
std::string UcGerer::supprimerToutLGT()
{
	SqlitePersiBny::Resultat resultat;
	this->bd.executerSql("DELETE FROM LyceeGeneralTechno;);" ,resultat);
	return SqlitePersiBny::resultatToString(resultat);
}
void UcGerer::doItLGT()
{
	IhmFormationAjouterFormationLGT * ihmFormationAjouterFormationLGT(new IhmFormationAjouterFormationLGT(NULL));
	ihmFormationAjouterFormationLGT->Show();
}
void UcGerer::doItLGTSuppr()
{
	IhmFormationSupprimerFormationLGT * ihmFormationSupprimerFormationLGT(new IhmFormationSupprimerFormationLGT(NULL));
	ihmFormationSupprimerFormationLGT->Show();
}
void UcGerer::doItLGTModif()
{
	IhmFormationModifierFormationLGT * ihmFormationModifierFormationLGT(new IhmFormationModifierFormationLGT(NULL));
	ihmFormationModifierFormationLGT->Show();
}



std::string UcGerer::ajouterLP(std::string nom , std::string sigle , std::string video ,std::string prospectus,std::string code)
{
	SqlitePersiBny::Resultat resultat;
	this->bd.executerSql("INSERT INTO LyceeProfessionnel(nom,sigle,video,prospectus,code) VALUES('" +nom+ "','" +sigle+ "','" +video+ "','" +prospectus+ "','" +code+ "');",resultat);
	return bd.resultatToString(resultat);
}
std::string UcGerer::supprimerLP(std::string code)
{
	SqlitePersiBny::Resultat resultat;
	this->bd.executerSql("DELETE from LyceeProfessionnel WHERE code = '"+code+"';);" ,resultat);
	return SqlitePersiBny::resultatToString(resultat);
}
std::string UcGerer::supprimerToutLP()
{
	SqlitePersiBny::Resultat resultat;
	this->bd.executerSql("DELETE FROM LyceeProfessionnel;);" ,resultat);
	return SqlitePersiBny::resultatToString(resultat);
}
void UcGerer::doItLP()
{
	IhmFormationAjouterFormationLP * ihmFormationAjouterFormationLP(new IhmFormationAjouterFormationLP(NULL));
	ihmFormationAjouterFormationLP->Show();
}
void UcGerer::doItLPSuppr()
{
	IhmFormationSupprimerFormationLP * ihmFormationSupprimerFormationLP(new IhmFormationSupprimerFormationLP(NULL));
	ihmFormationSupprimerFormationLP->Show();
}
void UcGerer::doItLPModif()
{
	IhmFormationModifierFormationLP * ihmFormationModifierFormationLP(new IhmFormationModifierFormationLP(NULL));
	ihmFormationModifierFormationLP->Show();
}



std::string UcGerer::ajouterAlternance(std::string nom , std::string sigle , std::string video ,std::string prospectus,std::string code)
{
	SqlitePersiBny::Resultat resultat;
	this->bd.executerSql("INSERT INTO Alternance(nom,sigle,video,prospectus,code) VALUES('" +nom+ "','" +sigle+ "','" +video+ "','" +prospectus+ "','" +code+ "');",resultat);
	return bd.resultatToString(resultat);
}
std::string UcGerer::supprimerAlternance(std::string code)
{
	SqlitePersiBny::Resultat resultat;
	this->bd.executerSql("DELETE from Alternance WHERE code = '"+code+"';);" ,resultat);
	return SqlitePersiBny::resultatToString(resultat);
}
std::string UcGerer::supprimerToutAlternance()
{
	SqlitePersiBny::Resultat resultat;
	this->bd.executerSql("DELETE FROM Alternance;);" ,resultat);
	return SqlitePersiBny::resultatToString(resultat);
}
void UcGerer::doItAlternance()
{
	IhmFormationAjouterFormationAlternance * ihmFormationAjouterFormationAlternance(new IhmFormationAjouterFormationAlternance(NULL));
	ihmFormationAjouterFormationAlternance->Show();
}
void UcGerer::doItAlternanceSuppr()
{
	IhmFormationSupprimerFormationAlternance * ihmFormationSupprimerFormationAlternance(new IhmFormationSupprimerFormationAlternance(NULL));
	ihmFormationSupprimerFormationAlternance->Show();
}
void UcGerer::doItAlternanceModif()
{
	IhmFormationModifierFormationAlternance * ihmFormationModifierFormationAlternance(new IhmFormationModifierFormationAlternance(NULL));
	ihmFormationModifierFormationAlternance->Show();
}



std::string UcGerer::ajouterEnseignementSuperieur(std::string nom , std::string sigle , std::string video ,std::string prospectus,std::string code)
{
	SqlitePersiBny::Resultat resultat;
	this->bd.executerSql("INSERT INTO EnseignementSuperieur(nom,sigle,video,prospectus,code) VALUES('" +nom+ "','" +sigle+ "','" +video+ "','" +prospectus+ "','" +code+ "');",resultat);
	return bd.resultatToString(resultat);
}
std::string UcGerer::supprimerEnseignementSuperieur(std::string code)
{
	SqlitePersiBny::Resultat resultat;
	this->bd.executerSql("DELETE from EnseignementSuperieur WHERE code = '"+code+"';);" ,resultat);
	return SqlitePersiBny::resultatToString(resultat);
}
std::string UcGerer::supprimerToutEnseignementSuperieur()
{
	SqlitePersiBny::Resultat resultat;
	this->bd.executerSql("DELETE FROM EnseignementSuperieur;);" ,resultat);
	return SqlitePersiBny::resultatToString(resultat);
}
void UcGerer::doItEnseignementSuperieur()
{
	IhmFormationAjouterFormationEnseignementSuperieur * ihmFormationAjouterFormationEnseignementSuperieur(new IhmFormationAjouterFormationEnseignementSuperieur(NULL));
	ihmFormationAjouterFormationEnseignementSuperieur->Show();
}
void UcGerer::doItEnseignementSuperieurSuppr()
{
	IhmFormationSupprimerFormationEnseignementSuperieur * ihmFormationSupprimerFormationEnseignementSuperieur(new IhmFormationSupprimerFormationEnseignementSuperieur(NULL));
	ihmFormationSupprimerFormationEnseignementSuperieur->Show();	
}
void UcGerer::doItEnseignementSuperieurModif()
{
	IhmFormationModifierFormationEnseignementSuperieur * ihmFormationModifierFormationEnseignementSuperieur(new IhmFormationModifierFormationEnseignementSuperieur(NULL));
	ihmFormationModifierFormationEnseignementSuperieur->Show();
}


void UcGerer::doItLister()
{
	system("xdg-open formation.csv");
}
UcGerer::~UcGerer(){}
