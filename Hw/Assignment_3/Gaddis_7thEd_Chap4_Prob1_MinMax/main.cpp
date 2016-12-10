/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on September 29, 2016
 * Purpose:  
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
    float num1,num2;//number 1 and number 2
    
    //Input or initialize values Here
    cout<<"Enter a number \n";
    cin>>num1;
    cout<<"Enter another number \n";
    cin>>num2;
    
    //Process/Calculations Here
    
    
    //Output Located Here
    if (num2<num1) {//displays if number 2 is less than number 1
        cout<<num2<<" is smaller than "<<num1<<endl;
    }
    else if (num1<num2) {//displays if number 1 is less than number 2
        cout<<num1<<" is smaller than "<<num2<<endl;
    }
    else {//displays if number 1 and number 2 are equal
         cout<<num2<<" and "<<num1<<" are equal"<<endl;
    }
    
    //Exit
    return 0;
}


