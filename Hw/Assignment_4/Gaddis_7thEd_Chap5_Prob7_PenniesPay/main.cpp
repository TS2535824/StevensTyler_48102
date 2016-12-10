/*  
    File:   main 
    Author: Tyler Stevens 
    Created on October 15, 2016
    Purpose:Calculates how much the user would earn in the days they worked
 *          if their salary started at one penny and double each day they work.  
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
    //Declaration of Variables 
    int days;
    float pay=.01, totl;
      
    //Input values 
    cout<<"How many days have you worked? ";
    cin>>days;
    
    while (days<1)//entry must be greater than 0
    {
        cout<<"Invalid entry! please enter a number greater than 0 ";
        cin>>days;
        
    }
    //set the numeric output formatting
    cout<<fixed<<showpoint<<setprecision(2);
    
    //Display table heading
    cout<<"Days\tPay\n";
    cout<<"--------------\n";
    
    //Display output
    for(int day=1;day<=days;++day)
    {
        //Calculate pay
        pay*=2;
        totl+=pay;
   
        //Display days worked and pay per day.
        cout<<day<<"\t"<<pay<<" $"<<endl;
        
    }
    //Display total
    cout<<"Total \n";
    cout<<"--------------\n";
    cout<<totl<<" $"<<endl;
    
  
    //Exit Program 
     return 0; 
 } 