#include <iostream>
#include <cstdarg>
#include <clocale>
using namespace std;

void toOctal(int count, ...) {
    va_list args;
    va_start(args, count);

    cout << "Перевод " << count << " чисел в восьмеричную: ";
    for(int i = 0; i < count; i++) {
        int num = va_arg(args, int);
        cout << oct << num << " ";
    }
    cout << dec << endl;

    va_end(args);
}

int main() {
    setlocale(LC_ALL, "Russian");

    toOctal(3, 8, 16, 64);
    toOctal(5, 10, 15, 20, 25, 30);
    toOctal(8, 1, 7, 8, 9, 10, 32, 100, 255);

    return 0;
}