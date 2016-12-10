/*
   File:   main
   Author: Tyler Stevens
   Created on November 8, 2016
   Purpose:  Calculates distance an object has fallen in a certain 
 *           amount of second
 */
 
//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>     //Input/Output manipulation
using namespace std;  //Name-space used in the System Library
 
//User Libraries
 
//Global Constants

//Function prototypes
int celsius(int);
 
//Execution Begins Here!
int main() {
    //Declaration of Variables
    int fah;//Fahrenheit
    
    //Input Values
    cout<<"Enter the temperature in Fahrenheit ";
    cin>>fah;
   
    //Display Table
    cout<<"Fahrenheit\tCelsius\n";
    cout<<"-----------------------\n";
   
    //Display Output
     for(int i=1;i<=fah;i++){
        cout<<i<<"\t\t"<<celsius(i)<<endl;
    }
    
    //Exit Program
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Convert Fahrenheit to Celsius   ******************
//Purpose:  Convert Fahrenheit to Celsius
//Inputs:   Inputs to the function here -> Description, Range, Units
//  f -> Fahrenheit
//Output:   Outputs to the function here -> Description, Range, Units
//******************************************************************************
int celsius(int f){
    
    return 0.55555555*(f-32);
}