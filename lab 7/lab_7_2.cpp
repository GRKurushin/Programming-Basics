#include <iostream>
#define N 30

using namespace std;

// Дан массив размера N. Найти номер его первого локального минимума (локальный 
// минимум – это элемент, который меньше любого из своих соседей).

int main() {
    setlocale(LC_ALL, "Russian");
    int arr[N] = {15, 13, 13, 15, 10, 1, 20, 2, 16, 6, 8, 5, 6, 5, 18, 15, 10, 3, 17, 16, 4, 8, 6, 15, 15, 18, 13, 14, 8, 18};
    cout << "Номер первого локального минимума массива (начиная с 0): ";
    for (int i = 0; i < N; i++) {
        if (i > 0 && i < N - 1) {
            if (arr[i] < arr[i-1] && arr[i] < arr[i+1]) {
                cout << i << endl;
                break;
            }
        }
        else if (i == 0) {
            if (arr[i] < arr[i+1]) {
                cout << i << endl;
                break;
            }
        }
        else if (i == N - 1) {
            if (arr[i] < arr[i-1]) {
                cout << i << endl;
                break;
            }
        }
    }
    
    return 0;
}