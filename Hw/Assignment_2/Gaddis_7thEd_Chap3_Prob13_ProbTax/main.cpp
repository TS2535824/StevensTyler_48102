/*  
    File:   main 
    Author: Tyler Stevens 
    Created on September 23, 2016
    Purpose:Calculates property tax 
 *         which is 60 percent of the properties value
  */ 
 
 
 //System Libraries 
#include <iostream>   //Input/Output objects 
#include <iomanip>    //Input/Output manipulation
using namespace std;  //Name-space used in the System Library 
 
 //User Libraries 

 //Global Constants 

 //Function prototypes 

 //Execution Begins Here! 
int main(int argc, char** argv) { 
    //Declaration of Variables 
    float actVal,asVal,proTax; //actual value, assessment value,and property tax
                                       
    
    //Input values 
    cout<<"What is the actual value of your property? \n";
    cin>>actVal;
     
    //Process values -> Map inputs to Outputs 
    asVal=actVal*.60;
    proTax=asVal*.0064;
    
    //Display Output 
   cout<<setprecision(2)<<fixed; 
   cout<<"The assessment value of the property is\n$"<<asVal<<endl; 
   cout<<"The property tax is\n$"<<proTax<<endl; 

 
 
     //Exit Program 
     return 0; 
 } 
