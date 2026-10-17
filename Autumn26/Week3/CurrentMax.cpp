#include <iostream>

int main(){
    int max=0, n=1,min=0;
    for( ; n != 0; ){
        std::cout << "Enter a number" << std::endl;
        std::cin >> n;
        
        if (n > max){
            max=n;
            std::cout << "Max number is " << max << std::endl;
            std::cout << "Min number is " << min << std::endl;
            
        }
        else if(n < min){
            min= n;
            std::cout << "Max number is " << max << std::endl;
            std::cout << "Min number is " << min << std::endl;
        }
        else{
            std::cout << "Max number is " << max << std::endl;
            std::cout << "Min number is " << min << std::endl;
        }
    }
}