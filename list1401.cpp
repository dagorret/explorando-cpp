#include <iostream>
#include <istream>
#include <map>
#include <string>
#include <ostream>
#include <iomanip>

int main(int argc, char *argv[])
{
  std::map<std::string, int> counts;
  std::string word;

  while (std::cin >> word)
    ++counts[word];

  // Determinar el largo de la palabra más larga
  std::string::size_type longest(0);
  for (std::map<std::string, int>::iterator iter(counts.begin()); iter != counts.end(); ++iter)
	 if (iter->first.size() > longest)
	   longest = iter->first.size();
	     
  //Por cada pair de word/counts
  const int count_size(10);
  for (std::map<std::string, int>::iterator iter(counts.begin()); iter != counts.end(); ++iter)
    std::cout << std::setw(longest)    << std::left  << iter->first
	      << std::setw(count_size) << std::right << iter->second  << "\n";
  return 0;
}
