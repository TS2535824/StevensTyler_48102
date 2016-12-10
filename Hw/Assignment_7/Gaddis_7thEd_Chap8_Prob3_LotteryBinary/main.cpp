/* 
   File:   main
   Author: Tyler Stevens
   Created on September 29th, 2016, 12:00 PM
   Purpose:  Performs binary search to determine lottery winner
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
    
    //Search lottery number
    result=winner(account,SIZE,charge);
    
    //Display output
    if(result>0){
        cout<<"This tickets a winner! ";
    }else{
        cout<<"Sorry better luck next time!";
    } 
        
    //Exit Program
    return 0;
}
int winner(const int array[], int size, int searchValue){
    
    //Declare variables
    int mid,
        low = 0,
        high = size - 1;
    
    while (low <= high){
        mid = (low + high) / 2;
 
        if(searchValue == array[mid]){
            return mid;
        }else if (searchValue > array[mid]){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return -1;
 }