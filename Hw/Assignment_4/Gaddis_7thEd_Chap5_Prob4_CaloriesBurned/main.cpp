/* 
   File:   main
   Author: Tyler Stevens
   Created on October 12, 2016
   Purpose: Determines how may calories are burned on a particular treadmill for a certain amount of minutes
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
    float burn;//calories burned
    int loop=1;//incrementing 
    //Input values
    for(float min=1;min<=30;min++){
        loop++;
        burn=min*3.9;
        while(loop>5){
            cout<<"You have burned "<<burn<<" calories in "<<min<<" minutes"<<endl;
            loop=1;
        }
    }
    
    //Process values -> Map inputs to Outputs
    
    //Display Output

    //Exit Program
    return 0;
}