#pragma once
#include <iostream>
#include <sqlite3.h>

class serverSqlite
{
private:
	 sqlite3* db=nullptr;

	public :
		serverSqlite(const std::string& databasesname);

		sqlite3* getDbConnection();

		bool createTable();
		bool executeQuery(std::string sql);
		bool execute_query_callbac(std::string& sql, int (*callback)(void*, int, char**, char**));
		bool insert(std::string name);
		bool update(int id, std::string name);
		bool  delete_();
		bool deleteById(int id);
		bool showData();




	
};

