#include <stdio.h>
#include <locale.h>
#define M 4
#define N 3

// Дана матрица размера M x N. В каждом столбце матрицы найти максимальный из 
// четных элементов.

// Будем считать, что четные элементы - это не четность их позиции в столбце, а четность самого числа

void max_element(int arr[M][N], int ans[N]) {
    int max;
    for (int i = 0; i < N; i++) {
        max = 0;
        for (int j = 0; j < M; j++) {
            if (arr[j][i] % 2 == 0 && arr[j][i] > max) { max = arr[j][i]; }
        }
        ans[i] = max;
    }
}


int main() {
    setlocale(LC_ALL, "Rus");
    int arr[M][N] = {{8, 11, 4},
                     {14, 10, 15},
                     {5, 18, 9},
                     {13, 9, 16}};
    int ans[N];
    max_element(arr, ans);
    for (int i = 0; i < N; i++) {
        printf("Максимальный четный элемент %d столбца: %d\n", i + 1, ans[i]);
    }

    return 0;
}