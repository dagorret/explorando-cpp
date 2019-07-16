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

  typedef map<string, int> count_map;
  typedef count_map::iterator count_iter;
  typedef string::size_type str_size;

  count_map counts;
  string word;

  while (cin >> word)
    ++counts[word];

  return 0;
}
