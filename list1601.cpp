#include <iostream>
#include <istream>
#include <ostream>

int main(int argc, char *argv[])
{
  int value(0);
  bool have_value(false);
  char ch(' ');

  while (std::cin.get(ch)) 
  {
    if (ch >= '0' and ch <= '9')
    {
      value = ch - '0';
      have_value = true;
      while (std::cin.get(ch) and ch >= '0' and ch <= '9')
	value = value * 10  + ch - '0';
    }
    if (ch == '\n')
    {
      if (have_value)
      {
	std::cout << value << '\n';
	have_value = false;
      }
    }
	while (std::cin.get(ch) and ch != '\n') {
	  /*Empty*/;
	}
  return 0;
}
