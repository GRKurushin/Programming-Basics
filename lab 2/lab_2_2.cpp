#include <iostream>
#include <cmath>

using namespace std;

// Даны координаты двух вершин квадрата: 𝐴(𝑥1, 𝑦1 )  и 𝐶(𝑥2, 𝑦2 ). Найти площадь и 
// периметр квадрата.

int main() {
    setlocale(LC_ALL, "Russian");
    int x1,x2,y1,y2;
    cout << "Введите координаты точки A: ";
    cin >> x1 >> y1;
    cout << "Введите координаты точки C: ";
    cin >> x2 >> y2;
    float AC, sqaure, perimeter;
    AC = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    sqaure = pow(AC, 2);
    perimeter = 4*AC;
    cout << "Площадь квадрата: " << sqaure << endl << "Периметр квадрата: " << perimeter << endl;
    return 0;
}