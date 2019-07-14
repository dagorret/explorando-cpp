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

  while (std::cin >> x)
    data.push_back(x);

  for (std::vector<int>::iterator start(data.begin()), end(data.end()); 
       start != end and start != --end;
       ++start)
    {
      int tmp = *start;
      *start = *end;
      *end = tmp;
    }

  std::copy(data.begin(), data.end(), std::ostream_iterator<int>(std::cout, "\n"));

  return 0;
}
