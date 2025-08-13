#include "user.hpp"
#include <iostream>
#include "person.hpp"


user::user(){}

void user::Show() {
	person* pl = new person();

	bool ch = true;

	do {
		std::cout << "1.create table \n";
		std::cout << "2.Insert Value " << std::endl;
	//	std::cout << "3.update value using Id " << std::endl;
	//	std::cout << "4.Delete " << std::endl;
		std::cout << "3.show All values " << std::endl;
		std::cout << "4.exit " << std::endl;

		int choice;
		std::cout << "Enter the Choice " << std::endl;
		std::cin >> choice;
		std::cin.ignore();

		switch (choice) {
		case 1:
			std::cout << "Crete Table \n";
			pl->Create();
			break;
		case 2:
			std::cout << "Insert value\n";
			pl->insert();
			break;
		case 3:
			std::cout << "Show Data \n";
			pl->Show();
			break;
		case 4:
			ch = false;
			break;
		default :
			std::cout << "Wrong Input Number \n";


		}
	} while (ch);
	{

	}

}
