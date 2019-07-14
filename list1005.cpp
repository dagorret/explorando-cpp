#include <algorithm>
#include <iostream>
#include <istream>
#include <iterator>
#include <ostream>
#include <vector>

int main(int argc, char *argv[])
{
  std::vector<int> data;

  // Leer los datos desde la entrada standard y agregarlo al final de data
  data.insert(data.end(), std::istream_iterator<int>(std::cin), std::istream_iterator<int>());

  // Dar vuelta el vector
  std::reverse(data.begin(), data.end());

  // Imprimir los datos uno por línea
  std::copy(data.begin(), data.end(), std::ostream_iterator<int>(std::cout, "\n"));

  return 0;
}
