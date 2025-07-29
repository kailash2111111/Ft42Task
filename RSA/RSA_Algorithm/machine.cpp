#include "machine.h"

int  machine::gcdN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int machine::modInverse(int e, int phi) {
    for (int d = 1; d < phi; d++) {
        if ((d * e) % phi == 1)
            return d;
    }
    return -1; // Not found
}


int  machine::Power(int base, int exp, int mod) {
    int result = 1;
    base = base % mod;

    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;

        exp = exp / 2;  // exp /= 2
        base = (base * base) % mod;
    }

    return result;
}