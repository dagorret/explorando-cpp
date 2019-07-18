#include <ios>
#include <iostream>
#include <istream>
#include <ostream>


int main(int argc, char *argv[])
{
  std::cin >> std::noskipws;

  char ch;

  while (std::cin >> ch)
    std::cout << ch;
  
  return 0;
}
