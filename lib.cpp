#include <iostream>
#include "lib.h"
using namespace std;

int miao(char matrice[10][20], char nome[20]){

    int i=0, j=0, k=0;

    while(k < 19 and i <10){
        if (matrice[i][k]==nome[k]){
            j++;
            i++;
            k++;
        } else {
            i++;
            k++;
        }
    }
    return j;
}
