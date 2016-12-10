/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Uses a binary search to search an array of strings
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
int binarySearch(string[],const int,string);

//Program Execution Begins Here
int main(int argc, char** argv) {
   //Define an array with unsorted values
    const int NAMES=10;
    int result,where;
    string names[NAMES]={"Collins","Bill","Smith","Bart","Allen",
                         "Doc","Escorter Bot 04","Stacy","Nova","Ryder"};
    string index;
    
    //Display the values.
    cout<<"[Unsorted]\n";
    showArray(names,NAMES);
    
    //Sort values
    selectionSort(names,NAMES);
    
    //Display the values again.
    cout<<"\n[Sorted] \n";
    showArray(names,NAMES);
    
    cout<<"\nEnter a name from above";
    cin>>index;
    
    result=binarySearch(names,NAMES,index);
    
     if(result>0){
        cout<<"This name is valid";
    }else{
        cout<<"Invalid name";
    } 
  //Exit
    return 0;
}
//***************************************************************
//Definition of function selelctionSort.                        *
//This function performs an ascending order selection sort on   *
//array. size is the number of elements in array.               *
//***************************************************************

void selectionSort(string array[],const int size){
    int startScan,
        minIndex;
    string minValue;
    
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
    for(int i=0;i<size;i++){
        cout<<array[i]<<" "<<endl;
    }
}
int BinarySearch(string array[], const int size, string searchValue){
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