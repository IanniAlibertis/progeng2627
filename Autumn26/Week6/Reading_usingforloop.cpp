#include <iostream>
#include <fstream>

int main(){
    int sum=0;
    std::ifstream infile; 
    infile.open("Text.txt");

    if(infile.is_open()){ 
        int tmp;

        // (infile >> tmp) at the same time performs the reading attempt
        // and returns a value that is evaluated as a boolean


        while(infile >> tmp){
            
            sum+=tmp;
        }
        std::cout << sum << std::endl;          
        infile.close(); 

    }
    else{
        std::cout << "error opening file" << std::endl;
    }
}