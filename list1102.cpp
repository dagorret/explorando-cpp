#include <ios>
#include <iostream>
#include <ostream>

int main(int argc, char *argv[])
{
  bool b;

  std::cout << std::boolalpha;
  
  b = false; std::cout << b << '\n';
  b = true; std::cout << b << '\n';
  b = false; std::cout << b << '\n';
  b = true; std::cout << b << '\n';
  b = 42; std::cout << b << '\n';
  b = 3.1415926; std::cout << b << '\n';
  b = 0; std::cout << b << '\n';
  b = -0.0; std::cout << b << '\n';
  b = -1; std::cout << b << '\n';
  b = "1"; std::cout << b << '\n';
  b = "0"; std::cout << b << '\n';
  b = "false"; std::cout << b << '\n';
  b = ""; std::cout << b << '\n';
  b = '0'; std::cout << b << '\n';
  b = '\0'; std::cout << b << '\n';
 // b = std::cout; std::cout << b << '\n';
 // b = std::cin; std::cout << b << '\n';

  return 0;
}
