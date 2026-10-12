#include <iostream>
#include <string>

int main(){
    int x1, y1, x2, y2;
    std::string piece;
    std::cout << "Enter piece: " << std::endl;
    std::cin >> piece;
    std::cout << "Enter initial x-coord: " << std::endl;
    std::cin >> x1;
    std::cout << "Enter initial y-coord: " << std::endl;
    std::cin >> y1;
    std::cout << "Enter final x-coord: " << std::endl;
    std::cin >> x2;
    std::cout << "Enter final y-coord: " << std::endl;
    std::cin >> y2;

    if ((x1 >= 1 && x1 <= 8) && (x2 >= 1 && x2 <= 8) && (y1 >= 1 && y1 <= 8) && (y2 >= 1 && y2 <= 8)) {
    //Knight movement
        if(piece == "Knight"|| piece == "knight"){  
            
                if((abs(x2-x1)==1 && abs(y2-y1)==2)|| (abs(x2 - x1) == 2 && abs(y2 - y1) == 1)){
                    std::cout<< "Valid Move!"<< std::endl;
                }
                else{
                    std::cout<< "Not Valid Move!"<< std::endl;
                }
            }

            
            
        if(piece == "Bishop"|| piece == "bishop"){  
                if(abs(x2-x1)==abs(y2-y1)){
                    std::cout<< "Valid Move!"<< std::endl;
                }
                else{
                    std::cout<< "Not Valid Move!"<< std::endl;
                }
            }

                
            
            
        if(piece == "Rook"|| piece == "rook"){  
            
                if((x2==x1 && y2!=y1)||(x2!=x1 && y2==y1)){
                    std::cout<< "Valid Move!"<< std::endl;
                }
                else{
                    std::cout<< "Not Valid Move!"<< std::endl;
                }
            }


        if(piece == "King"|| piece == "king"){  
            
                if((abs(x2-x1)<=1 && abs(y2-y1)<=1) && (x2!=x1 || y2!=y1)){
                    std::cout<< "Valid Move!"<< std::endl;
                }
                else{
                    std::cout<< "Not Valid Move!"<< std::endl;
                }
            }


        if(piece == "Queen"|| piece == "queen"){  
            
                if((abs(x2-x1)==abs(y2-y1) && x2!=x1) || 
                (x2==x1 && y2!=y1)||(x2!=x1 && y2==y1)){
                    std::cout<< "Valid Move!"<< std::endl;
                }
                else{
                    std::cout<< "Not Valid Move!"<< std::endl;
                }
            }

    }

            
    else{   
            std::cout<< "Not Valid Move!"<< std::endl;
                
        }        
}