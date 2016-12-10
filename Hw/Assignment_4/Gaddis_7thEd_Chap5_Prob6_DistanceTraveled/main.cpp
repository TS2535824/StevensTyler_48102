/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on October 13, 2016
 * Purpose:  Displays distance a vehicle has traveled for each hour
 *           of the time period entered by the user
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
    int speed, totl;
    
    //Input or initialize values Here
    cout<<"What is the speed of the vehicle in mph? ";
    cin>>speed;
    cout<<"How many hours has it traveled? ";
    cin>>totl;
    cout<<"Hour         Distance Traveled \n";
    cout<<"------------------------------ \n";
    
    //Process/Calculations Here
    for(float hours=1;hours<=totl;hours++){
        int dT=hours*speed;
      
        cout<<hours<<"            "<<dT<<endl;
        
    }
     
    
    //Output Located Here
    

    //Exit
    return 0;
}