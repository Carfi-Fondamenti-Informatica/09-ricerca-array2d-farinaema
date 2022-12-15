#include <iostream>
#include "lib.h"
using namespace std;

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
            cin >> matrice[i][j];
        }
    }

    for ( k = 0; k < 20; k++) {
        cin >> nome[i];
    }


    if (miao(matrice, nome)<10){
        cout << miao(matrice, nome) << endl;
    } else {
        cout << "errore" << endl;
    }

}
