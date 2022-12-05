#include <iostream>
#include <fstream>
#include "../code_1/fundamentals_1.hpp"
//#include "../code_1/fundamentals_1.cpp"

using namespace std;
//this is some test comment
int main(int argc, char* argv[]) {
    // TODO
    
    ifstream fileInput;
    string line;
    int numArray=0;
    float newArray=0;
    string inFile= argv[1];
   // in_file.close();
    if(fileInput.fail()){
     cout<<"File could not open."<<endl;   
        return 0;
    }
    
    
    float arrSize[100];
    
    cout<<""<<endl;
    while(getline(fileInput,line)){
        newArray=stof(line);
        newArray=addToArrayAsc(arrSize, numArray, newArray);
            for(int x=0;x<numArray;x++){
                cout<<arrSize[x];
                    if(x<numArray-1){
                     cout<<",";   
                    }
            }
        cout<<"\n";
    }
    cout<<endl;
    return 0;
    
}