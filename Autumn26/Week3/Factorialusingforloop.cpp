#include <iostream>

int main(){
    int x=1,n, i=0;
    std::cout << "Enter number to find factorial of"<< std::endl;
    std::cin >> n;

    for(i=0; i<n; i++){
        x=x*(n-i);
    }
    std::cout << "factorial is "<< x << std::endl;
    
}