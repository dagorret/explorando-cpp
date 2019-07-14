#include <iostream>
#include <iterator>
#include <ostream>
#include <vector>

int main(int argc, char *argv[])
{
  std::vector<int> data;

  data.push_back(10);
  data.push_back(42);

  std::ostream_iterator<int> out(std::ostream_iterator<int>(std::cout, ""));
  std::copy(data.begin(), data.end(), out);
  // No se puede utilizar el decremento --out, ya que todos los flujos
  // de salidad se mueven hacia adelante
  ++out;
  return 0;
}
