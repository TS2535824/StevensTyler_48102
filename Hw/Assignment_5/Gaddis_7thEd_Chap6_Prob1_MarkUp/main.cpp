/*
   File:   main
   Author: Tyler Stevens
   Created on November 2, 2016
   Purpose:  Calculates retail price by users inputs of an items wholesale cost
 *           and its mark up cost.
 */
 
//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>     //Input/Output manipulation
using namespace std;  //Name-space used in the System Library
 
//User Libraries
 
//Global Constants
 
//Function prototypes
float calculateRetail(float , float );
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float whole,//Whole sale cost
          markUp; //Mark up percentage
            
    //Input values
    cout<<"Please enter your items wholesale cost ";
    cin>>whole;
    cout<<"Please enter the markup percentage ";
    cin>>markUp;
    
    //Input validation. program should not except negative values
    if (whole<0 || markUp<0){
        cout<<"invalid! Values must be positive to continue. \n";//error message
        //Input values
        cout<<"Please enter your items whole sale cost";
        cin>>whole;
        cout<<"Please enter a positive mark up percentage ";
        cin>>markUp;}
    
    //set the numeric output formatting
    cout<<fixed<<showpoint<<setprecision(2);
    
    //Display output
    cout<<"Wholesale price:       "<<whole<<"$"<<endl;
    cout<<"Markup percentage:     "<<markUp<<"%"<<endl;
    //Calls function and displays result
    cout<<"Retail price:          "<<calculateRetail(whole, markUp)<<"$"<<endl;
   
    //Exit Program
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Get retail price   *******************************
//Purpose:  Find retail price from whole sale item
//Inputs:   Inputs to the function here -> Description, Range, Units
//  x and y -> wholesale and retail percentage
//Output:   Outputs to the function here -> Description, Range, Units
//  retail ->  added to whole sale
//******************************************************************************
float calculateRetail(float x, float y){
    
   //Formula for retail cost. Process values 
   float retail=(x*y/100)+x;
   return retail;//exits at retail value
}