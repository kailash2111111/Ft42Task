#pragma once
#include "serverSqlite.hxx"

class emplyoee
{
public :

	void create(serverSqlite* ss);
	void Insert(serverSqlite* ss);
	void Update(serverSqlite* ss);
	void delete_(serverSqlite* ss);
	void deleteById(serverSqlite* ss);
	void ShowData(serverSqlite* ss);


};

