#include <iostream>
#define M 4
#define N 3

using namespace std;

// Дана  матрица  размера  M x N.  Найти  минимальный  среди  элементов  тех  строк, 
// которые упорядочены либо по возрастанию, либо по убыванию. Если упорядоченные 
// строки в матрице отсутствуют, то вывести 0.

bool asc(int arr[N]) {
    for (int i = 0; i < N - 1; i++) {
        if (arr[i] > arr[i + 1]) { return false; }
    }
    return true;
}

bool desc(int arr[N]) {
    for (int i = 0; i < N - 1; i++) {
        if (arr[i] < arr[i + 1]) { return false; }
    }
    return true;
}

int min_element(int arr[M][N]) {
    int min = 0;
    bool flag = false;
    for (int i = 0; i < M; i++) {
        if (asc(arr[i]) || desc(arr[i])) {
            int min_row = arr[i][0];
            for (int j = 1; j < N; j++) {
                if (arr[i][j] < min_row) {
                    min_row = arr[i][j];
                }
            }
            if (!flag || min_row < min) {
                min = min_row;
                flag = true;
            }
        }
    }
    return min;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int arr[M][N] = {{8, 11, 4},
                     {14, 10, 15},
                     {5, 18, 29},
                     {13, 9, 4}};
    cout << "Минимальный элемент среди упорядоченных строк: " << min_element(arr) << endl;
    return 0;
}