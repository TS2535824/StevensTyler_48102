/*
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on November 8, 2016
 * Purpose:  Calculates an objects kinetic energy
 */
 
//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;
 
//User Libraries Here
 
//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
 
//Function Prototypes Here
float kineticEnergy(float,float);
 
//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    float mass,//mass of an object in kilograms
          velo;//velocity of an object in meters per second
   
    //Input values
    cout<<"Enter the mass of your object (in kilograms)";
    cin>>mass;
    cout<<"Enter the objects velocity (in meters per second)";
    cin>>velo;
    
    //Call function to calculate kinetic energy
    kineticEnergy(mass,velo);
    
    //Set the numeric output formatting
    cout<<fixed<<setprecision(2);
    
    //Display Output
    cout<<"Mass:            "<<mass<<" kgs\n";
    cout<<"Velocity:        "<<velo<<" mps\n";
    cout<<"Kinetic Energy:  "<<kineticEnergy(mass,velo)<<" joules";
 
    //Exit
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Calculate Kinetic Energy   ***********************
//Purpose:  Find an objects kinetic energy
//Inputs:   Inputs to the function here -> Description, Range, Units
//  m and v -> mass and velocity of an object
//Output:   Outputs to the function here -> Description, Range, Units
//  kE ->  Kinetic energy
//******************************************************************************
float kineticEnergy(float m, float v){
    
    //Declaration of Variables
    float kE;//Kinetic energy
    
    //Process/Calculations Here
    kE=0.5*m*(v*v);//Kinetic energy formula
    
    return kE;//Passes the kinetic energy to main
   
}