/* 
   File:   main
   Author: Tyler Stevens
   Created on October 12, 2016
   Purpose:  Calculate country club membership fee that rises 4% each year.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants


//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float cost,fee=2500;
    
     //Input values 
    for(int year=1;year<=6;year++){
        cost=(fee*0.04);
        fee+=cost;
        
        cout<<fee<<endl;
        
        
        
    }
    
    //Process values -> Map inputs to Outputs
    
    //Display Output

    //Exit Program
    return 0;
}