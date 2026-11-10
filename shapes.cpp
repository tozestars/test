#include <cmath>
#include "shapes.h"

const double PI = 3.14159265358979;

// умножаем а на в

double rectArea(double a, double b) {
    return a * b;
}
double circleArea(double r) {
    return PI * r * r;
}

//проверка
bool isTriangle(double a, double b, double c) {
    return a+b > c && a + c > b && b + c > a;
}

//Площадь по формуле Герона. Если треугольник не существует, возразает -1
double triangleArea(double a, double b, double c) {
    if (!isTriangle(a, b, c)) {
        return 0;
    }
    double p = (a + b + c) / 2; //полупериметр
    return std::sqrt(p*(p-a) * (p - b) * (p - c));
}