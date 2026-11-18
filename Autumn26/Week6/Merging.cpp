#include <iostream>
#include <vector>

void merge_vectors_int(std::vector<int>& V1,std::vector<int>& V2, std::vector<int>& Vout){
    int V1_counter=0,V2_counter=0;

    while (V1_counter < V1.size() && V2_counter < V2.size()) {
        if (V1[V1_counter] <= V2[V2_counter]) { 
            Vout.push_back(V1[V1_counter]);
            V1_counter++;
        }     
        else {
            Vout.push_back(V2[V2_counter]);
            V2_counter++;
        }
    }    
    while (V1_counter < V1.size()) {
        Vout.push_back(V1[V1_counter]);
        V1_counter++;
    }


    while (V2_counter < V2.size()) {
        Vout.push_back(V2[V2_counter]);
        V2_counter++;
    }    
}


int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}