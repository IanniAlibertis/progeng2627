#include <iostream>

// function myswap to be used 
// in sort_two_numbers below
// must be included here (beforehand)
void myswap(double& n1, double& n2){

    double tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;

}

void sort_three_numbers(double& s1, double& s2, double& s3){
    while(!(s1 <= s2) || !(s2 <= s3)){
        if(s1>s2){
            myswap(s1,s2);
        }
        if(s2>s3){
            myswap(s2,s3);
        }
        if(s1>s2){
            myswap(s1,s2);
        }
        else{
            s1=s1;
            s2=s2;
            s3=s3;
        }
    }

}

int main(){
    double n1, n2, n3;
    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n1 >> n2>> n3;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
}

