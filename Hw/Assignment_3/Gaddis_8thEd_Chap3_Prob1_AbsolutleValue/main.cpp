/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on October 3, 2016 
 * Purpose: determines absolute value of the number the user enters.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int num;//number
   
  //Input or initialize values Here
    cout<<"Absolute value calculator \n";
    cout<<"Enter a number to find its absolute value \n";
    cin>>num;
    
    //Process/Calculations Here
  
    //Output Located Here
    cout<<"The absolute value is ";
    (num<0)?(cout<<num*-1):(cout<<num);
    
   

    //Exit
    return 0;
}