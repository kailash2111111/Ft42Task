#include <iostream>
#include <cstdlib>
#include <ctime>

#include "declaration.h"
#include "generateMode.h"

int main() {
    std::srand(static_cast<unsigned int>(time(0)));

    declaration dl;  // Shared declaration object

    generateMode(dl);

    return 0;
}
