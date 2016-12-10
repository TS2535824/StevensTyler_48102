/* 
 * File:   ABCD
 * Author: Kenzie Vasquez
 * Created on October 4, 2016, 11:21 AM
 * Purpose: Sort letters in order.
 */

#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char char1, char2, char3, char4;
    
    //Input values
    cout<<"Enter A, B, C and D in any order and I will sort them:\n";

    cin>>char1; cin.ignore();
    cin>>char2; cin.ignore();
    cin>>char3; cin.ignore();
    cin>>char4; cin.ignore();
    
    
    //Process values -> Map inputs to Outputs
    /*
    if(char1<char2 && char1<char3){
        if(char2<char3)
            cout<<char1<<" "<<char2<<" "<<char3<<endl;
        else
            cout<<char1<<" "<<char3<<" "<<char2<<endl;
    }
    
    if(char2<char1 && char2<char3){
        if(char1<char3)
            cout<<char2<<" "<<char1<<" "<<char3<<endl;
        else
            cout<<char2<<" "<<char3<<" "<<char1<<endl;
    }
    
    if(char3<char1 && char3<char2){
        if(char1<char2)
            cout<<char3<<" "<<char1<<" "<<char2<<endl;
        else
            cout<<char3<<" "<<char2<<" "<<char1<<endl;
    }
    */
    
    if(char1<char2 && char1<char3 && char1<char4){
        if(char2<char3 && char2<char4){
            if(char3<char4)
                cout<<char1<<" "<<char2<<" "<<char3<<" "<<char4<<endl;
            else if(char4<char3)
                cout<<char1<<" "<<char2<<" "<<char4<<" "<<char3<<endl;
        }
        else if(char3<char2 && char3<char4){
            if(char2<char4)
                cout<<char1<<" "<<char3<<" "<<char2<<" "<<char4<<endl;
            else if(char4<char2)
                cout<<char1<<" "<<char3<<" "<<char4<<" "<<char2<<endl;
        }
    else
        cout<<"There was a problem"<<endl;
    }
    else if(char2<char1 && char2<char3 && char2<char4){
        if(char1<char3 && char1<char4){
            if(char3<char4)
                cout<<char2<<" "<<char1<<" "<<char3<<" "<<char4<<endl;
            else if(char4<char3)
                cout<<char2<<" "<<char1<<" "<<char4<<" "<<char3<<endl;
        }
    else
        cout<<"There was a problem"<<endl;
    }
    
    else{
        cout<<"error"<<endl;
    }
    
    if(char2<char1 && char2<char3){
        if(char1<char3)
            cout<<char2<<" "<<char1<<" "<<char3<<endl;
        else
            cout<<char2<<" "<<char3<<" "<<char1<<endl;
    }
    
    if(char3<char1 && char3<char2){
        if(char1<char2)
            cout<<char3<<" "<<char1<<" "<<char2<<endl;
        else
            cout<<char3<<" "<<char2<<" "<<char1<<endl;
    }
    
    //Display Output
    
    
    //Exit Program
    return 0;
}