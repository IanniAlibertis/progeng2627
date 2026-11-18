#include <iostream>
#include <vector>


void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for (int i=0;i< vin.size();i++){
        if(vin[i]<t){
            vout.push_back(vin[i]);
        }  
    }
}
int main(){
    std::vector<double> v1 = {3, 5, -1, 5, 7, 2, -9, 8};
    double t=4;
    std::vector<double> vout;
    filter_v(v1,t,vout);
    for(int x = 0; x < vout.size(); x++){
            std::cout << vout[x]<< std::endl;
        }

}