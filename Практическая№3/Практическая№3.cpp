#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
	const int line = 3;
	const int cols = 5;
	float arr[line][cols];
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < line; ++i) {
        cout << "Строка №" << i + 1 << ":\n";
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }
    float ari[line];
    for (int i = 0; i < line; ++i) {
        float s = 0;
        for (int j = 0; j < cols; ++j) {
            s += arr[i][j];
        }
        ari[i] = s / cols;
    }
    cout << "\nСредние арифметические всех элементов:\n";
    for (int i = 0; i < line; ++i) {
        cout << "Строка №" << i + 1 << ": " << ari[i] << "\n";
    }
    return 0;
}