/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Produces a report that displays sales for each salsa type
 *           total sales, and the names of the highest selling and lowest selling.
 */

//System Libraries Here
#include <iostream> //Input/Output libraires
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int SIZE=5;

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string hotness[SIZE]={"Mild","Medium","Sweet","Hot","Zesty",};//salsa types
    float jars[SIZE];//jars sold
    
    //Input values
    float low=5,//least amount of jars sold
          high=0;//greatest amount of jars sold
    
    for(int i=0;i<5;i++){
        cout<<"Enter the number of jars sold for "<<hotness[i]<<" ";
        cin>>jars[i];
    
         if(jars[i]>high){//Determines highest amount sold
                   high=jars[i];
         }
          if(jars[i]<low){//Determines lowest amount sold
                   low=jars[i];
         }
    }
    //Display output
    for(int i=0;i<5;i++)
    {
        cout<<hotness[i]<<":"<<endl;
        cout<<jars[i]<<" jars"<<endl;    
    }
    cout<<"Most jars sold:"<<high<<" jars"<<endl;
    cout<<"Least jars sold:"<<low<<"jars"<<endl;

    //Exit
    return 0;
}

