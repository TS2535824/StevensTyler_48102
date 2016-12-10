/* 
   File:   main
   Author: Tyler
   Created on October 18th
   Purpose:  Menu for Assignment 4
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>      //Log
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
float GRAVITY=6.673e-8f;  //Universal Gravity Constant cm^3/g/sec^2
float CNKGGRM=1000;       //Conversion from KG to Grams
float CNSGGRM=14593.9;    //Conversion from Slugs to Grams
float CNKMMET=1000;       //Conversion from Km to Meters
float CNMETCM=100;        //Conversion from Meters to Centimeters
float CNDYNLB=2.24809e-6f;//Conversion from Dynes to Pounds
float CNSGLBS=32.174f;    //Conversion from slugs to lbs which oddly acceleration of gravity in ft/sec^2


//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Problem Sum of Numbers"<<endl;
        cout<<"2.  Type 2  for Problem Characters for the ASCII"<<endl;
        cout<<"3.  Type 3  for Problem Ocean Levels"<<endl;
        cout<<"4.  Type 4  for Problem Calories Burned"<<endl;
        cout<<"5.  Type 5  for Problem Membership Fees Increase"<<endl;
        cout<<"6.  Type 6  for Problem Distance Traveled"<<endl;
        cout<<"7.  Type 7  for Problem Pennies for Pay"<<endl;
        cout<<"8.  Type 8  for Problem Average Rainfall"<<endl;
        cout<<"9.  Type 9  for Problem Guessing Game"<<endl;
        cout<<"10. Type 10 for Problem Weighing "<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:{
                cout<<"Inside Problem Sum of Numbers"<<endl;
                
                /*Purpose: Calculates the sum of all integers from 
 *              1 up to the number entered by the user.*/
                
               //Declaration of Variables
            int sum;//sum all integers in number entered
            int num;//number 
    
            //Input values
            cout<<"Please enter a positive integer value \n";
            cin>>num;
    
            //Process values -> Map inputs to Outputs
            while(num<0){//loops until positive integer is entered
            cout<<"Incorrect entry! Please enter a positive integer value \n";
            cin>>num;//re-entry of the variable 
            
         }
             while(num>0)
             {
             sum+=num;//sum = sum + number
             --num;//prefix mode
             }
    
    //Display Output
    cout<<"The sum of all integers from 1 to the number entered is "<<sum<<endl;
                break;
            }
            case 2:{
                cout<<endl;
                cout<<"Inside Problem Characters for the ASCII"<<endl;
                /*Purpose:  Display characters for ASCII codes 0 through 127*/
                 //Declare all Variables Here
                int line = 1;
    
    //Processes and Display output
                 for (int ascii = 0; ascii < 127; ascii++) 
                 {//initialize,test, and update
                     cout << static_cast<char> (ascii); // static_cast<conversion>(variable to convert)
                         while (line > 16) {//displays only 16 characters on a line
                            cout << endl;
                          line = 1;
                 }
                    line++;
                 }
              
                break;
            }
            case 3:{
                cout<<endl;
                cout<<"Inside Problem Ocean Levels"<<endl;
                /*Purpose:Displays a table showing the number of millimeters that the ocean
 *                        will have risen in each year for the next 25 years*/
                 //Declare all Variables Here
                float rise;

    //Loop, process, and Output chart
                for(int year=1;year<=25;year++){//initialize, test, and update loop
                    rise=year*1.5;
                    cout<<"The ocean level will rise "<<rise<<" millimeters in " 
                         <<year<<" year(s)"<<endl;
        
       }
                break;
            }
            case 4:{
                cout<<endl;
                cout<<"Inside Problem Calories Burned"<<endl;
                /*Purpose: Determines how may calories are burned on a
                         particular treadmill for a certain amount of minutes*/
                 //Declaration of Variables
                float burn;//calories burned
                int loop=1;//incrementing 
                //Input values
                for(float min=1;min<=30;min++){
                    loop++;
                    burn=min*3.9;
                    while(loop>5){
                        cout<<"You have burned "<<burn<<" calories in "<<min<<" minutes"<<endl;
                        loop=1;
        }
    }
                
                break;
            }
            case 5:{
                cout<<endl;
                cout<<"Inside Problem Membership Fees Increase"<<endl;
                /*Purpose:  Calculate country club membership fee that rises 4% each year.*/
                
                //Declaration of Variables
                float cost,fee=2500;
    
                //Input values 
                 for(int year=1;year<=6;year++){
                     cost=(fee*0.04);
                     fee+=cost;
        
                     cout<<fee<<endl;
         }
                break;
            }
            case 6:{
                cout<<endl;
                cout<<"Inside Problem Distance Traveled"<<endl;
                /*Purpose:Displays distance a vehicle has traveled for each hour
                          of the time period entered by the user*/
                //Declare all Variables Here
                int speed, totl;

                //Input or initialize values Here
                cout<<"What is the speed of the vehicle in mph? ";
                cin>>speed;
                cout<<"How many hours has it traveled? ";
                cin>>totl;
                cout<<"Hour         Distance Traveled \n";
                cout<<"------------------------------ \n";

                //Process/Calculations Here
                for(float hours=1;hours<=totl;hours++){
                    int dT=hours*speed;

                    cout<<hours<<"            "<<dT<<endl;

                }
                break;
            }
            case 7:{
                cout<<endl;
                cout<<"Inside Problem Pennies for Pay"<<endl;
                /*Purpose: Calculates how much the user would earn in the days they worked
                          if their salary started at one penny and double each day they work.*/
                 //Declaration of Variables 
                int days;
                float pay=.01, totl;

                //Input values 
                cout<<"How many days have you worked? ";
                cin>>days;

                while (days<1)//entry must be greater than 0
                {
                    cout<<"Invalid entry! please enter a number greater than 0 ";
                    cin>>days;

                }
                //set the numeric output formatting
                cout<<fixed<<showpoint<<setprecision(2);

                //Display table heading
                cout<<"Days\tPay\n";
                cout<<"--------------\n";

                //Display output
                for(int day=1;day<=days;++day)
                {
                    //Calculate pay
                    pay*=2;
                    totl+=pay;

                    //Display days worked and pay per day.
                    cout<<day<<"\t"<<pay<<" $"<<endl;

                }
                //Display total
                cout<<"Total \n";
                cout<<"--------------\n";
                cout<<totl<<" $"<<endl;
                break;
            }
            case 8:{
                cout<<endl;
                cout<<"Inside Problem Average Rainfall"<<endl;
                /*Purpose:Calculates average rainfall for a set amount of years*/
                //Declaration of Variables 
                float inchR, totlR;
                int years,month;

                //Set up numeric output formatting
                cout<<fixed<<showpoint<<setprecision(2);


                //Input values 
                do {
                    cout<<"Enter the number of years you wish to calculate average rain for ";
                    cin>>years;
                }while (years<=0);

                //Process values 
                for(int year=1;year<=years;year++)
                {
                    for(month=1;month<=12;month++)
                    {
                        //Input value for inches of rain
                        do{
                            cout<<"Enter inches of rain for month "<<month<<endl;
                            cin>>inchR;
                        }while (inchR<=-1);

                        //Process values 
                        totlR+=inchR;
                    }
                }

                //Display Output 
                cout<<"Total number of months: "<<years*12<<endl;
                cout<<"Total inches of rainfall: "<<totlR<<endl;
                cout<<"Average rain fall(in inches): "<<totlR/(years*12)<<endl;
                break;
            }
            case 9:{
                cout<<endl;
                cout<<"Inside Problem Guessing Game"<<endl;
                /*Purpose: Guessing Game*/
                
                //Set the random number seed
                srand(static_cast<unsigned int>(time(0)));

                //Declaration of Variables
                int range,nGuess;
                int number,answer;

                //Input values
                cout<<"This is the guessing game"<<endl;
                cout<<"Choose a range for the number to guess"<<endl;
                cin>>range;

                //Process values -> Map inputs to Outputs
                nGuess=log(range)/log(2)+1;
                cout<<"You have "<<nGuess<<" guesses to find the random number"<<endl;
                number=rand()%(range+1); //[0,range]

                //Display Results of each Guess
                for(int guess=1;guess<=nGuess;guess++){
                    cout<<"Input your guess"<<endl;
                    cin>>answer;
                    if(answer>number)cout<<"Guess to High"<<endl;
                    else if(answer<number)cout<<"Guess to Low"<<endl;
                    else{
                        cout<<"You guessed the number"<<endl;
                        exit(0);
                    }
                }
                cout<<"Sorry too many guesses"<<endl;
                            //Input values
                            //Process values -> Map inputs to Outputs 
                            //Display Output
                break;
            }
            case 10:{
                cout<<endl;
                cout<<"Inside Problem WeighingIn"<<endl;
                /*Purpose: Calculate your weight*/
                //Declaration of Variables
                float msEarth=5.972e24;//Google lookup -> Kilograms
                float msMark=6.0f;     //Mass of Mark -> Slug
                float rdEarth=6371.0f; //Google radius of the earth km
                float weight;          //Force of attraction from Physics

                //Conversion of inputs
                msEarth*=CNKGGRM;      //Convert mass of the earth to grams
                msMark*=CNSGGRM;       //Convert mass of mark to grams
                rdEarth*=CNKMMET*CNMETCM;//Convert the radius of the earth to centimeters

                //Process values -> Map inputs to Outputs
                weight=GRAVITY*msMark*msEarth/rdEarth/rdEarth;//Weak force attraction due to Gravity
                weight*=CNDYNLB;      //Convert dynes to pounds

                //Display Output
                cout<<"According to the Weak Force of Gravity Mark weighs = "<<weight<<"lbs"<<endl;
                cout<<"As a check Mark weighs = "<<6*CNSGLBS<<"lbs"<<endl;
                cout<<"The percentage error in the Radius of Earth = +-"<<100.0f*18/6371<<"%"<<endl;
                cout<<"The margin of error for the weight = "<<(weight-6*CNSGLBS)/weight*100.0f<<"%"<<endl;
    
                break;
            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}