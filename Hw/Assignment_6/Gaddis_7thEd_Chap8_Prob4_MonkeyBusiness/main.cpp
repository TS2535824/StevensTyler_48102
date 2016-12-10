/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created November 16, 2016
 * Purpose:  Records4 of how many pounds of food each of three monkey eats 
 *           then calculates the greatest and least amount consumed 
 *           and average amount
 */

//System Libraries Here
#include <iostream> //Input/Output
#include <iomanip> // Output manipulation
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int ROW = 3, COL = 7;
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare variables
    float food[ROW][COL],
          average;
    
    //Input values
    float count=0,//counts each monkeys food
          high=0,//greatest amount eaten by monkey
          low=7;//least mount eaten by monkey
    
    
    for(int m=0;m<ROW;m++){//displays monkey number
         for (int f = 0; f < COL; f++){
            do {
                cout << "Enter how many pounds of food did monkey " << m + 1 << 
                        " ate on day " << f + 1<<endl;
                cin >> food[m][f];//user inputs how much food monkey at
                count += food[m][f];
           
                if (food[m][f] > high) {//calculates great amount eaten
                    high = food[m][f];
              }
                if (food[m][f] <low ) {
                    low = food[m][f];//calculates least amount eaten
              }
       } while(food[ROW][COL] < 0);//Input validation
        }
    }
    //Process values
    average=count/21;
    
    //Display output
    cout<<fixed<<showpoint<<setprecision(2);//moves decimal to two decimal 
                                            //points of accuracy
    cout<<"The average amount of food eaten per day by the whole family was "
        <<average<<" pounds"<<endl;
    cout<<"The least amount of food eaten during the week was "
        <<high<<" pounds"<<endl;
    cout<<"The greatest amount of food eaten during the week was "
        <<low<<" pounds"<<endl;
  
    //Exit
    return 0;
}

