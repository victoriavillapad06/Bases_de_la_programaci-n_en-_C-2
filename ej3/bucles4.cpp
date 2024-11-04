//
// Created by Lucia Abad on 4/11/24.
//

#include "bucles4.h"
#include "iostream"
using namespace std;

void bucles4() {
    int numero;

    cout << "Introduce números positivo y un 0 para salir" << endl;

    while (true) {
        cout << "Numero: ";
        cin >> numero;
        if (numero == 0) {
            cout << "Salir!" << endl;
            break;
        }

        cout << "Has introducido: " << numero << endl;
    }
}
