/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on September 7, 2016, 8:25 PM
 * Purpose: Sales Tax
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
    //Declaration and initialization of variables
    float stateTp=4,salesTp=2,purchase=52, 
          stateTx, salesTx, total;
    
    //Input values
    stateTx=purchase*(stateTp/100);
    salesTx=purchase*(salesTp/100);
    total=purchase+stateTx+salesTx;
    
    //Output results
    cout<<"Purchase amount\n$"<<purchase<<endl;        
    cout<<"state tax\n$"<<stateTx<<endl;
    cout<<"sale tax\n$"<<salesTx<<endl;
    cout<<"total\n$"<<total<<endl;
   
    return 0;
}

