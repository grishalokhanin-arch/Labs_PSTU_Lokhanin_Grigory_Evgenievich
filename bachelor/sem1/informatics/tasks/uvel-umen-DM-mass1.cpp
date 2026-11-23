#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // 1. Создаем исходный динамический массив на 4 элемента
    int n = 4;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10; // 10 20 30 40
    }

    cout << "Исходный массив (4 эл.): ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // 2. Увеличиваем длину массива до 6 элементов
    int n2 = 6;
    int* big = new int[n2];
    for(int i = 0; i < n; i++) {
        big[i] = arr[i]; // Копируем старые элементы
    }
    big[4] = 50;
    big[5] = 60;

    delete[] arr; // Освобождаем старую память
    arr = big;    // Перенаправляем указатель на новый массив
    n = n2;

    cout << "После увеличения (6 эл.): ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // 3. Уменьшаем длину массива до 3 элементов
    int n3 = 3;
    int* small = new int[n3];
    for(int i = 0; i < n3; i++) {
        small[i] = arr[i]; // Копируем только первые 3 элемента
    }

    delete[] arr; // Удаляем старый блок памяти
    arr = small;  // Перенаправляем указатель
    n = n3;

    cout << "После уменьшения (3 эл.): ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // 4. Финальная очистка памяти и защита от висячего указателя
    delete[] arr;
    arr = nullptr;

    return 0;
}