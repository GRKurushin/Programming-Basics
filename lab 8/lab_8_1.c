#include <stdio.h>
#include <locale.h>
#define N 4

// Дана матрица A(N, N). Переставить строку с максимальным элементом на главной 
// диагонали со строкой с заданным номером m, (m <= N).

int main() {
    setlocale(LC_ALL, "Rus");
    int m, max_elem = 0, i_max, t;
    int arr[N][N] = {{8, 11, 4, 16},
                     {14, 10, 15, 6},
                     {5, 13, 9, 18},
                     {13, 9, 10, 20}};
    int dop_arr[N];
    do {
        printf("Введите число m (1-4): ");
        scanf("%d", &m);
    } while(m < 1 || m > 4);

    printf("\nИсходная матрица:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++) {
        if (arr[i][i] > max_elem) {
            max_elem = arr[i][i];
            i_max = i;
        }
    }

    for (int i = 0; i < N; i++) {
        t = arr[m - 1][i];
        arr[m - 1][i] = arr[i_max][i];
        arr[i_max][i] = t;
    }

    printf("\nПолученная матрица:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}