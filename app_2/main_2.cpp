#include <iostream>
#include <fstream>
#include "../code_2/fundamentals_2.hpp"
#include <sstream>
#include <string>
//#include "../code_2/fundamentals_2.cpp"

using namespace std;

int main(int argc, char* argv[]) {
    // TODO
    //read values
    
    string inFile=argv[0];
    string outFile=argv[1];
        
    //string fs=argv[2];
   // string fa=argv[3];
        std::string fs(argv[2]);
float min=std::stof(fs);
        std::string fa(argv[3]);
float max=std::stof(fa);
    
    //file stream stuff
    ifstream in_file;
in_file.open(inFile);
    
    //
    emissionInfo co2_emissions[6];
    string name="fake country";
    double in2015=1;
    double in2016=1;
    double in2017=1;
    double in2018=1;
    double in2019=1;
    int i=0;//holds the index value
    int indexSize=0;
    int w=0;//holds the value to count and make sure we have a whole line read
    //string line="this isn't a line, something has gone wrong";
    string word="word";
    
 // getline(in_file, word);
// reads entire file
    //most definately not copied directly out of the lecture slides

    
    while(getline(in_file, word, ',')){
        
        if(w==0){//the name collum has been called
         name=word;
            w++;
        }
        else if(w==1){//the 2015 collum is being read
       std::string fs(word);
in2015=std::stof(fs);   
            
            w++;
        }
       else if(w==2){//the 2016
         std::string fs(word);
in2016=std::stof(fs);   
           
            w++;
        }
        else if(w==3){//the 2017
        std::string fs(word);
in2017=std::stof(fs);    
            
            w++;
        }
        else if(w==4){//the 2018
         std::string fs(word);
in2018=std::stof(fs);   
            
            w++;
        }
        else if(w==5){//the 2019 collum is being read, and is the last collum, so we can now add it to the struct
         std::string fs(word);
in2019=std::stof(fs);   
            
            insertEmissionInfo(co2_emissions, name, in2015, in2016, in2017, in2018, in2019, i);
    i++;
            w=0;
            indexSize++;
        }
        else{//something has gone terribly wrong
            
        }
    
        
// Process line
}
    
        //welp, now all the stuff should be in the struct array
    //now time to get all the writting to the new out file
        
       ofstream out_file;
out_file.open(outFile); 
       string code="";
    
    for(i=0;i<indexSize;i++){
        
        if(co2_emissions[i].average>min){
    
            if(co2_emissions[i].average<max){
                //the nested if to print out the values to the outfile
                code=calcEmissionZone(co2_emissions[i].average);
                out_file << co2_emissions[i].countryName <<", "<<co2_emissions[i].average<<", "<<code<<"\n";
            }
        }
    
    }
    
    
    in_file.close();
    out_file.close();
    return 0;
}