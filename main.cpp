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
        for ( j = 0; j < 20; j++) {
            std::cin >> matrice[i][j];
        }
    }

    for ( k = 0; k < 20; k++) {
        std::cin >> nome[i];
    }


    if (miao(matrice, nome)<10){
        std::cout << miao(matrice, nome) << std::endl;
    } else {
        std::cout << "errore" << std::endl;
    }

}
