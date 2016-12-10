/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on October 3, 2016
 * Purpose:convert kilograms to newtons then determines
 *         is the object is too heavy or too light.
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
    float mass,weight;
    
    //Input or initialize values Here
    cout<<"[Kilograms to Newtons converter] \n";
    cout<<"What is the mass of your object in kilograms? \n";
    cin>>mass;
    
    
    //Process/Calculations Here
    weight=mass*9.8;
    
    //Output Located Here
    cout<<"The object is "<<weight<<" Newtons \n";
    cout<< ((weight>1000)?("That is to heavy"): "");
    cout<< ((weight<10)? ("That is to light"):  "");
            
            
            
            
            
    

    //Exit
    return 0;
}

