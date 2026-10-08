#include <iostream>
#include <string>

main(){
    std::string Name;
    std::string Surname;
    std::cout << "What is your First Name?" << std::endl;
    std::cin >> Name;
    std::cout << "What is your surname?" << std::endl;
    std::cin >> Surname;
    std::cout << "Hello there, " <<Name << " " << Surname << std::endl;
}