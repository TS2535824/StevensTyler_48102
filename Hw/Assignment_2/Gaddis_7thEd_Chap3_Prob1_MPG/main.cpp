/*  
    File:   main 
    Author: Tyler Stevens 
    Created on September 21, 2016
    Purpose:   Calculate a how many mile per gallon user's car goes
  */ 
 
 
 //System Libraries 
#include <iostream>   //Input/Output objects 
#include <iomanip>    ////Input/Output manipulation
using namespace std;  //Name-space used in the System Library 
//User Libraries 

//Global Constants 

 //Function prototypes 

 //Execution Begins Here! 
int main(int argc, char** argv) { 
    //Declaration of Variables 
    int tank, mpt;              //cars tank and miles per tank
    float mpg;                  // Mile Per Gallon 
      
    //Input values 
    cout<<"[Miles Per Gallon Calculator] "
          "\nHow many gallons is your car's tank? \n";
    cin>>tank;
    cout<<"How many miles does your car go on one tank of gas? \n";
    cin>>mpt;
     
    //Process values -> Map inputs to Outputs 
    mpg=mpt/tank;               //calculates Miles Per Gallon
    //Display Output 
    cout<<"Your car gets "<<setprecision(2)<<fixed<<mpg<<
          " miles to the gallon \n";
 
     //Exit Program 
     return 0; 
 } 

