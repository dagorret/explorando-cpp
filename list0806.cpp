#include <iostream>
#include <ostream>

int main()
{
    using namespace std;

    cout.fill('0');
    cout.width(6);
    cout << 42 << '\n';
    cout.self(ios_base::left, ios_base::adjustfield);
    cout.width(6);
    cout << 42 << 
}
