#include <algorithm>
#include <iostream>
#include <istream>
#include <ostream>
#include <vector>
#include <iterator>

int main(int argc, char *argv[])
{
  std::vector<int> data;

  // Leer enteros de a uno a la vez
  std::copy(std::istream_iterator<int>(std::cin),
	    std::istream_iterator<int>(),
	    std::back_inserter(data));

  // Ordenar el vector
  std::sort(data.begin(), data.end());

  // Imprimir el vector un número por línea
  std::copy(data.begin(), data.end(), std::ostream_iterator<int>(std::cout, "\n"));

  return 0;
}
