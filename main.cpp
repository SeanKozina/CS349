#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}



void readCharFile(string &filePath) {
    ifstream in(filePath);

    char c;
    std::pair<string,string> pair;
    vector<std::pair<string , string>> vectorOfXY;

    if(in.is_open()) {
        while(in.good()) {
            in.get(c);
            if(c != ' ') {
                if (c == '\n'){
                    vectorOfXY.push_back(pair);
                }
                pair.first = c;         //somehow append all of X to the first
                                        //part of the pair and the second int on
                                        // that line to the second part of the pair
            }
        }
    }

    if(!in.eof() && in.fail())
        cout << "error reading " << filePath << endl;

    in.close();
}


void intsCantBeEqual(std::pair<string,string> pair, fstream outputfile){
    outputfile << pair.first << "is not equal to " << pair.second
    << "in any base 2...36" << endl;
}



vector<int> convert(std::pair<string,string> pair){


    //return a vector of size 36 with each bases of the current pair
}

int compare(vector<int>,vector<int>){


    //return the lowest number and its base
}


