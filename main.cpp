#include <iostream>
#include <iomanip>
#include "shapes.h"
using namespace std;

int main() {
    cout << fixed << setprecision(2);
    cout << "Rectangle 3 x 4: " << rectArea(3,4) << "\n";
    cout << "Circle r = 2: " << circleArea(2) << "\n";
    cout << "Triangle 3, 4, 5: " << triangleArea(3, 4, 5) << "\n";
    cout << "Trisngle 1, 2, 10: " << triangleArea(1, 2, 10) << "\n";
}