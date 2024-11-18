#include <iostream>

using namespace std;

/*В параллелограмме ABCD точка E делит диагональ BD пополам. Найти отношение 
площадей треугольников ABE и ECD.*/

int main() {
    setlocale(LC_ALL, "Russian");
    /*Будем запрашивать на ввод длину боковой стороны и высоты треугольников*/
    float AB, h1, h2;
    cout << "Введите длину AB и высоты h1, h2 треугольников:\n";
    cin >> AB >> h1 >> h2;
    float squareABE = 0.5 * AB * h1;
    float squareECD = 0.5 * AB * h2;
    cout << "Отношение площадей треугольников ABE и ECD: " << squareABE / squareECD << endl;
    return 0;
}