#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double eps = 0.0001;
    double a = 2;
    double sum = 0;
    int n = 1;
    
    do{
        sum += a;
        a = a * 2 * pow((double)n / (n + 1), n);

        n++;

    } while (a >= eps);
    cout << "Сумма ряда = " << sum << endl;
    cout << "кол-во членов =  " << n - 1 << endl;
    return 0;
}