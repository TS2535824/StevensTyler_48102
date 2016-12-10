/* 
 * File:   main.cpp
 * Author: Tyler Stevens 
 * Created on November 6,2016
 * Purpose:  Determines which of five geographic regions within a major city
 *           (north,south,east,west,and central) had the fewest reported a
 *           automobile accidents last year.
 */

//System Libraries Here
#include <iostream> //Input/output stream objects
#include <string>   // character traits and a set of converting functions
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int getNumAccidents(string); //get number of accidents per region
void findLowest(int, int, int, int, int); //find lowest accident prone region

//Program Execution Begins Here

int main() {

    //Declaration of variables
    string reg1 = "North region",
            reg2 = "South region",
            reg3 = "East region",
            reg4 = "West region",
            reg5 = "Central region";

    int n, //North region
            s, //South region 
            e, //East region
            w, //West region
            c; //Central region

    //Call functions
    n = getNumAccidents(reg1);
    s = getNumAccidents(reg2);
    e = getNumAccidents(reg3);
    w = getNumAccidents(reg4);
    c = getNumAccidents(reg5);

    findLowest(n, s, e, w, c);

    //Exit
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Get number of accidents   ************************
//Purpose:  Get how many accidents per region
//Inputs:   Inputs to the function here -> Description, Range, Units
// reg-> passes region name to function
//Output:   Outputs to the function here -> Description, Range, Units
//  sales ->  records 4 sales from each division
//******************************************************************************

int getNumAccidents(string reg) {
    //Declare variable
    int accid;
    //Input validation
    do {
        //displays region name
        cout << "What are the number of automobile accidents reported in the" << reg <<
                " last year?";
        //Input values
        cin>>accid;
        cin.ignore();
    } while (accid < 0); //determines whether user input is greater than zero

    return accid;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Find lowest   ************************************
//Purpose:  Find region with fewest amount of car accidents
//Inputs:   Inputs to the function here -> Description, Range, Units
// n,s,e,w,c -> accident numbers per region
//Output:   Outputs to the function here -> Description, Range, Units
// Displays which region had fewest amount of car accidents
//******************************************************************************

void findLowest(int n, int s, int e, int w, int c) {
    //Determine highest sale figures
    if (n < s && n < e && n < w && n < c) {
        cout << "North region had the fewest amount of automobile accidents";
    } else if (s < n && s < e && s < w && s < c) {
       cout << "South region had the fewest amount of automobile accidents";
    } else if (e < n && e < s && e < w && e < c) {
        cout << "East region had the fewest amount of automobile accidents";
    } else if (w < n && w < s && w < e && w < c) {
        cout << "West region had the fewest amount of automobile accidents";
    } else if (c < n && c < s && c < e && c < w)
        cout << "Central region had the fewest amount of automobile accidents";
    else{
         cout << "All regions had an equal amount of automobile accidents";
    }

}