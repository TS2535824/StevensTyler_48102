/*  
    File:   main 
    Author: Tyler Stevens 
    Created on September 13th, 2016, 9:35 PM
    Purpose:   Display diamond pattern
 */  
 
 //System Libraries 
 #include <iostream>   //Input/Output objects 
 using namespace std;  //Name-space used in the System Library 
 
 
 //User Libraries 
 
 
 //Global Constants 
 
 
 //Function prototypes 
 
 
 //Execution Begins Here! 
 int main(int argc, char** argv) { 
   //Declaration of Variables 
   char s=' ';//The space character 
   char c;    //Character used to create diamond pattern 
     
   //Input values 
    cout<<"What character would you like to use to make a Big C, input\n"; 
   cin>>c; 
     
   //Process values -> Map inputs to Outputs 
    
    //Display Output -> Diamond pattern 
    cout<<s<<s<<s<<c<<s<<s<<endl; 
    cout<<s<<s<<c<<c<<c<<s<<endl; 
    cout<<s<<c<<c<<c<<c<<c<<endl; 
    cout<<c<<c<<c<<c<<c<<c<<c<<endl; 
    cout<<s<<c<<c<<c<<c<<c<<endl; 
    cout<<s<<s<<c<<c<<c<<s<<endl; 
    cout<<s<<s<<s<<c<<s<<s<<endl; 
  

 
     //Exit Program 
     return 0; 
 } 
