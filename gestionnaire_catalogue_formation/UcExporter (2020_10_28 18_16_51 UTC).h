#include "SqlitePersiBny.h"
#include <sqlite3.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#ifndef UCEXPORTER_H_
#define UCEXPORTER_H_

class UcExporter{


public:

	std::string exporter();
	void doIt();
	

private:

	SqlitePersiBny bd;

public:

	virtual ~UcExporter();
	UcExporter(std::string dbFile);
};
#endif 


