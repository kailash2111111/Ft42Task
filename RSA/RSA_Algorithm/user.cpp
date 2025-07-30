#include "user.h"
#include<iostream>
#include "machine.h"




void user::userInputr() {

   
    machine ml;

    int p = 7919, q = 1009;
    int n = p * q;                  
    int phi = (p - 1) * (q - 1);   

    /*int e = 24;
    while (ml.gcdN(e, phi) != 1)
    e++;*/

    int e;
    for ( e = 2; e < phi; e++) {

        if (ml.gcdN(e, phi) == 1) {
            break;
        }
    }

    int d = ml.modInverse(e, phi);

   std::cout << "Public Key (e, n): (" << e << ", " << n << ")\n";
    std::cout << "Private Key (d, n): (" << d << ", " << n << ")\n";

    int msg;
    std::cout << "Enter a message : ";
    std::cin >> msg;

    int cipher = ml.power(msg, e, n);
   std:: cout << "Encrypted Message: " << cipher << std::endl;

    int decrypted = ml.power(cipher, d, n);
   std:: cout << "Decrypted Message: " << decrypted << std::endl;
}