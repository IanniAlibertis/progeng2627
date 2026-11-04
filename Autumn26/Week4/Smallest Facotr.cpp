#include <iostream>


int smallest_factor(int n){
     for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){ 

            return cf;   
        }       
    }
    return n;
}

int main(){
    int number;
    std::cin >> number ;
    std::cout << "Smallest Factor is " << smallest_factor(number);
}