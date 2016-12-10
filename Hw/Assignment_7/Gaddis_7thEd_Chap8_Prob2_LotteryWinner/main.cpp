/* 
   File:   main
   Author: Tyler Stevens
   Created on September 29th, 2016, 12:00 PM
   Purpose:  Performs a linear search to determine whether user wins the lottery
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int winner(const int[], int, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int result,
        charge;
    
    //Input values
    const int SIZE=10;
    int account[SIZE]={13579,26791,26792,33445,55555,
                       62483,77777,79422,85647,93121};
    
    cout<<"Please your five digit lottery number ";
    cin>>charge;
    
    //Search array for lottery winner
    result=winner(account,SIZE,charge);
    
    //Display output
    if(result==-1){
        cout<<"This tickets a winner! ";
    }else{
        cout<<"Sorry better luck next time!";
    } 
        
    //Exit Program
    return 0;
}
int winner(const int list[],int numElems, int value){
    //Linear Search
    for(int i=0;i<numElems;i++)
    {
        if(list[i]==value)return i;
    }
    return -1;            //Return position, or -1
}