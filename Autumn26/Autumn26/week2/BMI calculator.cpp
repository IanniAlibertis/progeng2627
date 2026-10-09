#include <iostream>

int main(){
    double height, weight, BMI;

    std::cout << "How much do you weigh in KG?" <<std::endl;
    std::cin >> weight;
    std::cout << "How tall are you in metres" << std::endl;
    std::cin >> height;
    BMI= weight /(height*height);
    std::cout << "Your BMI is "<< BMI << std::endl;

}