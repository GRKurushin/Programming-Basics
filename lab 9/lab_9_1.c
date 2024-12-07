#include <stdio.h>
#include <locale.h>
#include <math.h>

// Определить функцию для расчета периметра равнобедренной (трапеции?) по ее основаниям и 
// высоте.

float perimeter(float a, float b, float h) {
    return a + b + 2*(sqrt(pow(h,2) + pow((abs(a - b) / 2), 2)));
}

int main() {
    setlocale(LC_ALL, "Rus");
    float a, b, h;
    printf("Введите основания a, b и высоту h: ");
    scanf("%f %f %f", &a, &b, &h);
    printf("Периметр равнобедренной трапеции: %.2f", perimeter(a, b, h));
    return 0;
}