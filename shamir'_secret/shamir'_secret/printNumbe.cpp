#include "printNumbe.h"
#include "SecretReconstruction.h"
#include <iostream>
#include <vector>


void printNumbe::printNumber(declaration& dl) {
    SecretReconstruction sr;


    std::vector<std::pair<int, int>> SelectedShare;

    int cnt;
    std::cout << "\nEnter number of shares to reconstruct the secret count: minmum  " << dl.getThreshold() << ": \n  ";

    std::cout << "Enter the  Count Of shareholder : ";
    std::cin >> cnt;

    for (int i = 1; i <= cnt; i++) {
        int xval;
        int numb;
        std::cout << "Plz Enter the Key Holder Number :   \n";
        std::cin >> numb;


       /* if (dl.getThreshold() >= numb || numb < 0) {
            std::cout << "You Are Not a Part of owenerShip \n";
            std::cin >> numb;
        }*/
        std::cout << "Enter the Your Password Number :  \n";
        std::cin >> xval;
        
    
        SelectedShare.push_back({ numb,xval });
    }


    int secret = sr.reconstructSecret(dl, SelectedShare);

    std::cout << "Secret number is: " << secret << std::endl;
}

