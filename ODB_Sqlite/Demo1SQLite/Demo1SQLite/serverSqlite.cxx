#include "serverSqlite.hxx"
#include <string>
#include <sqlite3.h>





 serverSqlite::serverSqlite(const std::string& databasesname) {
	
     if (sqlite3_open(databasesname.c_str(), &db)) {
         std::cerr << "Failed to open database: " << sqlite3_errmsg(db) << std::endl;
     }
     else {
         std::cout << "Database connected: " << databasesname << std::endl;
     }
}

 sqlite3* serverSqlite::getDbConnection() {

     return db;
 }

 bool serverSqlite ::executeQuery(std::string sql) {
     char* errormsg=nullptr;

     int res = sqlite3_exec(getDbConnection(), sql.c_str(), nullptr, nullptr,&errormsg);


     if (res != SQLITE_OK) {
         std::cout << "error  "  << errormsg;
         sqlite3_free(errormsg);
         return false;
     }
     return true;
 }
 bool serverSqlite::execute_query_callbac(std::string& sql, int (*callback)(void* , int, char**, char**)) {
     char* erroemsg = nullptr;

     int res = sqlite3_exec(getDbConnection(), sql.c_str(), callback, nullptr, &erroemsg);


     if (res != SQLITE_OK) {
         std::cout << "SQl Error : " << erroemsg << std::endl;
         sqlite3_free(erroemsg);
         return false;

     }

     

 }
 
 bool  serverSqlite::createTable() {
     std::string sql =  "CREATE TABLE IF NOT EXISTS employees ("
         "id INTEGER PRIMARY KEY AUTOINCREMENT," " name TEXT NOT NULL);";
     bool res = executeQuery(sql);

     return res;
 }

 bool  serverSqlite::insert(std::string name) {

     std::string sql = "INSERT INTO employees (name) VALUES ('" + name + "');";
     bool res = executeQuery(sql);
     return res;

 }

 bool serverSqlite::update(int id, std::string name) {

     std::string sql = "update emplyoee set name '" + name + "'where id = " + std::to_string(id) + ";";
     
     bool res= executeQuery(sql);

     return res;

 }

 bool serverSqlite :: delete_() {

     std::string sql = "DELETE FROM employees;";

     bool res = executeQuery(sql);
     return res;
 }

 bool serverSqlite::deleteById(int id) {

     std::string sql = "DELETE FROM employees WHERE id = " + std::to_string(id) + ";";

     bool res = executeQuery(sql);
     return res;


 }


 bool serverSqlite::showData() {

     std::string sql = "SELECT * FROM employees;";

     return  execute_query_callbac(sql, [](void*, int colCount, char** values, char** columns) -> int {
         for (int i = 0; i < colCount; ++i) {
             std::cout << columns[i] << " = " << (values[i] ? values[i] : "NULL") << "\n";
         }
         return 0;
         });
 }

