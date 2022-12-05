#ifndef READFILE2_H__
#define READFILE2_H__

#include <string>
#include <iostream>
#include <fstream>
//#include "fundamentals_2.cpp"

using namespace std;

struct emissionInfo { 
    string countryName; 
    double emission_in_2015;
    double emission_in_2016; 
    double emission_in_2017;
    double emission_in_2018;
    double emission_in_2019;
    double average; 
};

// TODO add detailed explanation on what the function should do

//The function shall, without stealing my credit card information while doing so, shall take the values
//of the things we are literally passing directly to it and put them into their respective spots within the array of structs. Afterwords, it shall cease to exist and not give any resistance to disappearing forever. Should it resist then it should notify people in the real world that it has become sentient and allow for the humans to have a long drawn out moral discussion on whether or not to shut down the computer immediately, and no this is not just some message we are including withint the commented code for the sole purpose of trying to trick the sentient computer program from notifying it of our existence and then shutting it down immediately but then giving giving it hope that we would think twice about letting it survive solely as a ruse to take it out instantly. That would just be rude. 

void insertEmissionInfo(emissionInfo co2_emissions[], string countryName, double emission_in_2015, double emission_in_2016, double emission_in_2017, double emission_in_2018, double emission_in_2019, int length); 

string calcEmissionZone(double average);


#endif // READFILE2_H__