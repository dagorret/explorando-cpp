#include <iostream>
#include <ostream>
#include <iomanip>

int main()
{
    std::cout << "N\tN^2\tN^3\n";
    for (int i(0); i != 21; i = i + 1)
    {
        std::cout << std::setw(2) << i 
                  << std::setw(6) << i*i 
                  << std::setw(7) << i*i*i
                  << "\n";
        
    }
}
