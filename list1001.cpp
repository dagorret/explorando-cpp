#include <iostream>
#include <istream>

int main(int argc, char *argv[])
{
  int x(42);

  std::cout << "x =  "  << x  << "\n";
  std::cout << "+x = " << ++x << "\n";
  std::cout << "x+ = " << x++ << "\n";
  std::cout << "x =  "  << x  << "\n";
return 0;
}
