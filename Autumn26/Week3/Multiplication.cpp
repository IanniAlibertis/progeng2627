#include <iostream>

int main(){
    int n,i,j,x;
    std::cin >> n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            x=i*j;
            std::cout << "  " << x << "  ";
        }
        std::cout << std::endl;
    }

}