#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    const int SIZE = 25000000; // 25 млн int = около 100 МБ оперативной памяти
    int* arr = new int[SIZE];

    // Обязательно заполняем массив, чтобы ОС реально выделила физическую RAM
    for(int i = 0; i < SIZE; i++) {
        arr[i] = i;
    }

    cout << "Память выделена (~100 МБ). Открой Диспетчер задач и посмотри на процесс." << endl;
    cout << "Нажми Enter, чтобы завершить программу БЕЗ delete[]...";
    cin.get();

    // Намеренно не вызываем delete[] arr;
    return 0;
}