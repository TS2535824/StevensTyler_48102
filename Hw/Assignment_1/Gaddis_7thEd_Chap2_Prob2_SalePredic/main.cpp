/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on September 6, 2016, 10:30 PM
 * Purpose: Sales Prediction
 */
//Include System Level Libraries 
#include <iostream> //Input/Output Libraries
using namespace std; // Libraries compiled under standard namespace

//user Libraries 

//Global constants
 const char PERCENT=100;

//Function Prototype


//Program execution

int main(int argc, char** argv) 
{
    //Declaration of variables
    float           comp_Totl = 4.6e1f;     //company's total sales
    unsigned char   east_Percnt = 62 ;      //east coast sales percentage
    float           east_Totl ;            //total east coast sales          
    
    //Output East Coast total revenue
    east_Totl = comp_Totl*east_Percnt/PERCENT; 
    
    //Output results   
    cout<<"Company's total revenue \n \n$"<<comp_Totl<<" million \n"<<endl;
    cout<<"East Coast division is responsible for\n\n"<<static_cast<int>
            (east_Percnt)<<"% of total sales\n"<<endl;
    cout<<"East Coast division will generate \n \n$"<<east_Totl<<" million for "
            "the company"<<endl;
        
      
        
    
    
    return 0;
}

