/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created November 16, 2016
 * Purpose:  Displays each employee 
 *           number records how many hours worked and pay rate
 */

//System Libraries Here
#include <iostream> //Input/Output
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int ROW = 3, COL = 7;
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
  //Input/Declaration of variables
     int  employ=7,
        id[employ]={5658845, 4520125, 7895122,8777541, 
                    8451277, 1302850, 7580489};
   float payRate[employ],
         wages[employ],
         hours[employ];
    
   //Input values
   for(int i=0 ; i<employ; i++){
        cout<<"Enter the hours worked for ID# ";
        cout<<id[i]<<" ";
        cin>>hours[i];
        cout<<"Enter pay rate for ID# ";
        cout<<id[i]<<"         ";
        cin>>payRate[i];
    }
     //Process values -> Map inputs to Outputs
    for(int i=0; i<employ; i++){
        wages[i]=hours[i]*payRate[i];
    }
    //Display Output
    cout<<"------Payroll------"<<endl;
    cout<<"ID# \t\t PAY"<<endl;
    for(int i=0; i<employ; i++){
        cout<<id[i]<<"\t\t "<<wages[i]<<endl;
    }
    //Exit Program
    return 0;
}