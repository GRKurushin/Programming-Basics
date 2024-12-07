#include <iostream>
#include <iomanip>
#define M 4
#define N 3

using namespace std;

// Дана матрица размера 𝑀 × 𝑁. Поменять местами строки, содержащие минимальный 
// и максимальный элементы матрицы.

int main() {
    setlocale(LC_ALL, "Russian");
    int arr[M][N] = {{8, 11, 4},
                     {14, 10, 15},
                     {5, 13, 9},
                     {13, 9, 10}};
    int max = 0, i_max, min = 1000000, i_min, t;

    cout << "Исходная матрица:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << setw(4) << arr[i][j];

            if (arr[i][j] > max) {
                max = arr[i][j];
                i_max = i;
            }
            if (arr[i][j] < min) {
                min = arr[i][j];
                i_min = i;
            }
        }
        cout << endl;
    }

    for (int i = 0; i < N; i++) {
        t = arr[i_max][i];
        arr[i_max][i] = arr[i_min][i];
        arr[i_min][i] = t;
    }
    
    cout << endl << "Полученная матрица:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }
    
    return 0;
}