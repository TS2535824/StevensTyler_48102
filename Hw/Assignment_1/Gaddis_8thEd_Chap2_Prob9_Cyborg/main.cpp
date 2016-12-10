/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 *Created on September 8, 2016, 12:04 PM
 * Purpose: Investigate size of all primitive data types 
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    //Display Output
    cout<<"The size of a boolean            = "<<sizeof(bool)<<" byte";
    cout<<" [0 -> false, true otherwise] \n";
    cout<<"The size of a character          = "<<sizeof(char)<<" byte";  
    cout<<" [-2^7,2^7-1], [-128,127]\n";
    cout<<"The size of a unsigned character = "<<sizeof(unsigned char)<<" byte";
    cout<<"[0,2^8-1],[0,255]\n";
    cout<<"The size of a short              = "<<sizeof(short)<<" byte";
    cout<<"[-0,2^15,0,2^15-1],[-32768,32767] \n";
    cout<<"The size of a unsigned short     = "<<sizeof(unsigned short)<<" byte";
    cout<<" [0,2^16-1],[-32768,32767]\n";
    cout<<"The size of a integer            = "<<sizeof(int)<<" byte";
    cout<<" [-2^31,2^31-1],[+-2.15 Billion]\n";
    cout<<"The size of a unsigned integer   = "<<sizeof(unsigned int)<<" byte";
    cout<<" [0,2^32-1],[4.3 Billion]\n";
    cout<<"The size of a long               = "<<sizeof(long)<<" byte";
    cout<<" [-2^63,2^63-1],[+-9.2 Quintillion]\n";
    cout<<"The size of a unsigned long      = "<<sizeof(unsigned long)<<" byte";
    cout<<" [-2^64,2^64-1],[18.4. Quintillion]\n";
    cout<<"The size of a float              = "<<sizeof(float)<<" byte";
    cout<<" [10^+-38], 7SD\n";
    cout<<"The size of a double             = "<<sizeof(double)<<" byte";
    cout<<" [10^+-38], 16SD\n";
    cout<<"The size of a long double        = "<<sizeof(long double)<<" byte";
    cout<<"[10^+-4932], 33SD\n";
    
    return 0;
}

