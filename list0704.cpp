#include <iostream>
#include <ostream>

int main()
{
    int sum(0);

    for (int i(10); i != 21; i = i + 1 )
        sum = sum + i;
    
    std::cout << "La suma de 10 a 20 = " << sum << "\n";
}
