//
// Created by Lucia Abad on 4/11/24.
//

#include "bucles3.h"
#include <iostream>
using namespace std;

void bucles3() {

    int n;
    int i = 1;

    cout<<"Ingrese un numero entero: ";
    cin>>n;

    do {
      cout<< n << "x "<< i << "="<< n * i <<endl;
        i++;

    } while(i<=10);

}

