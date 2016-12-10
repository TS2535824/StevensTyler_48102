 /*
  * File:   main
   Author: Tyler Stevens
   Created on September 13, 2016, 9:41 AM
   Purpose:Calculate when homeowners in Riverside
  *         will have beach front property
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float CNVMMFT=304.8; //Conversion millimeters to feet from google
const float CNVMMM=1000;// CONVERSION FROM MM TO M
//Function prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables with initialization 
    float rate=1.5;// sea level rise rate in mm/year
    int nYear1=5,nYear2=7,nYear3=10; //years to calculate rise
    float rise1, rise2,rise3;//solutions for the 3 years from above
    int nYrBch;//number of years before your home is beach front property
    float elevRiv=860;//elevation of riverside in ft according to wikipedia
    
    //Process values -> Map inputs to Outputs
    rise1=rate*nYear1;
    rise2=rate*nYear2;
    rise3=rate*nYear3;
    nYrBch=elevRiv/rate*CNVMMFT;
   
    
    
    //Display Output
    cout<<"The rate of sea level rise = "<<rate<<"mm/year\n"<<endl;
    cout<<"After "<<nYear1<<" years the sea will rise "<<rise1<<"mm\n"<<endl;
    cout<<"After "<<nYear2<<" years the sea will rise "<<rise2<<"mm\n"<<endl;
    cout<<"After "<<nYear3<<" years the sea will rise "<<rise3<<"mm\n"<<endl;
    cout<<"Years it will take for beach front property\n"<<endl;
    cout<<nYrBch<<" Years\n"<<endl;
    cout<<"This rise equates to "<<nYrBch*rate/CNVMMM<<" Meters"<<endl;
    
    //Exit Program
    return 0;
}

