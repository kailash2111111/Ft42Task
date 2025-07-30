#include "machine.h"
#include <iostream>
#include <cmath>

int  machine::gcdN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int machine::modInverse(int &e, int &phi) {
    for (int d = 1; d < phi; d++) {
        if ((d * e) % phi == 1)
            return d;
    }
    return -1; // Not found
}


int  machine::power(int base, int exp, int mod) {
    std ::cout << "base : " << base << "exp : " << exp << "mod : "<< mod << std::endl;
    int result = 1;
    base = base % mod;

    while (exp != 0) {
        if (exp & 1)
            result = (result *1LL * base) % mod;

        base = (base *1LL* base) % mod;
        exp = exp /2 ;  


    }

    return result;
}
//int machine::power(int base, int exp, int mod) {
//    int result = 1;
//    base = base % mod;
//
//    while (exp != 0) {
//        if (exp & 1) {
//            result = (result * base) % mod;
//        }
//
//        base = (base * base) % mod;
//        exp = exp / 2;  // Or: exp >>= 1;
//    }
//
//    return result;
//}

//int machine::power(int base, int expo, int m) {
//    int res = 1;
//    base = base % m;
//    std::cout << " start base : " << base << std::endl;
//
//    while (expo != 0) {
//        if (expo & 1) {
//            std::cout << "in if condion";
//            res = (res * 1LL * base) % m;
//        }
//
//        std::cout << "res : "<<res << std::endl;
//
//        base = (base * 1LL * base) % m;
//        
//        std::cout << "base : " << base << std::endl;
//
//
//        expo = expo / 2;
//        std::cout << "expo : " << expo << std::endl;
//
//    }
//    return res;
//}

//int  machine::power(int base, int expo, int m) {
//
//   long temp = pow(base, expo);
//
//    return  (long)fmod(temp, m);
//}


