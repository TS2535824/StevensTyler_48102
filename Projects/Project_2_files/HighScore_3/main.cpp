/* 
 * File:   main.cpp
 * Author: Tyler
 *
 * Created on December 11, 2016, 8:48 PM
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

const int SIZE = 8;
void selectionSort(string[],int);
void showArray(const string[],int);
void playerNames(string);

int main(int argc, char** argv) {
    string name;
    cout<<"Enter your name"<<endl;
    cin>>name;
    playerNames(name);

    return 0;
}
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
            if(array[i]>minValue){
                minValue=array[i];
                minIndex=i;
            }
        }
        array[minIndex]=array[startScan];
        array[startScan]=minValue;
    }
   
}
void showArray(const string array[],int size){
    //Display array
    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }
}
void playerNames(string name){
    ofstream dataFile;
    ifstream outFile;
    string thiefs[SIZE];
    
    
    // Open the file in append mode.
    dataFile.open("demofile.txt",ios::out|ios::app);
    //writing more data to file
    dataFile<<name<<endl;
    //Close file
    dataFile.close();
   
    //Open file
    outFile.open("demofile.txt");
        //Copy file to array
        for(int i=0;i<SIZE;i++){
            outFile>>thiefs[i];
        }
    //Close file
    outFile.close();
    for(int i=0;i<4;i++){
    cout<<thiefs[i]<<endl;
    }
    
    //Sort array with selection sort
    selectionSort(thiefs,SIZE);
    
    //Display the values again.
    cout<<"\n[Sorted] \n";
    showArray(thiefs,SIZE);
    
}