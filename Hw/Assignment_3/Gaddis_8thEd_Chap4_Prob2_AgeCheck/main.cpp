/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on September 30, 2016
 * Purpose:  Determines whether user is eligible for being hired by users age
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
    unsigned short age;//stores age of user
    
    //Input or initialize values Here
    cout<<"[Job eligibility calculator] \n";
    cout<<"Enter a your age \n";
    cin>>age;
    //Process/Calculations Here
    
    
    //Output Located Here
    if (age>=18&&age<=28) {//users age meets job requirement 
        cout<<"You are eligible for hire. \n"<<endl;
    }
    else if (age<18) {//users age is below job requirement 
        cout<<"You are below the age requirement for being hired. \n"<<endl;
    }
    else if (age>28) {//users age is over job requirement 
        cout<<"You are not eligible for hire. \n"<<endl;
    }
    
    //Exit
    return 0;
}


