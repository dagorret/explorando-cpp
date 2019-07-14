#include <ios>
#include <iostream>
#include <ostream>

int main(int argc, char *argv[])
{
  using namespace std;
  
  std::cout << "True= " << true  << "\n";
  std::cout << "False= " << false  << "\n";
  std::cout << std::boolalpha  << "\n";
  std::cout << "True= " << true  << "\n";
  std::cout << "False= " << false  << "\n";

  return 0;
}
