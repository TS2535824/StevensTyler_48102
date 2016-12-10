/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on October 2016 
 * Purpose: Converts numbers 1 through 10 into Roman numerals 
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
    short num;//number
   
  //Input or initialize values Here
    cout<<"Enter a number from 1 to 10 and"
            " I will convert it into a Roman Numeral\n";
    cin>>num;
    
    //Process/Calculations Here
  
    //Output Located Here
     switch(num){
        case 1: cout<<num<<" = I \n";break;
        case 2: cout<<num<<" = II \n";break;
        case 3: cout<<num<<" = III \n";break;
        case 4: cout<<num<<" = IV \n";break;
        case 5: cout<<num<<" = V \n";break;
        case 6: cout<<num<<" = VI \n";break;
        case 7: cout<<num<<" = VII \n";break;
        case 8: cout<<num<<" = VIII \n";break;
        case 9: cout<<num<<" = IX \n";break;
        case 10:cout<<num<<" = x \n";break;
        default:cout<<"You did not enter a number from 1 to 10"<<endl;
    }
   

    //Exit
    return 0;
}
