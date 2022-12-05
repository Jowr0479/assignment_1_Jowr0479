//#include "fundamentals_1.hpp"

//int addToArrayAsc(float* sortedArray[], int numElements, float newValue) {
int addToArrayAsc(float sortedArray[], int numElements, float newValue){  
// TODO

   if(numElements<100){
    sortedArray[numElements]=newValue;
       numElements++;
   }
    float arrIndex=0;
    for(int i=0; i<numElements;i++){
        for(int w=i+1; w< numElements;w++){
            if(sortedArray[i]>sortedArray[w]){
             arrIndex= sortedArray[i];
                sortedArray[i]= sortedArray[w];
                sortedArray[w]=arrIndex;
            }
        }
        
    }
    return numElements;
}

