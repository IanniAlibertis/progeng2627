#include <iostream>

int main(){
    int n,i;

    std::cout << "Enter a Number" << std::endl;
    std::cin >> n;

    for( ;n!=1; ){
        if( n %2 ==0){
            n= n/2;
            std::cout << n << std::endl;
            
        }
        else{
            n= (3*n)+1;
            std::cout << n << std::endl;
        }            
    }
}