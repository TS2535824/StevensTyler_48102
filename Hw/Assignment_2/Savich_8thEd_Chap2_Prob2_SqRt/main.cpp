/* 
   File:   main
   Author: Tyler Stevens 
   Created on September 20, 2016, 9:41 AM
   Purpose:  Iteration to find square Root
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>  //Format Library
#include <cstdlib>  //Random number seed
#include <cmath>    //Square root function
#include <ctime>    //time to set random number seed

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float MAXRAND=pow(2,31)-1; //max singed positive

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declaration of Variables
    float n,guess,r;
    float scale=90,shift=10;
    short counter=0;
    
    //Input values - float random number (10.100) v.s
    //               integer random number rand()%scale+shift [10,100]
    
    n=rand()/MAXRAND*scale+shift;
    guess=n/2;
    
    //Display the initialization 
    cout<<"The number to find the square root of = "<<n<<endl;
    cout<<"The initial guess = "<<guess<<endl;
    //Process values -> Map inputs to Outputs
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    cout<<"pass "<<counter<<"[r,guess] =["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //Second pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display Output
    cout<<"pass "<<counter<<"[r,guess] =["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    //Next pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display Output
    cout<<"pass "<<counter<<"[r,guess] =["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
       //Next pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display Output
    cout<<"pass "<<counter<<"[r,guess] =["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    //Next pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display Output
    cout<<"pass "<<counter<<"[r,guess] =["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    //Next pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display Output
    cout<<"pass "<<counter<<"[r,guess] =["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    
    
    
    //The answer or solution is
    cout<<"The sqrt ("<<n<<")="<<sqrt(n)<<endl;
    
    
    //Exit Program
    return 0;
}
