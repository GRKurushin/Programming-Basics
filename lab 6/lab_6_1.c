#include <stdio.h>
#include <locale.h>

// Составить программу вывода всех трехзначных чисел, сумма цифр которого равна 
// данному натуральному числу.

int main() {
    setlocale(LC_ALL, "Rus");
    int n, num = 100;
    printf("Введите натуральное число n: ");
    scanf("%d", &n);
    printf("Трехзначные числа, сумма цифр которых равна данному натуральному числу:\n");
    do {
        if (num / 100 + num % 100 / 10 + num % 100 % 10 == n) {
            printf("%d\n", num);
        }
        num++;
    } while(num != 1000);
    return 0;
}