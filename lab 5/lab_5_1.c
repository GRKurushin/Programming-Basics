#include <stdio.h>
#include <locale.h>

// Найти сумму первых 30 чисел Фибоначчи.

int main() {
    setlocale(LC_ALL, "Rus");
    int a1 = 1, a2 = 1, next, sum = 0, count = 2;
    sum = a1 + a2;
    while (count != 30) {
        sum += a1 + a2;
        next = a1 + a2;
        a1 = a2;
        a2 = next;
        count++;
    }
    printf("Сумма первых 30 чисел Фибоначчи: %d\n", sum);
    return 0;
}