#include "Polynomial.h"

int Polynomial::evalPolynomial(const std::vector<int>& coeffs, int x) {
    int result = 0;
    int power = 1;
    for (int coef : coeffs) {
        result += coef * power;
        power *= x;
    }
    return result;
}
