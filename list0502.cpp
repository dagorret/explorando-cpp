#include <iostream>
#include <istream>
#include <ostream>
#include <string>

int main()
{
    std::cout << "¿Cuál es tu Nombre? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hola, " << name << ", ¿como está usted?";
    std::string response;
    std::cin >> response;
    std::cout << "Chau, " << name << ". Yo espero que se sienta " << response << "\n";
}
