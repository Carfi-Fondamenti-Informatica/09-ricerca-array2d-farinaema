#include <iostream>
#include "lib.h"

int main(){

    char matrice[10][20], nome[20];
    int i, j, k;

    for ( i = 0; i < 10; i++) {
        for ( j = 0; j < 20; j++) {
            matrice[i][j]=' ';
            nome[j]=' ';
        }
    }

    for ( i = 0; i < 10; i++) {
            std::cin >> matrice[i];
    }

    std::cin >> nome;


    if (miao(matrice, nome)<10){
        std::cout << miao(matrice, nome) << std::endl;
    } else {
        std::cout << "non presente" << std::endl;
    }

}
