/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Sort of array of strings
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void selectionSort(string[],int);
void showArray(const string[],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
   //Define an array with unsorted values
    const int NAMES=3;
    string names[NAMES];
    
    for(int i;i<NAMES;i++){
        cout<<"Enter name "<<(i+1);
        cin>>names[i];
    }
    
    //Display the values.
    cout<<"[Unsorted]\n";
    showArray(names,NAMES);
    
    //Sort values
    selectionSort(names,NAMES);
    
    //Display the values again.
    cout<<"\n[Sorted] \n";
    showArray(names,NAMES);
    
    //Exit
    return 0;
}
//***************************************************************
//Definition of function selelctionSort.                        *
//This function performs an ascending order selection sort on   *
//array. size is the number of elements in array.               *
//***************************************************************

void selectionSort(string array[],int size){
    //Declaration of variables
    int startScan,
        minIndex;
    string minValue;
    
    //Selection sort
    for(startScan=0;startScan<(size-1);startScan++){
        minIndex=startScan;
        minValue=array[startScan];
        for(int i=startScan+1;i<size;i++){
            if(array[i]<minValue){
                minValue=array[i];
                minIndex=i;
            }
        }
        array[minIndex]=array[startScan];
        array[startScan]=minValue;
    }
   
}
//***************************************************
//Definition of function showArray.                 *                        
//This function displays the contents of array.     *
//size is the number of elements in array.          *           
//***************************************************

void showArray(const string array[],int size){
    //Display array
    for(int i=0;i<size;i++){
        cout<<array[i]<<" "<<endl;
    }
}