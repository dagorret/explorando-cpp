#include <algorithm>
#include <iostream>
#include <istream>
#include <ostream>
#include <vector>

int main(int argc, char *argv[])
{
  std::vector<int> data;
  int x(0);

  while(std::cin >> x)
    data.push_back(x);

  std::sort(data.begin(), data.end());

  for (std::vector<int>::iterator i(data.begin()); i != data.end(); ++i) 
    std::cout << *i << '\n';

  return 0;
}
