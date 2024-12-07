#include <iostream>
#define N 10

using namespace std;

// Дан массив размера N. Найти максимальный из его элементов, не являющихся ни 
// локальным  минимумом,  ни  локальным  максимумом  (локальный  минимум  – это 
// элемент, который меньше любого из своих соседей; локальный максимум  – это 
// элемент, который больше любого из своих соседей). Если таких элементов в массиве 
// нет, то вывести 0 (как вещественное число).

float not_local(float arr[N]) {
    float max = 0;
    for (int i = 0; i < N; i++) {
        if (i == 0) {
            if (arr[i] == arr[i+1] && arr[i] > max) { max = arr[i]; }
        }
        else if (i == N - 1) {
            if (arr[i] == arr[i-1] && arr[i] > max) { max = arr[i]; }
        }
        else {
            if (!((arr[i] > arr[i + 1] && arr[i] > arr[i - 1]) || (arr[i] < arr[i + 1] && arr[i] < arr[i - 1])) && arr[i] > max) {
                max = arr[i];
            }
        }
    }
    return max;
}

int main() {
    setlocale(LC_ALL, "Russian");
    float arr[N] = {3.1, 5.5, 1.9, 1.3, 3.6, 1.1, 5.7, 1.0, 5.3, 2.8};
    cout << "Максимальный из элементов массива, не являющихся ни локальным минимумом, ни локальным максимумом: " << not_local(arr) << endl;
    return 0;
}