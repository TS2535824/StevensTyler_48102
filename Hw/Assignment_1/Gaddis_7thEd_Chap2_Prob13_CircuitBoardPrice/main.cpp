/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on September 13, 2016, 9:40 PM
 * Purpose: Calculate electronic companies sales profit 
 */

#include <iostream>     //System libraries 
using namespace std;    //Name-space used in system libraries

//User Libraries  
 
//Global Constants 
const char PERCENT=100; 
 
//Function prototypes 
 
 
//Execution Begins Here 
int main(int argc, char** argv) 
{
//Declare and initialize variables
float cB=12.67, Profit;
unsigned char ProPer=40;

//Process values
Profit=cB*ProPer/PERCENT;

//Display output
cout<<"Cost of Circuit Board is"<<cB<<"$"<<endl;
cout<<"Electronics company has a "<<static_cast<int>(ProPer)<<"% profit"<<endl;
cout<<"Electronics company made "<<Profit<<"$ on Circuit Board sale"<<endl;
        
    
    
//Exit program    
    return 0;
}

