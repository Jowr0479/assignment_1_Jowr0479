#include "fundamentals_2.hpp"

string calcEmissionZone(double avg) {
    // TODO
 string answer="hello, something has gone wrong";
    
    if(avg>9){
        answer="RED";
    }
     else{
        if(avg>4){
        answer="ORANGE";    
        }
         else{
          if(avg>2.4){
           answer="YELLOW";   
          }
             else{
             if(avg<2.5){
                 answer="GREEN";
             }
             
             }
             
         }
    }
    
    return answer;
}




void insertEmissionInfo(emissionInfo co2_emissions[], string countryName, double emission_in_2015, double emission_in_2016, double emission_in_2017, double emission_in_2018, double emission_in_2019, int i) {
    
    emissionInfo info;
    
    info.countryName=countryName;
    info.emission_in_2015=emission_in_2015;
    info.emission_in_2016=emission_in_2016;
    info.emission_in_2017=emission_in_2017;
    info.emission_in_2018=emission_in_2018;
    info.emission_in_2019=emission_in_2019;
    
    
    co2_emissions[i].countryName=countryName;
    co2_emissions[i].emission_in_2015=emission_in_2015;
    co2_emissions[i].emission_in_2016=emission_in_2016;
    co2_emissions[i].emission_in_2017=emission_in_2017;
    co2_emissions[i].emission_in_2018=emission_in_2018;
    co2_emissions[i].emission_in_2019=emission_in_2019;
    co2_emissions[i].average = (emission_in_2015 + emission_in_2016 + emission_in_2017 + emission_in_2018 + emission_in_2019) / 5 ;
    

    // TODO

    return;
}