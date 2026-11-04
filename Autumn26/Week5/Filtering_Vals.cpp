#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int n=0,x=0,t=0;
    std::cout<< "Enter a number"<< std::endl;
    std::cin>>n;
    
    for(int i=0; i <n; i++){
        std::cout<< "Enter a number"<< std::endl;
        std::cin>>x;
        v.push_back(x);
    }
    
    std::cout<< "Enter a number to see output of what is less than that number"<< std::endl;
    std::cin>>t;

    for(int i=0; i <n; i++){
        if(v.at(i)<t){
            std::cout << v.at(i)<<std::endl;
        }
    }    

}