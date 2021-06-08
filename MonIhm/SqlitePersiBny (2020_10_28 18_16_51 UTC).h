/******************************************************************
 * Auteurs:
 *   Eric Valade (Eric.Valade@ac-nice.fr)
 * LGT Les Eucalyptus - Nice
 * Section de technicien supérieur
 * Systèmes Numériques option Informatique et réseau (SN-IR)
 * $Id: SqlitePersiBny.h 1370 2017-12-27 18:31:20Z eric $
 * $HeadURL: svn://buffalo500/cdt/trunk/2A/s15DiagActSql/TpSql/code/Superviseur/SqlitePersiBny.h $
 ******************************************************************/
//https://www.sqlite.org/cintro.html
#ifndef SQLITEPERSIBNY_H_
#define SQLITEPERSIBNY_H_
#include <sqlite3.h>
#include <SqlitePersiBnyException.h>
#include <vector>
#include <utility>
/*
 * http://www.cplusplus.com/reference/string/ pout conversion de string vers C types primitifs
 * std::stoi
 * std::stof
 * std::stod
 */
class SqlitePersiBny  {
  public:
    typedef std::pair< std::string, std::string> Champs;
    typedef std::vector<Champs> Ligne;
    typedef std::vector<Ligne> Resultat;
    /* Resultat
     * |-------------------------------------------|
     * |   nom 1  |   nom 2  |  nom 3   |   nom 4  |<-|
     * |-------------------------------------------| Champs
Ligne >| valeur 1 | valeur 2 | valeur 3 | valeur 4 |<-|
     * |-------------------------------------------|
     * |                                           |  <- Ligne 1
     * |-------------------------------------------|
     * |                                           |  <- Ligne 2
     */
  private:
    sqlite3 *db;
  public:
    SqlitePersiBny(const char* fichierBdd) throw (SqlitePersiBnyException);
    virtual ~SqlitePersiBny() throw (SqlitePersiBnyException);
    void executerSql(std::string requete) throw (SqlitePersiBnyException);
    int executerSql(std::string requete, SqlitePersiBny::Resultat& resultat) throw (SqlitePersiBnyException);
    int getDernierId();
    int getDernierId(std::string table) throw (SqlitePersiBnyException);//il faut une pk avec autoincrement

    static std::string resultatToString(SqlitePersiBny::Resultat& resultat);
};
#endif 

