/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 19, 2016, 9:07 AM
 * Purpose:Calculates area of a two separate rectangles
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
    float r1, r2;//area of rectangle 1 and area of rectangle 2
    float lngth1,lngth2,width1,width2;//length 1, length 2, width 1, width 2
    
    //Input or initialize values Here
    cout<<"What is the length of of rectangle 1? \n";
    cin>>lngth1;
    cout<<"What is the width of rectangle 1? \n";
    cin>>width1;
    cout<<"What is the length of of rectangle 2? \n";
    cin>>lngth2;
    cout<<"What is the width of rectangle 2? \n";
    cin>>width2;
    
    //Process/Calculations Here
    r1=(lngth1*width1);//calculate area for rectangle 1
    r2=(lngth2*width2);//calculate area for rectangle 2
    
    //Output Located Here
    cout<<"The area of rectangle 1 is "<<r1<<endl;
    cout<<"The area of rectangle 2 is "<<r2<<endl;
    
    if (r1>r2) {
        cout<<"Rectangle 1 has the greater area"<<endl;
    }
    else if (r1<r2) {
        cout<<"Rectangle 1 has the greater area"<<endl;
    }
    else {
        cout<<"The area is the same for both rectangle"<<endl;
    }
    
    //Exit
    return 0;
}

