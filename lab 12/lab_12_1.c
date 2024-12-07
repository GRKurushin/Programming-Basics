#include <stdio.h>
#include <locale.h>

// Определить  структуру  с  именем  Glasses  содержащую  следующие  поля:  страна 
// производитель; число диоптрий; материал, из которого изготовлен; цена.

struct Glasses {
    char country[50];
    float diopters;
    char material[50];
    float price;
};

int main() {
    setlocale(LC_ALL, "Rus");
    struct Glasses glasses;
    printf("Введите страну производителя на английском языке: ");
    scanf("%s", glasses.country);
    printf("Введите число диоптрий: ");
    scanf("%f", &glasses.diopters);
    printf("Введите материал на английском языке: ");
    scanf("%s", glasses.material);
    printf("Введите цену: ");
    scanf("%f", &glasses.price);

    printf("\nИнформация об очках:\n");
    printf("Страна производитель: %s\n", glasses.country);
    printf("Число диоптрий: %.2f\n", glasses.diopters);
    printf("Материал: %s\n", glasses.material);
    printf("Цена: %.2f\n", glasses.price);
    return 0;
}