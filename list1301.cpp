#include <cstdio>
#include <fstream>
#include <istream>
#include <ostream>
#include <iostream>

int main(int argc, char *argv[])
{
 std::fstream in("list1301.txt");
 if (not in)
   std::perror("list1301.txt");
 else
   {
     int x(0);
     while (in >> x)
       std::cout << x << '\n';
     in.close();
    }
  return 0;
}
