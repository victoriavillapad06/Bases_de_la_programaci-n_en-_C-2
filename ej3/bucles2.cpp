//
// Created by victo on 04/11/2024.
//

#include "bucles2.h"
#include <iostream>
using namespace std;

void bucles2() {
    int numero, i = 1;


    std::cout << "Introduce un número para ver su tabla de multiplicar: ";
    std::cin >> numero;


    while (i <= 10) {
       std:: cout << numero << " x " << i << " = " << numero * i << endl;
        i++;
    }


}
