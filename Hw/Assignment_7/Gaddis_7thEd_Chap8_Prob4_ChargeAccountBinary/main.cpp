/* 
   File:   main
   Author: Tyler Stevens
   Created on September 29th, 2016, 12:00 PM
   Purpose:  Performs binary search to determine if account if valid
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int binarySearch(const int[], int, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int result,
        charge;
    
    //Input Values
    const int SIZE=18;
    int account[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850,
                       8080152,4562555,5552012,5050552,7825877,1250255,
                       1005231,6545231,3852085,7576651,7881200,4581002};
    
    cout<<"Please enter a charge account number ";
    cin>>charge;
    
   //Search for account number
    result=binarySearch(account,SIZE,charge);
    
    if(result>0){
        cout<<"Charge account number is valid. ";
    }else{
        cout<<"Invalid charge account number!  ";
    } 
        
    //Exit Program
    return 0;
}
int binarySearch(const int array[], int size, int searchValue){
    //Declaration of variables
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