/** @file list0303.cpp */
/** Listing 3-3. Testing for Even or Odd Integers */
/// Read integers and print a message that tells the user
/// whether the number is even or odd.

#include <iostream>
#include <istream>
#include <ostream>

int main()
{
    int x;
    while (std::cin >> x)
        if ( x % 2 != 0 )           
            std::cout << x << " is odd.\n";
        else
            std::cout << x << " is even.\n";
}
