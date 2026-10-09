#include <iostream>

int main(){
    float n1, n2, product;
    std::cout << "What is the first number?"<<std::endl;
    std::cin >> n1;
    std::cout << "What is the second number?"<<std::endl;
    std::cin >> n2;

    product = n1*n2;

    std::cout << n1 << " x "  << n2 << " = " << product;
}