#include <iostream>
#include <iomanip>

using namespace std;

// Составьте программу, которая печатает таблицу перевода расстояний из дюймов в 
// сантиметры (1 дюйм = 2,5 см) для значений длин от 1 до 20 дюймов.

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Таблица перевода дюйм в сантиметры для значений от 1 до 20 дюймов: " << endl;
    for (int i = 1; i <= 20; i++) {
        cout << setw(2) << i << " дюйм = " << setw(4) << right << i * 2.5 << " см" << endl;
    }
    return 0;
}