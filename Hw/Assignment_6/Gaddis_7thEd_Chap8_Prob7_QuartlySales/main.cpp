/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created November 16, 2016
 * Purpose:  Lets user enter four quarterly sales 
 *           figures for six divisions of a company
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int ROW=6,COL=4;
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
  //Declaration of Variables
    float sales[ROW][COL],total=0;
    
    for(int r=0;r<ROW;r++){
        
        for(int c=0;c<COL;c++){
        cout<<"Enter four quarterly sales for division #"<<r+1<<endl;
        cin>>sales[r][c];
        c++;
        cin>>sales[r][c];
        c++;
        cin>>sales[r][c];
        c++;
        cin>>sales[r][c];
        total+=sales[r][c];
        }
    }
    //To be continued..
   
    //Exit Program
    return 0;
}