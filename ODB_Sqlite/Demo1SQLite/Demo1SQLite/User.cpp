#include "User.h"
#include "iostream"
#include "emplyoee.h"
#include "serverSqlite.hxx"




void  User::showData() {
	emplyoee emp;
	serverSqlite* ss = new serverSqlite("emplyoee.db");



	bool res = true;
	do {
		std::cout << "1.create table " <<std:: endl;
		std::cout << "2.Insert value " << std::endl;
		std::cout << "3.update Data " << std::endl;
		std::cout << "4.delete Data" << std::endl;
		std::cout << "5.detete Delete by Id" << std::endl;
		std::cout << "6.showData " << std::endl;
		std::cout << "7.exit " << std::endl;

		int choice;
		std::cout << "Enter the Choice : ";
		std::cin >> choice;
		std::cin.ignore();

		switch (choice) {

		case 1 :
			emp.create(ss);
			break;
		case 2 :
			emp.Insert(ss);
			break;
		case 3:
			emp.Update(ss);
			break;
		case 4:
			emp.delete_(ss);
			break;
		case 5 :
			emp.deleteById(ss);
			break;
		case 6:
			emp.ShowData(ss);
			break;

		case 7 :
				res = false;
				break;
		default :
			std::cout << "Wrong Input \n";
		}

	} while (res);
}
