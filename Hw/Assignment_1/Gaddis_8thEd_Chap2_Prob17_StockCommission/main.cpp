/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on September 6, 2016, 11:34 AM
 * Purpose: Calculate cost of Stock Purchase 
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
    //Declare and initialize variables 
    unsigned short nShares=750;     //Number of Shares
    float ppShare=3.5e1f;           // Price Per Share in $'s
    unsigned char comish=2;         //Commission percentage
    float pricePd, comshPd, totPaid;// Price commission, Total Paid 
    
    //Calculate the amount paid in $'s 
    pricePd=nShares*ppShare; 
    comshPd=pricePd*comish/PERCENT;
    totPaid=pricePd+comshPd;
    
    //Output the results 
    cout<<"Price of Stock Purchase Problem"<<endl;
    cout<<"Number of Shares Purchased = " <<nShares<<endl;
    cout<<"Price per share = $"<<ppShare<<endl;
    cout<<"Commission= "<<static_cast<int>(comish)<<"$"<<endl;
    cout<<"Price paid for the share"<<pricePd<<endl;
    cout<<"Price paid in commission =$"<<comshPd<<endl;
    cout<<"Total Paid               =$"<<totPaid<<endl;
                
    
    
    
    
    return 0;
}

