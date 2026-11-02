
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double pi = acos(-1.0);
    const double epsilon = 0.0001;
    const int n = 35;

    for (int k = 0; k <= 10; k++)
    {
        double x = 0.1 + 0.07 * k;
        double SN = 0, SE = 0;

        // Сумма первых 35 членов ряда
        for (int i = 1; i <= n; i++)
        {
            SN += pow(x, i) * cos(i * pi / 3) / i;
        }

        // Сумма ряда с заданной точностью
        double term = 1;
        for (int i = 1; fabs(term) > epsilon; i++)
        {
            term = pow(x, i) * cos(i * pi / 3) / i;
            SE += term;
        }

        // Точное значение функции
        double Y = -0.5 * log(1 - 2 * x * cos(pi / 3) + x * x);

        cout << "X = " << x
             << " SN = " << SN
             << " SE = " << SE
             << " Y = " << Y << endl;
    }

    return 0;
}
