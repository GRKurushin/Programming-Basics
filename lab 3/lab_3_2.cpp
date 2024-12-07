#include <iostream>

using namespace std;

// Написать  программу,  которая  по  введенному  коду  страны,  выводи  ее название. 
// Например, 40 – Германия, 46 – Россия и т.п. (найти самостоятельно).

int main() {
    setlocale(LC_ALL, "Russian");
    int code;

    cout << "Введите код страны: ";
    cin >> code;

    switch (code) {
        case 40:
            cout << "Германия" << endl;
            break;
        case 46:
            cout << "Россия" << endl;
            break;
        case 1:
            cout << "США" << endl;
            break;
        case 33:
            cout << "Франция" << endl;
            break;
        case 44:
            cout << "Великобритания" << endl;
            break;
        case 81:
            cout << "Япония" << endl;
            break;
        default:
            cout << "Неизвестный код страны" << endl;
            break;
    }
    return 0;
}