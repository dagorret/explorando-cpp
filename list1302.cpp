#include <cstdio>
#include <fstream>
#include <istream>
#include <iostream>

int main(int argc, char *argv[])
{
 std::ifstream in("list1302.in");
 if (not in)
   std::perror("list1302.in");
 else
   {
     std::ofstream out("list1302.out");
     if (not out)
       std::perror("list1302.out");
     else
     {
       int x(0);
       while (in >> x)
	 out << x << '\n';
       out.close();
       in.close(); 
     }
  }
  return 0;
}
