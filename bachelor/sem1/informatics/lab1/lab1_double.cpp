#include <cmath> //подключаем библиотеку для математических вычеслений
#include <iostream> //библиотека для ввода и вывода
int main(){
    double a, b, c, d, e, f, g, h, i, j, k, l;
    a = 1000.0;
    b = 0.0001;
    
    c = a-b; // (a - b)
    d = c*c*c; // (a - b)^3

    e = a*a*a; // a^3
    f = 3*a*a*b; // 3a^2b
    g = e - f; // (a^3 - 3a^2b)

    h = d - g; // (a-b)^3 - (a^3 - 3a^2b)

    i = 3*a*b*b; // 3ab^2
    j = b*b*b; // b^3

    k = j - i;

    l = h/k;
    std::cout << std::fixed << l;
    return 0; //возврат значения 0
}
