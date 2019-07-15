#include <iostream>
#include <istream>
#include <iterator>
#include <ostream>
#include <vector>

int main(int argc, char *argv[])
{
  std::vector<int> data;

  data.insert(data.begin(), 
	      std::istream_iterator<int>(std::cin),
	      std::istream_iterator<int>());

  std::vector<int>::iterator iter;

  // Imprimir el vector
  // for (std::vector<int>::iterator i(data.begin()); i != data.end(); ++i)
  //	 std::cout << *i << '\n';

  for (iter = data.begin(); iter != data.end() and *iter == 0; ++iter)
    /*empty*/;
  if (iter == data.end())
    std::cout << "Data contiene todos ceros\n";
  else
    std::cout << "Data no contiene todo ceros\n";

  return 0;
}
