/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on November 19, 2016, 6:48 PM
 * Purpose: Compares a bubble sort to a selection sort
 */

#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void selectionSort(int [],int);
void showArray(int [],int);
void bubble(int [], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Input values
    const int SIZE = 20;
    int num[SIZE] = {13579,26791,26792,33445,55555,62483,77777,
                    79422,85647,93121,5658845,4520125,7895122,
                    8777541,8451277,1302850,8080152,4562555,5552012,5050552,};
    
    //Unsorted values
    cout<<"[Unsorted]\n";
    showArray(num,SIZE);
    
    //Sort values
    selectionSort(num,SIZE);
    bubble(num,SIZE);
    
    //Display the values again.
    cout<<"\n[Sorted] \n";
    showArray(num,SIZE);

    //Exit Program
    return 0;
}
int binSrch(int arr[], int size, int num){
    int first = 0,
        mid,
        last = size - 1;
    bool found = false;
    int count = 0;
    
    do {
        mid = (first + last) / 2;
        
        if (arr[mid] == num){
            found = true;
        } else if (arr[mid] > num) last = mid - 1;
        else first = mid + 1;
        
        count++;
    } while(!found && first <= last);
    
    return count;
}
void bubble(int a[], int size){
    bool swap;
    int temp;
    int counter=0;
    do{
        swap = false;
        for(int i=0; i<(size-1); i++){
            if (a[i]>a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                swap = true;
               
            }counter += 1;
        }
    }while(swap);
    cout << "Bubble sort: " << counter << " switches" << endl;
}
void selectionSort(int array[],int size){
    int startScan,
        counter=0,
        minIndex,
        minValue;
    
    for(startScan=0;startScan<(size-1);startScan++){
        minIndex=startScan;
        minValue=array[startScan];
        for(int i=startScan+1;i<size;i++){
            if(array[i]<minValue){
                minValue=array[i];
                minIndex=i;
               
            }
           
        }
        counter+=1;
        array[minIndex]=array[startScan];
        array[startScan]=minValue;
    }
    cout << "selection sort: " << counter << " switches" << endl;
}
void showArray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" "<<endl;
    }
}