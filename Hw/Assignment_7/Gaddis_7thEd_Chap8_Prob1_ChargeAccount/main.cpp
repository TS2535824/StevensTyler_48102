/* 
   File:   main
   Author: Tyler Stevens
   Created on September 29th, 2016, 12:00 PM
   Purpose:  Determine whether account number is valid or not
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int linearSearch(const int[], int, int);
const int SIZE=18;

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    const int SIZE=18;
    int account[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850,
                       8080152,4562555,5552012,5050552,7825877,1250255,
                       1005231,6545231,3852085,7576651,7881200,4581002};
    int result,
        charge;
    
    //Input values
    cout<<"Please enter a charge account number ";
    cin>>charge;
    
    //Search for account number inside array
    result=linearSearch(account,SIZE,charge);
    
    //Display output
    if(result==-1){
        cout<<"Invalid charge account number! ";
    }else{
        cout<<"Charge account number is valid. ";
    } 
        
    //Exit Program
    return 0;
}
int linearSearch(const int list[],int numElems, int value){
    //Linear search
    for(int i=0;i<numElems;i++)
    {
        if(list[i]==value)return i;
    }
    return -1;            //Return position, or -1
}