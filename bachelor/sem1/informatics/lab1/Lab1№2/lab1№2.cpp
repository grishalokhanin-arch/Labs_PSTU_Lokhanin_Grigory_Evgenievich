#include <iostream>
#include <clocale>
using namespace std;

int main()
{

    int n, m;
    cout << "n, m: ";
    cin >> n >> m;

    cout << endl << "1: -m - ++n" << endl;
    cout << ": " << -m - ++n << endl;
    cout << "n = " << n << ", m = " << m << endl;
    
    cout << endl << "2: m * n < n++" << endl;
    cout << ": " << (m * n < n++) << endl;
    cout << "n = " << n << ", m = " << m << endl;

    cout << endl << "3: n-- > m++" << endl;
    cout << ": " << (n-- > m++) << endl;
    cout << "n = " << n << ", m = " << m << endl;

    return 0;
}