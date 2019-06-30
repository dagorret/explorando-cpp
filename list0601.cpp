#include <iostream>
#include <istream>
#include <ostream>


int main()
{
std::cout << "Este programa imprime a table de cuadrados\n" <<
               "Ingrse un valor de comienzo de la tabla: ";
    int start(0);
    std::cin >> start;
    std::cout << "Ingrese una valor para el fin de la tabla: ";
    int end(start);
    std::cin >> end;
    std::cout << "#    #^2\n";
    int x(start);
    end = end + 1; //exit del loop cuando alcanza end
    while (x != end)
    {
        std::cout << x << "    " << x*x << "\n";
        x = x +1;
    }
}
