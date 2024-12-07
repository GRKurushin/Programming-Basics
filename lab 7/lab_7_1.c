#include <stdio.h>
#include <locale.h>
#define N 30

// Дан  массив  размера   N.  Найти  минимальный  из  его  локальных  максимумов 
// (локальный максимум – это элемент, который больше любого из своих соседей).

int main() {
    setlocale(LC_ALL, "Rus");
    int arr[N] = {1, 11, 13, 13, 15, 10, 20, 2, 16, 6, 8, 5, 6, 5, 18, 15, 10, 3, 17, 16, 4, 8, 6, 15, 15, 18, 13, 14, 8, 18};
    printf("Локальные максиуммы массива:\n");
    for (int i = 0; i < N; i++) {
        if (i > 0 && i < N - 1) {
            if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
                printf("%d\n", arr[i]);
            }
        }
        else if (i == 0) {
            if (arr[i] > arr[i+1]) {
                printf("%d\n", arr[i]);
            }
        }
        else if (i == N - 1) {
            if (arr[i] > arr[i-1]) {
                printf("%d\n", arr[i]);
            }
        }
    }
    return 0;
}