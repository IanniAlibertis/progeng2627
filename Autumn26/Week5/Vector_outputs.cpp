#include <iostream>
#include <vector>


void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    int i=0,n=0;
    for(i=0;i<vin1.size();i++){
        vout.push_back(vin1[i]);
    }
    for(n=0;n<vin2.size();n++){
        vout.push_back(vin2[n]);
    }
}

int main(){
 
    std::vector<int> v1 = {3, 5, -1, 5};
    std::vector<int> v2 = {7, 2, -9, 8};
    std::vector<int> vout;
    append_vectors(v1,v2,vout);
    for(int x = 0; x < vout.size(); x++){
            std::cout << vout[x]<< std::endl;
        }

}