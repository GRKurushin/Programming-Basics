#include <iostream>
#include <string>
#define SWEATERS 5

using namespace std;

// Определить  структуру  с  именем  Sweater  содержащую  следующие  поля:  фирма 
// производитель; из какого материала ; размер; цена.

struct Sweater {
    string brand;
    string material;
    string size;
    float price;
};

void sort_price(Sweater sweaters[], int n) {
    Sweater t;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (sweaters[j].price > sweaters[j + 1].price) {
                t = sweaters[j];
                sweaters[j] = sweaters[j + 1];
                sweaters[j + 1] = t;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    Sweater sweaters[SWEATERS] = {
        {"Nike", "Хлопок", "L", 7500},
        {"Adidas", "Шерсть", "M", 4000},
        {"Puma", "Полиэстер", "S", 3600},
        {"Reebok", "Хлопок", "XL", 6800},
        {"Lacoste", "Хлопок", "L", 15500}
    };
    cout << "До сортировки по цене:" << endl;
    for (int i = 0; i < SWEATERS; i++) {
        cout << sweaters[i].brand << ", " << sweaters[i].material << ", " << sweaters[i].size << ", " << sweaters[i].price << " рублей" << endl;
    }
    sort_price(sweaters, SWEATERS);
    cout << "\nПосле сортировки по цене:" << endl;
    for (int i = 0; i < SWEATERS; i++) {
        cout << sweaters[i].brand << ", " << sweaters[i].material << ", " << sweaters[i].size << ", " << sweaters[i].price << " рублей" << endl;
    }
    return 0;
}
