#include <iostream>

void rectangle(double x, double y, double& peri, double& A) {
    peri = 2 * (x + y);
    A = x * y;
}

int main() {
    double x, y;
    double peri = 0.0;
    double A = 0.0;

    std::cout << "Please enter the lengths of two adjacent sides of the rectangle: " << std::endl;
    std::cin >> x >> y;

    rectangle(x, y, peri, A);

    std::cout << "Perimeter: " << peri << std::endl;
    std::cout << "Area: " << A << std::endl;

    return 0;
}
