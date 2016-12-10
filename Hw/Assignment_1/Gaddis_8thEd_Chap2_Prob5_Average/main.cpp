/* 
   File:   main
   Author: Tyler Stevens
   Created on August 29, 2016, 9:41 AM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int x1,x2,x3,x4,x5;//Input Values
    float avg,stdev;
    
    //Input values
    cout<<"This program calculates the mean and standard deviation"<<endl;
    cout<<"Input 5 values"<<endl;
    cin>>x1>>x2>>x3>>x4>>x5;
    
    
    //Process values -> Map inputs to Outputs
    avg=(x1+x2+x3+x4+x5)/5;
    stdev=(((x1-avg)*(x1-avg)+(x2-avg)*(x2-avg)+(x3-avg)*(x3-avg)+
            (x4-avg)*(x4-avg)+(x5-avg)*(x5-avg))/4,0.5);
            
    //Display Output
    cout<<"The input value = "<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<" "<<x5<<" "<<endl;
    cout<<"the mean = "<<avg<<endl;
    cout<<"the standard deviation = "<<stdev<<endl;
    //Exit Program
    return 0;
}

