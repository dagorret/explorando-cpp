#include <algorithm>
#include <iostream>
#include <istream>
#include <ostream>
#include <vector>

int main(int argc, char *argv[])
{
  std::vector<int> data;
  int x(0);

  // Read enteros una a la vez
  while (std::cin >> x)
    // Grabar cada entero en un array
    data.push_back(x),

  // Ordenar el vecto
  std::sort(data.begin(), data.end());
  
  // Imprimir el vector, un número por fila
  for (std::vector<int>::size_type i(0); i != data.size();  i = i +1) 
    std::cout << data.at(i)  << '\n';

  return 0;
}
