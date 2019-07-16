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

 map<string, int>::iterator the(counts.find("La"));
  
 if (the == counts.end())
   cout << "\"La\" no se encontró\n";
 else if (the->second == 1)
   cout << "\"La\" tiene " << the->second << " ocurrecia\n";
 else
   cout << "\"La\" tiene " << the->second << " ocurrencias\n";
   
 return 0;
}
