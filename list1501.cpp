#include <iomanip>
#include <ios>
#include <iostream>
#include <istream>
#include <map>
#include <ostream>
#include <string>

int main(int argc, char *argv[])
{
  using namespace std;

  // Definir tipos
  typedef map<string, int> count_map;
  typedef count_map::iterator count_iter;
  typedef string::size_type str_size;

  // Variables
  count_map counts;
  string word;

  // Leer datos de entrada estandar
  while (cin >> word)
    ++counts[word];

  // Determinar el string mas largo
  str_size longest;
  for (count_iter iter(counts.begin()); iter != counts.end(); ++iter)
    if (iter->first.size() > longest)
      longest = iter->first.size();

  // Imprimir para cada pair
  const int count_size(10);
  for (count_iter iter(counts.begin()); iter != counts.end(); ++iter)
    cout << setw(longest)    << left << iter->first 
	 << setw(count_size) << right << iter->second << '\n';

  return 0;
}
