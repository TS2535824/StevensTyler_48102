/*  
    File:   main 
    Author: Tyler Stevens 
    Created on September 28, 2016
    Purpose:   
  */ 
 
 
 //System Libraries 
#include <iostream>   //Input/Output objects 
#include <iomanip>    //Input/Output manipulation
#include <string>     //Includes string objects
using namespace std;  //Name-space used in the System Library 
 
 
//User Libraries 

 
//Global Constants 

 
//Function prototypes 

 
//Execution Begins Here! 
int main(int argc, char** argv) { 
    //Declaration of Variables 
    string movieNm;//movie name
    int    adultTk,childTk;//child ticket and adult ticket
    float  gross,net,paid,//gross profit,net profit,amount paid to distributor
           priceAd,priceCh;//adult ticket price and child ticket price
      
    //Input values 
    priceAd=6.00;
    priceCh=3.00;
    
    cout<<"Please enter the movie name \n";
    getline(cin,movieNm);
    cout<<"Please enter the amount of Adult tickets sold \n";
    cin>>adultTk;
    cout<<"Please enter the amount of Children's tickets sold \n";
    cin>>childTk;
    
    //Process values -> Map inputs to Outputs 
    gross=adultTk*priceAd+childTk*priceCh;
    net=gross*0.2;
    paid=gross-net;
    
    //Display Output 
    cout<<"Movie Name:                   \""<<movieNm<<"\""<<endl;
    cout<<"Adult Tickets Sold:            "<<adultTk<<endl;
    cout<<"Child Tickets Sold:            "<<childTk<<endl;
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Gross Box Office Profit:     $"<<gross<<endl;
    cout<<"Net Box Office Profit:       $"<<net<<endl;
    cout<<"Amount Paid To Distributor:  $"<<paid<<endl;
 
 
     //Exit Program 
     return 0; 
 } 