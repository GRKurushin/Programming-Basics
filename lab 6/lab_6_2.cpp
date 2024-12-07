#include <iostream>
#include <cmath>

using namespace std;

// Составьте  программу  вывода  на  экран  всех  простых  чисел,  не  превосходящих 
// заданного n.

int main() {
    setlocale(LC_ALL, "Russian");
    int n, num = 2, t, count_t;
    do {
        cout << "Введите натуральное число n: ";
        cin >> n;
    } while (n <= 0);
    printf("Простые числа, не превосходящие n:\n");
    do {
        t = 2;
        count_t = 0;
        do {
            if (num % t == 0) {
                count_t++;
            }
            if (count_t >= 1) { break; }
            t++;
        } while (t <= sqrt(num));
        if (count_t == 0) { printf("%d\n", num); }
        num++;
    } while(num <= n);
    return 0;
}