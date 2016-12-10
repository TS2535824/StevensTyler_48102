/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on October 12, 2016
 * Purpose:  Displays a table showing the number of millimeters that the ocean
 *           will have risen in each year for the next 25 years
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
    float rise;

    //Loop, process, and Output chart
    for(int year=1;year<=25;year++){//initialize, test, and update loop
        rise=year*1.5;
        cout<<"The ocean level will rise "<<rise<<" millimeters in " 
            <<year<<" year(s)"<<endl;
        
       }

    //Process/Calculations Here

    //Output Located Here


    //Exit
    return 0;
}



