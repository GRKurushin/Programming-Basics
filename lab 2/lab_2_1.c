#include <stdio.h>
#include <math.h>

// Даны четыре точки на плоскости: 𝐴(𝑥1, 𝑦1 ), 𝐵(𝑥2, 𝑦2 ), 𝐶(𝑥3, 𝑦3 ), 𝐷(𝑥4, 𝑦4 ). Вычислить 
// площадь четырехугольника, образованного этими точками.

int main() {
    int x1,x2,x3,x4,y1,y2,y3,y4;
    printf("Enter the coordinates of the point A: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of the point B: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the coordinates of the point C: ");
    scanf("%d %d", &x3, &y3);
    printf("Enter the coordinates of the point D: ");
    scanf("%d %d", &x4, &y4);
    // Вычислим длину диагоналей и синус угла между диагоналями
    float d1, d2, cos, sin;
    d1 = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));
    d2 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    cos = ((x4-x2)*(x3-x1) + (y4-y2)*(y3-y1)) / (sqrt(pow(x4-x2,2) + pow(y4-y2,2)) * sqrt(pow(x3-x1,2) + pow(y3-y1,2)));
    sin = sqrt(1 - pow(cos, 2));
    // Вычислим площадь произвольного четырехугольника
    float S = (d1 * d2 * sin) / 2;
    printf("Area of ​​a quadrilateral: %f", S);
    return 0;
}