/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on October 12, 2016
 * Purpose:  Display characters for ASCII codes 0 through 127
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    int line = 1;
    
    //Processes and Display output
    for (int ascii = 0; ascii < 127; ascii++) {//initialize,test, and update
        cout << static_cast<char> (ascii); // static_cast<conversion>(variable to convert)
            while (line > 16) {//displays only 16 characters on a line
                cout << endl;
            line = 1;
        }
        line++;


    }

   

    //Exit
    return 0;
}



