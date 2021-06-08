#include "SqlitePersiBny.h"
#include <sqlite3.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#ifndef UCGERER_H_
#define UCGERER_H_
class UcGerer{
	
	public :
	std::string ajouter(std::string nom , std::string sigle , std::string video ,std::string prospectus,std::string code ,std::string emplacement);
	std::string modifier(int id, std::string nom , std::string sigle , std::string video ,std::string prospectus,int code ,int emplacement);
	void doIt();
	private:
	SqlitePersiBny bd;
	
	public:
	virtual ~UcGerer();
	UcGerer(std::string dbFile);
};
#endif 
