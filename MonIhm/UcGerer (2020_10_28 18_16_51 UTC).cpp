/******************************************************************
 * Auteur:
 * Guilloux Yan
 * LGT Les Eucalyptus - Nice
 * Section de technicien supérieur
 * Systèmes Numériques option Informatique et réseau (SN-IR)
 ******************************************************************/



#include "UcGerer.h"
#define NOM_BD "formation.db"
#include "IhmFormationAjouterFormation.h"
#include "IhmFormationPrincFrameCatalogue.h"
UcGerer::UcGerer(std::string dbFile):
						bd(dbFile.c_str()){
}
/*Permet d'ajouter des formations dans la base de données
 * Cette fonction sera utilisée dans l'ihm
 * 
*/
std::string UcGerer::ajouter(std::string nom , std::string sigle , std::string video ,std::string prospectus,std::string code ,std::string emplacement){
	SqlitePersiBny::Resultat resultat;
	//this->bd.executerSql("select * from formation",resultat);
	this->bd.executerSql("INSERT INTO formation(nom,sigle,video,prospectus,code,emplacement) VALUES('" +nom+ "','" +sigle+ "','" +video+ "','" +prospectus+ "','" +code+ "','" +emplacement+ "');",resultat);
	return bd.resultatToString(resultat);
}

/*Permet de modifier des formations dans la base de données
 * Cette fonction sera utilisée dans l'ihm
 * Elle demande un idEquip de la table Synop
 * retourne un string
 * */
std::string UcGerer::modifier(int id , std::string nom , std::string sigle , std::string video ,std::string prospectus,int code ,int emplacement){
	SqlitePersiBny::Resultat resultat;
	this->bd.executerSql("UPDATE formation SET nom =  '" +nom+ "' , sigle =  '" +sigle+ "' , video = '" +video+ "' , prospectus =  '" +prospectus+ "' , code =  '" +std::to_string(code)+ "' , emplacement =  '" +std::to_string(emplacement)+ "'  WHERE id = '"+std::to_string(id)+"' ;);" ,resultat);
	return SqlitePersiBny::resultatToString(resultat);
}

void UcGerer::doIt(){
	IhmFormationAjouterFormation * ihmFormationAjouterFormation(new IhmFormationAjouterFormation(NULL));
	ihmFormationAjouterFormation->Show();

	
}

UcGerer::~UcGerer(){
}
/*
int main(void) {
	FormationPersiBny formationPersiBny("formation.db");
	//Modification de la bd
	fprintf(stderr,"%s\n",formationPersiBny.ajouter("Brevet Technicien Supérieur Systeme Numérique Informatique et Réseaux","BTSSNIR","eucalyptus.mp4","eucalyptus.pdf",1234,2).c_str());
	//fprintf(stderr,"%s\n",formationPersiBny.modifier(1,"PRO Electrique","PROELEC","PRO.mp4","Pro.pdf",4321,3).c_str());
	
	
	return EXIT_SUCCESS;
}
*/
/*probleme : a chaque fois que l'on insert, l'id ne s'incrémente pas de 1 du coup on ne peux plus rajouter de formation
 * on ne peut modifier que la ligne précisée dans la methode modifier
*/
