/*  
    File:   main 
    Author: Tyler Stevens 
    Created on September 14, 2016
    Purpose: Calculates the users 
 *           average test score from past five test scores  
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
float s1,s2,s3,s4,s5,//Test Scores
avg;//Total test scores
    
//Input values 
cout<<"Please enter your last five test scores \n";
cin>>s1; 
cin>>s2; 
cin>>s3; 
cin>>s4; 
cin>>s5;

//Process values -> Map inputs to Outputs 
avg=(s1+s2+s3+s4+s5)/5;//Calculates average test score from inputs
    
//Display Output 
cout<<"Your average score is "<<setprecision(1)<<fixed<<avg<<"%."<<endl;
 
//Exit Program 
return 0; 
} 

