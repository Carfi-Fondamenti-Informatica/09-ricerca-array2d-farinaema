#include <iostream>
#include "lib.h"

int main(){

    char matrice[10][20], nome[20];
    int i, j, k;

    for ( i = 0; i < 10; i++) {
        for ( j = 0; j < 20; j++) {
            matrice[i][j]=' ';
        }
    }

    for ( k = 0; k < 20; k++) {
        nome[i]=' ';
    }

    for ( i = 0; i < 10; i++) {
        std::cin >> matrice[i]; 
    }

    for ( k = 0; k < 20; k++) {
        std::cin >> nome[k];
    }


    if (miao(matrice, nome)<10){
        std::cout << miao(matrice, nome) << std::endl;
    } else {
        std::cout << "non presente" << std::endl;
    }

}
