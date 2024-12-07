#include <iostream>
#include <cmath>

using namespace std;

// Определить объём и площадь боковой поверхности цилиндра с заданными радиусом 
// основания R и высотой H.

float square(float R, float H) {
    return 2 * M_PI * R * H;
}

float volume(float R, float H) {
    return M_PI * pow(R, 2) * H;
}

int main() {
    setlocale(LC_ALL, "Russian");
    float R, H;
    cout << "Введите радиус основания цилиндра R и высоту H: ";
    cin >> R >> H;
    cout << "Площадь боковой поверхности цилиндра: " << square(R, H) << endl;
    cout << "Объём цилиндра: " << volume(R, H) << endl;
    return 0;
}