#include "person.hpp"
#include<iostream>
#include "PostgressManager.hxx"



person::person() {

}

void person::Create() {
	if (pl->createTable()) {
		std::cout << "Done \n";
	}
	else {
		std::cout << "failed \n";
	}

}
void person::insert() {
	std::string name;
	std::cout << "Enter the Employee Name \n";
	std::cin >> name;

	if (pl->insertData(name)) {
		std::cout << "Done \n";

	}
	else {
		std::cout << "failed \n";

	}


}

void person::Show() {

	pl->showData();

}