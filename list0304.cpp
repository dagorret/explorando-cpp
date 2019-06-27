/** @file list0304.cpp */
/** Listing 3-4. Testing for Even or Odd Integers */
/// Read integers and print a message that tells the user
/// whether the number is even or odd.

#include <iostream>
#include <istream>
#include <ostream>

int main()
{
    int x;
    while (std::cin >> x)
        if ( x % 2 == 0)           // Usar %. Devuelve el resto
            std::cout << x << " is even.\n";
        else
            std::cout << x << " is odd.\n";
}
