#include <iostream>
#include <memory>
#include "User.h"
#include "serverSqlite.hxx"


//#include <sqlite3.h>

int main() {

	/*sqlite3* db = nullptr;

	 int rc = sqlite3_open("my_database.sqlite", &db);

	if (rc == SQLITE_OK) {
		std::cout << "Ok Done \n";
	}
	else {
		std::cout << "Not Done \n";
	}

	*/

	User ul;
	ul.showData();

//	serverSqlite* ss=new serverSqlite("Emplyoee.db");






	return 0;

}