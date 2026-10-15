#include <iostream>

int main(){
    std::string n;

    while(n != "STOP"){ // != means different or not equal
        std::cin >> n;
        std::cout << n << std::endl;
    }
}