#include <algorithm>
#include <iostream>
#include <istream>
#include <iterator>
#include <ostream>
#include <vector>

int main(int argc, char *argv[])
{
  std::vector<int> data;
  int x;

  while (std::cint >> x)
    data.push_back(x);

  return 0;
}
