#include <iostream>
#include <istream>
#include <ostream>
#include <string>

int main()
{
    std::cout << "Ingrese Su nombre: ";
    std::string nombre;
    std::cin >> nombre;

    std::cout << "Ingrese su Edad: ";
    int edad;
    std::cin >> edad;

    std::cout << nombre  << " Tiene una edad de: " << edad << "\n";
}
