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

  while (cin >> word) {
    string copy;

      for (string::iterator w(word.begin()); w != word.end(); ++w)
	if (okay.find(*w) != string::npos)
	  copy.push_back(*w);
    if (not copy.empty())
      ++counts[copy];
  }

  // Determina la palabra mas larga
  str_size longest(0);
  for (count_iter iter(counts.begin()); iter != counts.end(); ++iter)     
    if (iter->first.size() > longest)
      longest = iter->first.size();

  // Para cada par palabra/count
  const int count_size(10);
  for (count_iter iter(counts.begin()); iter != counts.end(); ++iter)
    cout << setw(longest)   << left  << iter->first
         << setw(count_size) << right << iter->second
	 << '\n';
		 
}
