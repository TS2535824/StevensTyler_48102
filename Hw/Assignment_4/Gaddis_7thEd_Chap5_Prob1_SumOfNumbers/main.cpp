/* 
   File:   main
   Author: Tyler Stevens
   Created on October 11, 2016
   Purpose: Calculates the sum of all integers from 
 *          1 up to the number entered by the user.
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
    int sum;//sum all integers in number entered
    int num;//number 
    
    //Input values
    cout<<"Please enter a positive integer value \n";
    cin>>num;
    
    //Process values -> Map inputs to Outputs
    while(num<0){//loops until positive integer is entered
        cout<<"Incorrect entry! Please enter a positive integer value \n";
        cin>>num;//re-entry of the variable 
            
    }
    while(num>0){
        sum+=num;//sum = sum + number
        --num;//prefix mode
    }
    
    //Display Output
    cout<<"The sum of all integers from 1 to the number entered is "<<sum<<endl;

    //Exit Program
    return 0;
}