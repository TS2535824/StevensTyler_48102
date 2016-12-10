/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on September 7, 2016, 8:25 PM
 * Purpose: Calculate restaurant bill
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
    //Declaration of variables and Input values
    float meal=44.50,salesTx=6.75,tax,tip,total;      
    unsigned char tipPercnt=15;
    
    //Process values
    tax = meal*salesTx/PERCENT;                 
    tip = (meal+tax)*tipPercnt/PERCENT;
    total = tip+tax+meal; 
   
    //Display output
    cout<<"Meal charge \n"<<meal<<endl;
    cout<<"Sales tax $\n"<<static_cast<int>(tax)<<endl;
    cout<<"Tip $\n"<<(tip)<<endl;
    cout<<"Your total bill $\n"<<(total)<<endl;
   
    return 0;
}

