#include <iostream>
#include <cmath>

int main(){
    double a, b, c , perimeter, semi, area;
    
    std::cout << "Enter three side lengths: ";
    std::cin >> a >> b >> c;
    perimeter= a+b+c;
    semi = perimeter/2;
    area= std::sqrt((semi)*(semi-a)*(semi-b)*(semi-c));
    // Check whether the sides form a valid triangle
    if( (a+b > c) && (a+c > b) && (b+c > a)){
    
        if(a==b && b==c){
            std::cout<< "Triangle is equilateral" << std::endl;
            std::cout<< "Perimeter is " << perimeter << std::endl;
            std::cout<<" Area is " << area <<std::endl;
        }

        else if ((a == b || a == c || b == c) && !(a == b && b == c)) {
            std::cout<< "Triangle is isosceles" << std::endl;
            std::cout<< "Perimeter is " << perimeter << std::endl;
            std::cout<<" Area is " << area <<std::endl;
        }
        else {
            std::cout<< "Triangle is scalene" << std::endl;
            std::cout<< "Perimeter is " << perimeter << std::endl;
            std::cout<<" Area is " << area <<std::endl;
        }
    }       


    else {
        std::cout << "triangle is invalid" << std::endl;
    }
    // Otherwise:
    //   Display a message saying the triangle is invalid
}