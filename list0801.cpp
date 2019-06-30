#include <iostream>
#include <ostream>

int main()
{
    std::cout << "N\tN^2\tN^3\n";
    for (int i(0); i != 21; i = i + 1)
    {
        std::cout << i << "\t" << i*i << "\t" << i*i*i << "\n";
        
    }
}
