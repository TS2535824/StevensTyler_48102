/*  
    File:   main 
    Author: Tyler Stevens 
    Created on September 20, 2016
    Purpose: Calculates the average rainfall  
  */ 
 
 
 //System Libraries 
#include <iostream>   //Input/Output objects 
#include <iomanip>    //Input/Output manipulation
#include <string>     //Includes string objects
using namespace std;  //Name-space used in the System Library 
 
 //User Libraries 

 //Global Constants 

 //Function prototypes 

 //Execution Begins Here! 
int main(int argc, char** argv) { 
    //Declaration of Variables 
    string m1,m2,m3;        //Month 1,2, and 3
    float r1,r2,r3, avg;    //Rain fall per month and average
    
    //Input values 
    cout<<"This Program Calculates Average Rain Fall! \n"
          "Please enter Three different Months of the years \n";
    cin>>m1;
    cin>>m2;
    cin>>m3;
    cout<<"How many Inches of rain fell in "<<m1<<"? \n";
    cin>>r1;
    cout<<"How many Inches of rain fell in "<<m2<<"? \n";
    cin>>r2;
    cout<<"Finally, how many Inches of rain fell in "<<m3<<"? \n";
    cin>>r3;
      
   //Process values -> Map inputs to Outputs 
    avg=(r1+r2+r3)/3;       //Calculates average rain from three months
    
    //Display Output 
    cout<<"The Average rainfall for "<<m1<<", "<<m2<<", and "<<m3<<" is "
        <<setprecision(2)<<fixed<<avg<<" inches."<<endl;
 
     //Exit Program 
     return 0; 
 } 


