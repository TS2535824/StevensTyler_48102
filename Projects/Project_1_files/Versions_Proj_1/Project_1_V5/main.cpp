/*
 * File:   main.cpp
 * Author: Tyler
 *
 * Created on October 25, 2016, 9:10 PM
 */
 
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <ostream>
using namespace std;
//User Libraries

//Global Constants

//Execution Begins Here!

 //Function prototypes
void titleScreen();
//Execution Begins Here!
int main(int argc, char** argv) {
    
//Declare Variables   
const char W = 10, H = 5;//Width and Height of Maze
unsigned char thief = 'X';//symbol for thief position
unsigned char action;//user input. asdw to move and q to quit
int posx = 1, posy = 1;//default player
bool quit=false;
 
//2D Array Maze
unsigned char maze[H][W] = {
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#','#','#', '#', '#','#'},   //0
    {'#', ' ', '#', '#', '#', ' ', ' ', ' ', ' ', '#'                       '#'  },   //1
    {'#', ' ', ' ', '#', '#', ' ', '#', ' ', ' ', '#'                       '#' },   //2
    {'#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#'                       '#'},   //3
    {'#',             
    
    
    
    
                                                                            },}; //4
   // 0    1    2    3    4    5    6    7    8    9   10  11  12  13  14  15

//Call Function
titleScreen();
 
//Quits game when user enter q
 while(quit != true){
   
    //Instructions for user
    cout << "Move with wasd.";
        cout << endl;
 
    //Placement of Thief in maze. Default position is maze[1][1]
    maze[posx][posy] = thief;
 
   
    for (int y = 0; y < H; y++) {
       cout << endl; 
            for (int x = 0; x < W; x++){
               cout << maze[y][x];}
    }
    
    //Inputs direction the thief moves by    
    cout << "\nAction:";
    cin>>action;
 
    int prevposx = posx;
    int prevposy = posy;
    unsigned char space = {32};
 
    switch (action) {
        
        //Moves thief to the left in the maze
        case'a':
            ;
            if (maze[posx][posy - 1] != '#'){
                posy--;
                //cout<<posx<<','<<posy<<endl;
                maze[prevposx] [prevposy] = space;}
            system("clear");
            break;
            
        //Moves thief to the right in the maze 
        case'd':
            if (maze[posx][posy + 1] != '#') {
                posy++;
                //cout<<posx<<','<<posy<<endl;
                maze[prevposx] [prevposy] = space;}
            system("clear");
            break;
            
        //Moves thief down in the maze
        case's':
             if (maze[posx + 1][posy] != '#'){
                posx++;
                //cout<<posx<<','<<posy<<endl;
                maze[prevposx] [prevposy] = space;}
            system("clear");
            break;
 
        //Moves thief down in the maze    
        case'w':
            if (maze[posx - 1][posy] != '#'){
                posx--;
                // cout<<posx<<','<<posy<<endl;
                maze[prevposx] [prevposy] = space;}
            system("clear");
            break;
           
        //Quits game     
        case'q':{
            quit=true;
            cout<<"See you later!";
            break;
        }

        //If user does not input asdwq they will be prompt the instruction again
        default:
            cout << "Use asdw to move! hurry before you're caught!";
            break;
    }
    if((posx == 3) && (posy == 8 )){
        cout<<"Winner"<<endl;
        quit=true;}
    }
    return 0;
}
void titleScreen(){
    char play;
   
    string words, input;
    ifstream inFile;  //declare input file object
    ofstream outFile; //declare output file object
    inFile.open("files.txt"); //open input file object "file.txt"
                                   
    if (inFile) { //if inFile was opened successfully
        
        while (inFile >> words) { 
            getline(inFile,words);//while we can read in more input from the file
            cout << words << endl; //display 'words'
           
        }
    } else {
        cout << "Error with file" << endl;
    }
   
 cin>>play;
   return;
}