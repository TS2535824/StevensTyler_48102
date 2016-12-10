/*  
    File:   main 
    Author: Tyler Stevens 
    Created on , 2016
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
int main(int argc, char** argv) { 
    //constant speeds
    int start=60,//starting speed
        end=130,//ending speed
        incremt=10;//speed increment
    float cnvr = 0.6214;//conversion factor
    
    //variables
    int kph;
    float mph;
    
    //set the numeric output formatting
    cout<<fixed<<showpoint<<setprecision(1);
    
    //display the table heading
    cout<<"KPH\tMPH\n";
    cout<<"--------------\n";
    
    //display speeds
    for(kph=start;kph<=end;kph+=incremt)
    {
        //calculate mph
        mph=kph*cnvr;
        
        //display mph and kph
        cout<<mph<<"\t"<<kph<<endl;
        
        
    }
    
    
    
     
    //Process values -> Map inputs to Outputs 
      
    //Display Output 
 
 
     //Exit Program 
     return 0; 
 } 


