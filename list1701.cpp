#include <iomanip>
#include <ios>
#include <iostream>
#include <istream>
#include <map>
#include <ostream>
#include <string>

int main()
{
  using namespace std;

  typedef map<string, int> count_map;
  typedef count_map::iterator count_iter;
  typedef string::size_type str_size;

  count_map counts;
  string word;

  // Leer palabras desde la entrada estandar y cuenta
  // el números de veces que la palabra aparece
  string okay("ABCDEFGHIJKLMNOPQRSTUWXYZ"
	      "abcdefghijklmnopqrstuwxyz"
	      "01234567890-_");
  
}
