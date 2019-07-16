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

  //Todo Print the results
  return 0;
}
