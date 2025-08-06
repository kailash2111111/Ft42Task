#include "emplyoee.h"
#include "serverSqlite.hxx"
#include <string>
#include <iostream>



void emplyoee:: create(serverSqlite* ss) {
	if (ss->createTable()) {
		std::cout << "created successfully "<<std::endl;
	}
	else {
		std::cout << "Failed to created table details.\n";

	}
	
}

void emplyoee:: Insert(serverSqlite* ss) {
	std::string name;
	std::cout << "Enter the Emplyoee Name\n";
	std::getline(std::cin, name);


	if (ss->insert(name)) {

		std::cout << "add successfully " << std::endl;
	}
	else {
		std::cout << "Failed to add employee details.\n";

	}
	


}
void emplyoee:: Update(serverSqlite* ss) {
	int id;
	std::cout << "Enter the Emplyoee Id  : \n";
	std::cin >> id;
	std::cin.ignore();

	std::string name;
	std::cout << "Enter the Emplyoee Name\n";
	std::getline(std::cin, name);

	if (ss->update(id, name)) {
		std::cout << "update successfully " << std::endl;
	}
	else {
		std::cout << "Failed to update employee details.\n";

	}
	

}
void emplyoee:: delete_(serverSqlite* ss) {
	if (ss->delete_()) {
		std::cout << "Delete successfully " << std::endl;
	}
	

}
void  emplyoee::deleteById(serverSqlite* ss) {

	int id;
	std::cout << "Enter the Emplyoee Id  : \n";
	std::cin >> id;
	std::cin.ignore();

	if (ss->deleteById(id)) {
		std::cout << "Delete successfully " << std::endl;
	}
	else {
		std::cout << "Failed to mployee details.\n";

	}
	

	
}

void emplyoee:: ShowData(serverSqlite* ss) {


	if (ss->showData()) {
		std::cout << "Done \n" << std::endl;

	}
	else {
		std::cout << "Failed to Show Data\n";

	}

}