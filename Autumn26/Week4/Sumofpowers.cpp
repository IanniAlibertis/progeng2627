#include <iostream>


double mypow(double base, int exp){
    int i=0;
    double result=1;
    if(exp > 0){
        for( i=0; i <exp; i++){
        result*= base;
        }
    }    
    else if(exp < 0){
        for( i=0; i > exp; i--){
        result/= base;
        }
    }
    


    return result;
}

int main(){
    double x=0, sum=0;
    int n=0;
    std::cout << "enter the base then the exponent"<< std::endl;
    std::cin >> x;
    std::cin >> n;

    if (n > 0) {
        while(n > -1){
            sum+= mypow(x,n);
            n-=1;
        }
    } 
    else {
        while(n <= 0){
            sum+= mypow(x,n);
            n+=1; 
        }
    }
    std::cout << "Sum is "<< sum;
}