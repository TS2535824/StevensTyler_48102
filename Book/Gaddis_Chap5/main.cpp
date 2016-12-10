/*  
    File:   main 
    Author: Tyler Stevens 
    Created on , 2016
    Purpose:   
  */ 
 
 
 //System Libraries 
#include <iostream>   //Input/Output objects 
using namespace std;  //Name-space used in the System Library 
 
 
//User Libraries 

 
//Global Constants 

 
//Function prototypes 

 
//Execution Begins Here! 
int main(int argc, char** argv) { 
    //Declaration of Variables 
    int score1, score2, score3;
    float avg;
    char again;
      
    //loop
    do
    {
        //Input values
        cout<<"Enter three scores and I will average them"<<endl;
        cin>>score1>>score2>>score3;
        
        //process values and display output
        avg=(score1+score2+score3)/3.0;
        cout<<"The average is "<<avg<<".\n";
        
        //Loop input values
        cout<<"Do you want to average another set of scores?(Y/N) ";
        cin>>again;
        }while (again =='Y' || again =='y');
     
    //Process values -> Map inputs to Outputs 
      
    //Display Output 
 
 
     //Exit Program 
     return 0; 
 } 


