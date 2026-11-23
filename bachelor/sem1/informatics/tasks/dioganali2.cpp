#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    const int N = 5;
    int a[N][N];

    cout << "Исходный массив:" << endl;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            a[i][j] = rand() % 9 + 1; // Числа от 1 до 9
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Заменяем элементы главной (i == j) и побочной (i + j == N - 1) диагоналей на 0
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(i == j || i + j == N - 1) {
                a[i][j] = 0;
            }
        }
    }

    cout << endl << "Массив после обнуления диагоналей:" << endl;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}