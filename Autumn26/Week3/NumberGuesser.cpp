#include <iostream>

int main(){
    int max, min, guess;
    bool found = 0;
    std::string n;

    std::cout << "Enter Maximum of range followed by minimum of range" << std::endl;
    std::cin >> max;
    std::cin >> min;

    while(found == 0){

        guess = (max + min) / 2;

        std::cout << "(enter h for higher, l for lower, yes for correct) is your number " << guess << std::endl;
        std::cin >> n;

        if(n == "h" or n == "H"){
            min = guess;
        }

        else if(n == "l" or n == "L"){
            max = guess;
        }

        else if(n == "yes"){
            found = 1;
        }
    }
}