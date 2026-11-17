#include <iostream>
using namespace std;

int main() {
    const int N = 6;
    int A[N] = {6, 9, 12, 7, 1, -2};
    
    int i = -1;
    int j = -1;

    // Тот самый ЕДИНСТВЕННЫЙ цикл для поиска и обмена
    for (int idx = 0; idx < N; idx++) {
        if (A[idx] == 9) i = idx;
        if (A[idx] == 7) j = idx;
        
        // Если оба индекса найдены — меняем числа и убиваем цикл
        if (i != -1 && j != -1) {
            int t = A[i];
            A[i] = A[j];
            A[j] = t;
        }
    }

    // Просто выводим результат, чтобы убедиться, что всё сработало
    for (int idx = 0; idx < N; idx++) {
        cout << A[idx] << " ";
    }
    cout << endl;

    return 0;
}