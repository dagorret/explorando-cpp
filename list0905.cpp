#include <iostream>
#include <ostream>
#include <istream>
#include <vector>

int main(int argc, char *argv[])
{
  std::vector<int> data;
  int x(0);

  while(std::cin >> x)
    data.push_back(x);

  for(std::vector<int>::iterator i(data.begin()); i != data.end(); i++)
    *i = *i * 2;

  for(std::vector<int>::iterator i(data.begin()); i != data.end(); i++)
    std::cout << *i << '\n';

  return 0;
}
