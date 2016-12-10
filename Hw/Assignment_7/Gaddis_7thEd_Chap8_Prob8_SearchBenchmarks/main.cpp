/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on November 19, 2016, 6:48 PM
 * Purpose: Use binary search and linear search to find a value in array
 */

#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int binSrch(int [], int, int); //binary search

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    const int SIZE = 20;
    int num[SIZE] = {13579,26791,26792,33445,55555,62483,77777,
                    79422,85647,93121,5658845,4520125,7895122,
                    8777541,8451277,1302850,8080152,4562555,5552012,5050552,};
    int number,
        linear = 1,
        binary = 0;
    bool found = false;
    
    //Input values
    cout << "Enter a number between 1-999: ";
    cin >> number; cin.ignore();
   
    
    //Linear search
    for (int i = 0; i < SIZE; i++){
        if (num[i] == number) {
            found = true;
            break;
        }
        linear++;
    }
    
    cout << "Linear search: " << linear << endl;
    cout << "Binary search: " << binSrch(num, SIZE, number) << endl;

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