#include <iostream>
#include <istream>
#include <map>
#include <string>
#include <ostream>

int main(int argc, char *argv[])
{
  std::map<std::string, int> counts;
  std::string word;

  while (std::cin >> word)
    ++counts[word];

  //Por cada pair de word/counts
  for (std::map<std::string, int>::iterator iter(counts.begin()); iter != counts.end(); ++iter)
    std::cout << iter->first << '\t' << iter->second  << "\n";
  return 0;
}
