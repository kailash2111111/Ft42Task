#include "UserInput.h"
#include <iostream>
#include "powerClass.h"

using namespace std;

void UserInput::user() {
    powerClass pl;

    int prime ;
    std::cout << "Enter the prime Number \n";
    std::cin >> prime;
    int generator;
    std::cout << "Enter the generator \n";
    std::cin >>generator;

    int OwnerPrivateNumber;
    cout << "Enter the private Key First Number : \n";
    cin >> OwnerPrivateNumber;

    int ReceivedPrivateNumber;
    cout << "Enter the Second private key \n";
    cin >> ReceivedPrivateNumber;

    int x = pl.power(generator, OwnerPrivateNumber, prime);

    int y = pl.power(generator, ReceivedPrivateNumber, prime);

    cout << "Exchange The private Key\n";

    int Alice = pl.power(y, OwnerPrivateNumber, prime);
    int Bob = pl.power(x, ReceivedPrivateNumber, prime);

    cout << "After exchange Alice : " << Alice << endl;
    cout << "After exchange Bob : " << Bob << endl;
}
