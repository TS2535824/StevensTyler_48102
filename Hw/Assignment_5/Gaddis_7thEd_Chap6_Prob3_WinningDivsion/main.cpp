/* 
 * File:   main.cpp
 * Author: Tyler Stevens 
 * Created on November 3,2016
 * Purpose:  Determines which company's four divisions had 
 *           the greatest sales for a quarter.
 */

//System Libraries Here
#include <iostream> //Input/output stream objects
#include <string>   // character traits and a set of converting functions
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float getSales(string); //get quarterly sales
void findHighest(float, float, float, float); //find greatest sales out of 4 divisions

//Program Execution Begins Here

int main() {

    //Declaration of variables
    string  div1 = "Northeast division",
            div2 = "Southeast division",
            div3 = "Northwest division",
            div4 = "Southwest division";

    float   nE, //Northeast sales
            sE, //Southeast sales
            nW, //Northwest sales
            sW; //Southwest sales

    //Call functions
    nE = getSales(div1); //Finds Northeast sales and passes it to nE
    sE = getSales(div2); //Finds Southeast sales and passes it to sE
    nW = getSales(div3); //Finds Northwest sales and passes it to nW
    sW = getSales(div4); //Finds Southwest sales and passes it to sW

    findHighest(nE, sE, nW, sW);//Determines highest sales for all divisions

    //Exit
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Get sales   ****************************************
//Purpose:  Record sales for all divisions from user
//Inputs:   Inputs to the function here -> Description, Range, Units
// div-> passes divisions name to function
//Output:   Outputs to the function here -> Description, Range, Units
//  sales ->  records 4 sales from each division
//******************************************************************************
float getSales(string div) {
    //Declare variable
    float sales;
    //Input validation
    do{
        //Display division name
        cout << "What are " << div << " quarterly sales figures?";
        //Input values
        cin>>sales; cin.ignore();}
    while(sales<0);//determines whether user input is greater than zero
    
    return sales;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Get sales   ****************************************
//Purpose:  Record sales for all divisions from user
//Inputs:   Inputs to the function here -> Description, Range, Units
// s1-s5-> sales from each division
//Output:   Outputs to the function here -> Description, Range, Units
// display which division had the highest sales or if all are equal
//******************************************************************************
void findHighest(float s1, float s2, float s3, float s4) {
    //Determine highest sale figures
    if (s1 > s2 && s1 > s3 && s1 > s4) {
        cout << "Northeast has the highest quarterly sales";
    } else if (s2 > s1 && s2 > s3 && s2 > s4) {
        cout << "Southeast has the highest quarterly sales";
    } else if (s3 > s1 && s3 > s2 && s3 > s4) {
        cout << "Northwest has the highest quarterly sales";
    } else if (s4 > s1 && s4 > s2 && s4 > s3) {
        cout << "Southwest has the highest quarterly sales";
    } else {
        cout << "All divisions have equal sales";
    }

}