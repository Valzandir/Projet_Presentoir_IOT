#include "UcExporter.h"

UcExporter::UcExporter(std::string dbFile):
						bd(dbFile.c_str()){
}
	
void UcExporter::doIt() {	

system("sqlite3 -header -csv 'formation.db' 'select * from alternance union all  select * from lyceegeneraltechno union all select * from enseignementsuperieur union all select * from lyceeprofessionnel;' > test.csv");	

}

UcExporter::~UcExporter(){
}


