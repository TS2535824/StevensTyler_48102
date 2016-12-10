/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on October 5, 2016
 * Purpose:Determines whether user input is a magic date.A magic date occurs
 *         when the month and day are multiplied and are equal to the year
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
    unsigned short day,month,year,magic;
    
    
    //Input or initialize values Here
    cout<<"Wanna see if a certain date is magical? \n";
    cout<<"Enter a month (in numeric form) \n";
    cin>>month;
    cout<<"Enter a day (in numeric form) \n";
    cin>>day;
    cout<<"Enter a two digit year \n";
    cin>>year;
    
    //Process/Calculations Here
    magic=day*month;
    
    //Output Located Here
    (magic==year)?(cout<<day<<"/"<<month<<"/"
    <<year<<" is a magic date!")//if magic is equal to year code display this
        :(cout<< "Sorry! That is not a magic date.");//other wise display this
        

    

    //Exit
    return 0;
}