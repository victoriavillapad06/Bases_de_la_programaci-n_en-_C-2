//
// Created by victo on 02/11/2024.
//

#include "arrays.h"
#include <iostream>

void arrays() {

    int numeros[10];


    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }


    for (int i = 0; i < 10; i++) {
        std::cout << numeros[i] << "\n";
    }


}
