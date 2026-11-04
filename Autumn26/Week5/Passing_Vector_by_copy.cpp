#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    int i=0, x=0;
    std::cout <<"How Many numbers would you like to add?" << std::endl;
    std::cin >> i;

    while(v.size()<i){
        std::cout <<"Enter a number" << std::endl;
        std::cin >> x;
        v.push_back(x);

    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}