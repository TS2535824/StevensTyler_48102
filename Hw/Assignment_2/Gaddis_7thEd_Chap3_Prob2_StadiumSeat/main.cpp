/*  
    File:   main 
    Author: Tyler Stevens 
    Created on September 26, 2016
    Purpose:   
  */ 
 
 
 //System Libraries 
#include <iostream>   //Input/Output objects 
#include <iomanip>
using namespace std;  //Name-space used in the System Library 
 
 
//User Libraries 

 
//Global Constants 

 
//Function prototypes 

 
//Execution Begins Here! 
int main(int argc, char** argv) 
{ 
    //Declaration of Variables 
    int classA,classB,classC,       
    priceA=15, priceB=12, priceC=9,
    income; 
    
    //Input values 
    cout<<"How many tickets of each class of seats were sold? \n"; 
    cout<<"Class A: "; 
    cin>>classA; 
    cout<<"Class B: "; 
    cin>>classB; 
    cout<<"Class C: "; 
    cin>>classC;

    //Process values -> Map inputs to Outputs 
    income=(classA*priceA)+(classB*priceB)+(classC*priceC);
    
    //Display Output 
 cout<<"The amount of income generated from ticket sales is $" 
         <<setprecision(2)<<fixed<<static_cast<float>(income)<<endl; 


 
     //Exit Program 
     return 0; 
 } 

