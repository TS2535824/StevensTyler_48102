/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created November 16, 2016
 * Purpose:  Calculate greatest and least value of a number enter by user.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int SIZE = 10;
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare variables
    float total[SIZE],
          value[SIZE]={1,2,3,4,5,6,7,8,9,10};

    //Input values
    float low=10,
          high = 0; //highest amount 
    
    //Get each months total rainfall
    for (int i = 0; i < 10; i++) {
        cout<<"Enter value for slot "<<value[i]<<" ";
        cin>>total[i];
        //Calculate highest total rainfall
        if (total[i] > high) {
            high = total[i];//input values
        }
            if(total[i]<low){
                low=total[i];
            }
    }
    //Display output
    cout << "The greatest number is " << high <<endl;
    cout<<"The lowest number is "<<low<<endl;

    //Exit
    return 0;
}

