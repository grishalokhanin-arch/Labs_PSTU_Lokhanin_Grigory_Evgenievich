#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");

    const int N = 15;
    int arr[N];
    
    srand(time(0));

    cout << "Исходный массив: ";
    for(int i = 0; i < N; i++) 
{
        arr[i] = rand() % 100; // Случайные числа от 0 до 99
        cout << arr[i] << " ";
}
    cout << endl;

    int min_idx = 0, max_idx = 0;
    for(int i = 1; i < N; i++) 
{
        if(arr[i] < arr[min_idx]) min_idx = i;
        if(arr[i] > arr[max_idx]) max_idx = i;
}


    int temp = arr[min_idx];
    arr[min_idx] = arr[max_idx];
    arr[max_idx] = temp;

    cout << "После обмена min и max: ";
    for(int i = 0; i < N; i++) 
{
        cout << arr[i] << " ";
}
    cout << endl;

    double sum = 0;
    for(int i = 0; i < N; i++) 
{
        sum += arr[i];
}
    double avg = sum / N;
    double limit = avg * 1.10;

    cout << "Среднее: " << avg << " (порог: " << limit << ")" << endl;

    cout << "Итоговый массив: ";
    for(int i = 0; i < N; i++) 
{
        if(arr[i] <= limit) 
{
            cout << arr[i] << " ";
}
}
    cout << endl;

    return 0;
}