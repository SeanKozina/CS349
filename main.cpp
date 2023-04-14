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
            if(c != ' '){
                pair.first = c;
                vectorOfXY.push_back(pair);
            }
        }
    }

    if(!in.eof() && in.fail())
        cout << "error reading " << filePath << endl;

    in.close();
}


void intsCantBeEqual(std::pair<string,string> pair, ifstream outputfile){
    outputfile << pair.first << "is not equal to " << pair.second
    << "in any base 2...36" << endl;
}