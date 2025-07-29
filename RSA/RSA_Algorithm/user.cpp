#include "user.h"
#include<iostream>
#include "machine.h"




void user::userInputr() {

   
    machine ml;

    int p = 3, q = 11;
    int n = p * q;                  // n = 33
    int phi = (p - 1) * (q - 1);   // phi = 20

    int e = 24;
    while (ml.gcdN(e, phi) != 1)
        e++;

    int d = ml.modInverse(e, phi);

   std::cout << "Public Key (e, n): (" << e << ", " << n << ")\n";
    std::cout << "Private Key (d, n): (" << d << ", " << n << ")\n";

    int msg;
    std::cout << "Enter a message : ";
    std::cin >> msg;

    int cipher = ml.Power(msg, e, n);
   std:: cout << "Encrypted Message: " << cipher << std::endl;

    int decrypted = ml.Power(cipher, d, n);
   std:: cout << "Decrypted Message: " << decrypted << std::endl;
}