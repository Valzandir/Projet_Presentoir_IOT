#ifndef UCGERER_H_
#define UCGERER_H_
#include "SqlitePersiBny.h"
#include <sqlite3.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

class UcGerer{
	
	public :
	std::string ajouterLGT(std::string nom , std::string sigle , std::string videoLGT ,std::string prospectus,std::string codeLGT);
	std::string supprimerLGT(std::string code);
	std::string supprimerToutLGT();
	
	std::string ajouterLP(std::string nom , std::string sigle , std::string videoLP ,std::string prospectus,std::string codeLP);
	std::string supprimerLP(std::string code);
	std::string supprimerToutLP();
	
	std::string ajouterAlternance(std::string nom , std::string sigle , std::string video ,std::string prospectus,std::string code);
	std::string supprimerAlternance(std::string code);
	std::string supprimerToutAlternance();
	
	std::string ajouterEnseignementSuperieur(std::string nom , std::string sigle , std::string video ,std::string prospectus,std::string code);
	std::string supprimerEnseignementSuperieur(std::string code);
	std::string supprimerToutEnseignementSuperieur();
	
	void doItLGT();
	void doItLGTSuppr();
	void doItLGTModif();
	
	void doItLP();
	void doItLPSuppr();
	void doItLPModif();
	
	void doItAlternance();
	void doItAlternanceSuppr();
	void doItAlternanceModif();
	
	void doItEnseignementSuperieur();
	void doItEnseignementSuperieurSuppr();
	void doItEnseignementSuperieurModif();
	
	void doItLister();
	
	private:
	SqlitePersiBny bd;
	
	public:
	virtual ~UcGerer();
	UcGerer(std::string dbFile);
};
#endif 
