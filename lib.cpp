#include <iostream>
#include "lib.h"

int miao(char matrice[10][20], char nome[20]){

    int i=0, k=0, conta=0;

    while(k < 19 and i <10){
        if (matrice[i][k]==nome[k]){
            k++;
            conta=i;
        } else if (matrice[i][k]!=nome[k]) {
            i++;
        }
    }
    return conta;
}
