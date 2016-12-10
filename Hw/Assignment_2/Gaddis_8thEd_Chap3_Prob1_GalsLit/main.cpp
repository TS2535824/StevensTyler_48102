/*  
* File:   Gallons to Liters 
* Author: Tyler Stevens 
* Created on September 16, 2016, 2:39 PM 
* Purpose: Calculates the price of gasoline 
  */ 
 
 
 #include <iostream>   //Input/Output objects 
 #include <iomanip>    //Input/Output manipulation 
 using namespace std;  //Name-space used in the System Library 
 
 
 //User Libraries 
 
 
 //Global Constants 
 
 
 //Function prototypes 
 
 
 //Execution Begins Here! 
 int main(int argc, char** argv) { 
     //Declaration of Variables 
     float lit, //liters 
           gal, //gallons 
           priceGal, //price per gallon 
           cost; //total cost of gas 
 
 
     //Input values 
     priceGal = 3.58; 
     cout<<"Enter the volume of gasoline in Liters: \n"; 
     cin>>lit; 
      
     //Process values -> Map inputs to Outputs 
     gal=lit/3.78541; //converts liters into US gallons [1 gal=3.785411784 lit] 
     cost=gal*priceGal; //calculates the price of gallons of gas 
      
     //Display Output 
     cout<<lit<<" liters equates to "<<gal<<" gallons.\n" 
         <<"This will cost $"<<setprecision(2)<<fixed<<cost<<".\n"; 
      
     //Exit Program 
     return 0; 
 } 
