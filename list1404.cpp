#include <iomanip>
#include <iostream>
#include <istream>
#include <map>
#include <string>
#include <ostream>

int main(int argc, char *argv[])
{
 using namespace std;

 map<string, int> counts;
 string word;

 while (cin >> word)
   ++counts[word];
 
  return 0;
}
