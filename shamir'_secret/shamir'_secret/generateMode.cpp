#include "generateMode.h"
#include "Polynomial.h"
#include <iostream>
#include <vector>
#include "declaration.h"
#include "printNumbe.h"


void generateMode(declaration& dl) {
    Polynomial ev;
    printNumbe pl;
    std::vector<std::pair<int, int>> sl;

    int secret;
    std::cout << "Enter the Secret number:\n";
    std::cin >> secret;

    int split;
    std::cout << "Enter the count of owner:\n";
    std::cin >> split;

    int threshold = split / 2;
    dl = declaration(threshold, split);  // Set parameters

    std::vector<int> coeffs(threshold);
    coeffs[0] = secret;
    for (int i = 1; i < threshold; i++) {
        coeffs[i] = rand() % 100;
    }

    for (int i = 1; i <= split; i++) {
        int y = ev.evalPolynomial(coeffs, i);
        sl.push_back({ i,y });
       
    }
     char ch;
    std::cout << "\n do want print Generated Shares:  y/N \n";
    std::cin >> ch;
    if (ch == 'Y' || ch == 'y') {
        for (const auto& n : sl) {
            std::cout << "  " << n.second << std::endl;
        }
    }

     pl.printNumber( dl);
    sl.clear();
    
    
}
