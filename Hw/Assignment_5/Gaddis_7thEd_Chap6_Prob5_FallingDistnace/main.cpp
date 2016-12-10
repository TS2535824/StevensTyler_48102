/*
   File:   main
   Author: Tyler Stevens
   Created on November 2, 2016
   Purpose:  Calculates distance an object has fallen in a certain 
 *           amount of second
 */
 
//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>     //Input/Output manipulation
using namespace std;  //Name-space used in the System Library
 
//User Libraries
 
//Global Constants
const float GRAVITY=9.8;
 
//Function prototypes
float fallingDistance(int);
 
//Execution Begins Here!
int main() {
    //Declaration of Variables
    int seconds;
    
    cout<<"Enter amount of seconds your object fell";
    cin>>seconds;
    
    //Input validation
    while(seconds<0){
        cout<<"INVALID INPUT!PROGRAM WILL NOT EXCEPT NEGATIVE SECONDS \n";
        cout<<"Enter amount of seconds your object fell ";
        cin>>seconds;
    }
     for(int i=1;i<=seconds;i++){
        //Set the numeric output formatting
        cout<<fixed<<setprecision(2);
        //Display output
        cout<<"The distance traveled by the object in "
            <<setw(2)<<i<<" seconds: "<<setw(7)<<fallingDistance(i)<<" meters"<<endl;
    }
    
   
    //Exit Program
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Falling Distance Formula   ***********************
//Purpose:  Find distance an object has fallen
//Inputs:   Inputs to the function here -> Description, Range, Units
//  second -> is passed into falling distance formula
//Output:   Outputs to the function here -> Description, Range, Units
//  
//******************************************************************************
float fallingDistance(int second){
    return 0.5*GRAVITY*second*second;
}