#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


void readCharFile(string filePath, vector<std::pair<string , string>> &vectorOfXY) {
    ifstream in(filePath);

    char c;
    std::pair<string,string> pair;
    //vector<std::pair<string , string>> vectorOfXY;

    if(in.is_open()) {
        while (!in.eof()){

            in.get(c);
            string first_element, second_element;
            bool skip = false;
            while(c != '\n'){
                while (c == ' '){
                    
                    in.get(c);
                    
                    if (c != ' '){
                        skip = true;
                    }
                }

                cout << c << endl;
                
                if (skip == false){
                    first_element += c;
                } else {
                    second_element += c;
                }

                in.get(c);
                

            }

            cout << first_element << endl << second_element << endl;

            pair.first = first_element;
            pair.second = second_element;
            
            vectorOfXY.push_back(pair);

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



int main() {
    std::cout << "Hello, World!" << std::endl;

    
    vector<std::pair<string , string>> vec;

    readCharFile("test.txt", vec);


    return 0;
}


