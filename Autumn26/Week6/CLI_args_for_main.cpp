#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
// argc is the number of command line arguments
// argv is an array of C-style strings
// we'll see what this means more in detail later on

int main(int argc, char* argv[]){
    std::ifstream infile;
    std::string file;
    std::stringstream file_path;
    std::vector<std::string> v;
    std::string tmp;

    file =argv[1];
    file_path << "C:/Users/ialib/Documents/Autumn26/Week6/" << file;
    infile.open(file_path.str());

    while(infile >> tmp){
        v.push_back(tmp); 
    }

    infile.close();

    for(int i=0;i <v.size();i++){
        std::cout << v[i];

    }


}