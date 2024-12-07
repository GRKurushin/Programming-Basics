#include <stdio.h>
#include <locale.h>

// Мастям игральных карт присвоены следующие порядковые номера: масти «пики» – 
// 1, «трефы» – 2, «бубны» – 3, «червы» – 4, а достоинству карт: «валету» – 11, «даме» 
// – 12, «королю» – 13, «тузу» – 14 (порядковые номера карт остальных достоинств 
// соответствуют их названиям). По заданным номерам масти и номеру достоинства 
// карты определить полное название (масть и достоинство) соответствующей карты в 
// виде «Дама пик», «Шестерка бубен» и т.д.

int main() {
    setlocale(LC_ALL, "Rus");
    int suit, value;

    do {
        printf("Enter the suit of the card (1-4): ");
        scanf("%d", &suit);
    } while(1 > suit || suit > 4);

    do {
        printf("Enter the value of the card (1-14): ");
        scanf("%d", &value);
    } while(1 > value || value > 14);

    switch(value) {
        case 1:
            printf("Однёрка ");
            break;
        case 2:
            printf("Двойка ");
            break;
        case 3:
            printf("Тройка ");
            break;
        case 4:
            printf("Четвёрка ");
            break;
        case 5:
            printf("Пятёрка ");
            break;
        case 6:
            printf("Шестёрка ");
            break;
        case 7:
            printf("Семёрка ");
            break;
        case 8:
            printf("Восьмёрка ");
            break;
        case 9:
            printf("Девятка ");
            break;
        case 10:
            printf("Десятка ");
            break;
        case 11:
            printf("Валет ");
            break;
        case 12:
            printf("Дама ");
            break;
        case 13:
            printf("Король ");
            break;
        case 14:
            printf("Туз ");
            break;
        default:
            printf("Число не из набора 1-14\n");
            break;
    }
    switch(suit) {
        case 1:
            printf("пики\n");
            break;
        case 2:
            printf("трефы\n");
            break;
        case 3:
            printf("бубны\n");
            break;
        case 4:
            printf("червы\n");
            break;
        default:
            printf("Число не из набора 1-4\n");
            break;
    }
    return 0;
}