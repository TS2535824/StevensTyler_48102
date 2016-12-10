/*  
    File:   main 
    Author: Tyler Stevens 
    Created on , 2016
    Purpose:   Calculates average rainfall for a set amount of years
  */ 
 
 
 //System Libraries 
#include <iostream>   //Input/Output objects
#include <iomanip>   //Input/Output manipulation
using namespace std;  //Name-space used in the System Library 
 
 
//User Libraries 

 
//Global Constants 

 
//Function prototypes 

 
//Execution Begins Here! 
int main(int argc, char** argv) { 
    //Declaration of Variables 
    float inchR, totlR;
    int years,month;
    
    //Set up numeric output formatting
    cout<<fixed<<showpoint<<setprecision(2);
    
      
    //Input values 
    do {
        cout<<"Enter the number of years you wish to calculate average rain for ";
        cin>>years;
    }while (years<=0);
    
    //Process values 
    for(int year=1;year<=years;year++)
    {
        for(month=1;month<=12;month++)
        {
            //Input value for inches of rain
            do{
                cout<<"Enter inches of rain for month "<<month<<endl;
                cin>>inchR;
            }while (inchR<=-1);
            
            //Process values 
            totlR+=inchR;
        }
    }
      
    //Display Output 
    cout<<"Total number of months: "<<years*12<<endl;
    cout<<"Total inches of rainfall: "<<totlR<<endl;
    cout<<"Average rain fall(in inches): "<<totlR/(years*12)<<endl;
 
 
     //Exit Program 
     return 0; 
 } 


