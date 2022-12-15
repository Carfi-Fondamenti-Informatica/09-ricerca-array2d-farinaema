#include <iostream>
#include "lib.h"

int miao(char matrice[10][20], char nome[20]){

    int i=0, j=0;

    while(j < 19 and i <10){
        if (matrice[i][j]==nome[j]){
            j++;
        } else if (matrice[i][j]!=nome[j]) {
            i++;
            j=0;
        }
    }
    return i;
}
