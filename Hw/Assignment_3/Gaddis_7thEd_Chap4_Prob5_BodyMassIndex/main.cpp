/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on October 4, 2016
 * Purpose:Calculate users BMI and determines 
 *         whether user is over weight or not
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
    float weight,height,bmi;
    
    //Input or initialize values Here
    cout<<"Body Mass Index calculator! \n";
    cout<<"Whats is your height in inches? \n";
    cin>>height;
    cout<<"How much do you weight in pounds? \n";
    cin>>weight;
    
    //Process/Calculations Here
    bmi=(weight*703)/(height*height);
    
    //Output Located Here
    cout<<(((bmi>25) || (bmi<18.5)) ?
        "You are overweight":
        "Your BMI is ideal");
        
    //Exit
    return 0;
}

