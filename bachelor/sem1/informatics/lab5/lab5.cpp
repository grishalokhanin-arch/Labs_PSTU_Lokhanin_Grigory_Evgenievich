#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>

using namespace std;

int findMax(int row[4]) {
    int max = row[0];
    for(int j = 0; j < 4; j++) {
        if(row[j] > max) {
            max = row[j];
        }
    }
    return max;
}

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    int arr[3][4];
    cout << "Исходный массив:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            arr[i][j] = rand() % 5; // Числа от 0 до 4
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < 3; i++) {
        int max = findMax(arr[i]);
        for(int step = 0; step < max; step++) {
            int last = arr[i][3];
            arr[i][3] = arr[i][2];
            arr[i][2] = arr[i][1];
            arr[i][1] = arr[i][0];
            arr[i][0] = last;
        }
    }
    cout << "Новый массив:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}