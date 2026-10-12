#include <iostream>

int main(){
    int n,rem;

    std::cout << "Please enter a number" << std::endl;
    std::cin >> n;
    
    rem=n % 2;

    std::cout << "If output is 1,number is odd but if output is 0, number is even" << std::endl << "Output " << rem << std::endl;
    

}