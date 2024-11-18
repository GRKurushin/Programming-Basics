#include <stdio.h>
#include <math.h>

/*Дано число N<99. Дописать в начало и в конец числа цифру k. (диапазон возможных 
k, например, от 1 до 5).*/

int main() {
    int N, k;
    printf("Enter N and k: ");
    scanf("%d %d", &N, &k);
    N = k * pow(10, (N / 10 != 0) + 2) + N * 10 + k;
    printf("Result: %d", N);
    return 0;
}