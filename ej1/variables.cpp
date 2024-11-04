#include "variables.h"
#include <iostream>
#include <string>

void variables()
{
    std::string nombre;
    std::cout << "Por favor ingrese su nombre: ";
    std::cin >> nombre;

    int edad;
    std::cout << "Por favor ingrese su edad: ";
    std::cin >> edad;

    std::cout <<"Hola " << nombre << "! Tienes " << edad << " años. \n";
}