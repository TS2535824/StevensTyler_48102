/*  
File:   main 
Author: Tyler Stevens 
Created on September 21, 2016
Purpose: Calculate number of widgets on a pallet
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
    float wid,widLb,palLb,//widgets,widgets weight,pallet weight,total 
    totLb;//weight of pallet with widgets
      
    //Input values 
    widLb=9.2;//weight of a single widget value
    
    cout<<"How much does the pallet weigh by itself? \n";
    cin>>palLb;
    cout<<"How much does the pallet weigh with widgets? \n";
    cin>>totLb;
    

    //Process values -> Map inputs to Outputs 
    wid=totLb/widLb;
    
    //Display Output 
    cout<<"There are "<<setprecision(2)<<fixed<<wid
        <<" widgets on the pallet."<<endl;
 
     //Exit Program 
     return 0; 
 } 