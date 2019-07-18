#include <algorithm>
#include <iostream>
#include <istream>
#include <limits>
#include <ostream>
#include <vector>

int main(int argc, char *argv[])
{
  typedef std::vector<int> intvec;
  typedef intvec::iterator iterator;

  intvec xs, ys;
  
  { // block local para contener las variables locales de I/O
    int x(0), y(0);
    char sep(' ');

    // Loop mientras la entradas tengan un entero (x), a caracter (sep),
    // y otro entero (y); luego test que el separador sea coma
    while (std::cin >> x >> sep and sep ==',' and std::cin >> y)
    {
	xs.push_back(x);
	ys.push_back(y);
    }
   }

  for (iterator x(xs.begin()), y(ys.begin()); x != xs.end(); ++x, ++y)
     std::cout << *x << ',' << *y << '\n';

  return 0;
}
