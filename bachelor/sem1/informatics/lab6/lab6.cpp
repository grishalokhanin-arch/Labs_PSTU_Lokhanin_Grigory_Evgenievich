#include <iostream>
#include <string>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string text = "Hello world C++ lab";
    cout << "Исходная строка: " << text << endl;

    string word = "";
    cout << "Результат: ";

    for(int i = 0; i <= text.length(); i++) {
        if(i == text.length() || text[i] == ' ') {
            for(int j = word.length() - 1; j >= 0; j--) {
                cout << word[j];
            }
            cout << " ";
            word = "";
        }
        else {
            word += text[i];
        }
    }
    cout << endl;

    return 0;
}