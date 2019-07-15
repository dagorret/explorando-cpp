#include <iostream>
#include <ostream>
#include <vector>

int main(int argc, char *argv[])
{
 std::vector<int> a, b;
 a.push_back(10);
 a.push_back(20);
 a.push_back(30);
 b.push_back(10);
 b.push_back(20);
 b.push_back(30);

 if (a != b) std::cout << "w: a != b" << "\n";
 if (a < b) std::cout << "w: a < b" << "\n";
 if (a > b) std::cout << "w: a > b" << "\n";
 if (a == b) std::cout << "o: a == b" << "\n";
 if (a >= b) std::cout << "o: a >= b" << "\n";
 if (a <= b) std::cout << "o: a <= b" << "\n";

 a.push_back(40);
 
 if (a != b) std::cout << "o: a != b" << "\n";
 if (a < b) std::cout << "w: a < b" << "\n";
 if (a > b) std::cout << "o: a > b" << "\n";
 if (a == b) std::cout << "w: a == b" << "\n";
 if (a >= b) std::cout << "o: a >= b" << "\n";
 if (a <= b) std::cout << "w: a <= b" << "\n";


 b.push_back(42);
 
 if (a != b) std::cout << "o: a != b" << "\n";
 if (a < b) std::cout << "o: a < b" << "\n";
 if (a > b) std::cout << "w: a > b" << "\n";
 if (a == b) std::cout << "w: a == b" << "\n";
 if (a >= b) std::cout << "w: a >= b" << "\n";
 if (a <= b) std::cout << "o: a <= b" << "\n";
  return 0;
}
