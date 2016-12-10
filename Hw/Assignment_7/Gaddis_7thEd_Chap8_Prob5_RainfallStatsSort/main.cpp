/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created November 16, 2016
 * Purpose:  Calculate and display the total rainfall for the year, the average
 *           monthly rainfall, and the months with the highest and lowest amounts
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int SIZE = 12;
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void selectionSort(float[],int);
void showArray(float[],int);

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare variables
    string months [SIZE] = {"January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November",
        "December"};
    float average, //average rainfall for 12 months
            total[SIZE]; //total rainfall for each month in an array

    //Input values
    float count = 0, //counts total rainfall for each month
          high = 0; //highest amount of rain fall for a 12 month period
    
    //Get each months total rainfall
    for (int i = 0; i < 12; i++) {
        cout << "Enter total rainfall in inches for " << months[i] << endl;
        
        do {
            cin >> total[i];//input values
        } while (total[i] < 0);//input validation. rainfall cannot be negative
        
        count += total[i];//counts each months total rainfall
        
        //Calculate highest total rainfall
        if (total[i] > high) {
            high = total[i];//input values
        }
    }
    //Process values
    average = count / 12;

    //Display output
     selectionSort(total,SIZE);
    
    cout<<"Sorted rainfall from highest to lowest \n";
    showArray(total,SIZE);
    
    cout << "Average rain fall is " << average << " inches" << endl;
    cout << "Highest amount of rainfall was " << high << " inches";

    //Exit
    return 0;
}
//***************************************************************
//Definition of function selelctionSort.                        *
//This function performs an ascending order selection sort on   *
//array. size is the number of elements in array.               *
//***************************************************************
void selectionSort(float array[],int size){
    int startScan,
        minIndex;
    float minValue;
    
    for(startScan=0;startScan<(size-1);startScan++){
        minIndex=startScan;
        minValue=array[startScan];
        for(int i=startScan+1;i<size;i++){
            if(array[i]>minValue){
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

void showArray(float array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" "<<endl;
    }
}

