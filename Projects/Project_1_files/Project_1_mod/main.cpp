/*
 * File:   main.cpp
 * Author: Tyler
 * Created on October 25, 2016, 9:10 PM
 * Purpose: Create a maze game the user figures out how to escape
 */
 
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
//User Libraries
 
//Global Constants
 
//Execution Begins Here!
 
 //Function prototypes
const char W = 20, H = 10;//Width and Height of Maze
void titleScreen();
 
//Execution Begins Here!
    int main() {    
    //Declare Variables  
    const char W = 20, H = 10;//Width and Height of Maze
    unsigned char thief = 'X';//symbol for thief position
    unsigned char action;//user input. asdw to move and q to quit
    int posx = 1, posy = 1;//default player
    int choose;
    bool quit=false;
    
    //2D Array Maze
    unsigned char  maze[H][W] = {
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}, //0  
        {'#', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#', ' ', '#'}, //1
        {'#', ' ', ' ', ' ', '#', ' ', '#', '#', ' ', '#', '#', '#', ' ', '#', ' ', ' ', ' ', '#', ' ', '#'}, //2                      
        {'#', ' ', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', '#', '#', ' ', '#', ' ', '#', ' ', '#'}, //3  
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', '#'}, //4            
        {'#', '#', '#', '#', '#', '#', ' ', '#', '#', '#', '#', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', '#'}, //5  
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', '#'}, //6  
        {'#', ' ', '#', '#', '#', '#', '#', '#', ' ', '#', '#', '#', '#', '#', '#', '#', ' ', '#', ' ', '#'}, //7
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' '}, //8
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},}; //9  
        //0    1    2    3    4    5    6    7    8    9   10   11   12   13   14   15   16   17   18   19
            
       
   
    //Call Function
    titleScreen();
 
    //Instruction
    cout<<"INSTRUCTIONS \n";
    cout<<"---------------------------\n";
    cout<<"Move Thief Left with:  'a' \n";
    cout<<"Move Thief Right with: 'd' \n";
    cout<<"Move Thief Up with:    'w' \n";
    cout<<"Move Thief Down with:  's' \n";
    cout<<"Quit game with:        'q' \n";
    cout<<"See instructions with: 'i' \n";
    cout<<"---------------------------\n";
    //Quits game when user enter q
     do{
 
        //Placement of Thief in maze. Default position is maze[1][1]
        maze[posx][posy] = thief;
 
       //Increments 2D array
        for (int y = 0; y < H; y++) {
            cout << endl;
           
            for (int x = 0; x < W; x++){
                cout << maze[y][x];
            }
        }
 
        //Inputs direction the thief moves by    
        cout << "\nAction:";
        cin>>action;
 
        //Declaration of variables
        int prevposx = posx;
        int prevposy = posy;
        unsigned char space = {32};
 
        //Input values for Thief movement
        switch (action){
            //Moves thief to the left in the maze
            case'a':
                if (maze[posx][posy - 1] != '#'){
                    posy--;
                    cout<<posx<<','<<posy<<endl;//displays move
                    maze[prevposx] [prevposy] = space;
                } //replace 'x' with space
                system("clear");//clear screen
                break;
 
            //Moves thief to the right in the maze
            case'd':
                if (maze[posx][posy + 1] != '#') {
                    posy++;
                    cout<<posx<<','<<posy<<endl;
                    maze[prevposx] [prevposy] = space;}
                system("clear");
                break;
 
            //Moves thief down in the maze
            case's':
                 if (maze[posx + 1][posy] != '#'){
                    posx++;
                    cout<<posx<<','<<posy<<endl;
                    maze[prevposx] [prevposy] = space;}
                system("clear");
                break;
 
            //Moves thief down in the maze    
            case'w':
                if (maze[posx - 1][posy] != '#'){
                    posx--;
                    cout<<posx<<','<<posy<<endl;
                    maze[prevposx] [prevposy] = space;
                }
                system("clear");
                break;
 
            //Display instruction on how to play the game    
            case'i':
                cout<<"INSTRUCTIONS \n";
                cout<<"---------------------------\n";
                cout<<"Move Thief Left with:  'a' \n";
                cout<<"Move Thief Right with: 'd' \n";
                cout<<"Move Thief Up with:    'w' \n";
                cout<<"Move Thief Down with:  's' \n";
                cout<<"Quit game with:        'q' \n";
                cout<<"See instructions with: 'i' \n";
                cout<<"---------------------------\n";
            break;    
 
            //Quits game    
            case'q':
                quit=true;
                cout<<"See you later!";
                break;
 
            //If user does not input asdwq they will be prompt the instruction again
            default:
                cout << "Use asdw to move! hurry before you're caught!";
        }
       
        //Solving the maze exits the program
        if((posx == 8) && (posy == 19 )){
            cout<<"Winner"<<endl;
            quit=true;}
 
        //A cheat code a Genie whispers to the thief
        if((posx == 8) && (posy == 6 )){
            cout<<"A magic entity rises from a lamp and whispers to you \n"
                  "Enter aaaaawwdddddwwaaaaawwddwdddddsssddddssddwwwwwddsssssssdddd at once"<<endl;
        }
       
        
    }while(quit != true);
   
    return 0;
}
void titleScreen(){
    //Declaration of Variables
    char play;//any input will execute program
    string title;//variable for the title
    ifstream inFile;  //declare input file object
    inFile.open("files.txt"); //open input file object "file.txt"
                                   
    if (inFile) { //if inFile was opened successfully
        while (inFile >> title) {
            getline(inFile,title);//while we can read in more input from the file
            cout << title << endl; //display 'words'    
        }
     //Unsuccessfully tries to open file  
   }else {
        cout << "Error with file" << endl;
   }
   
   //User input starts game
    cin>>play;
   
    return;
}