/*  
    File:   main 
    Author: Tyler Stevens 
    Created on , 2016
    Purpose:   
 */

//System Libraries 
#include <iostream>   //Input/Output objects 
#include <stdlib.h>
using namespace std; //Name-space used in the System Library 


//User Libraries 


//Global Constants 
const char W = 10, H = 5;
unsigned char player = 'S';
unsigned char action;
int posx = 1, posy = 1;

unsigned char maze[H][W] = {
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},   //0
    {'#', ' ', '#', '#', '#', ' ', ' ', ' ', ' ', '#'},   //1
    {'#', ' ', '#', '#', '#', ' ', '#', ' ', ' ', '#'},   //2
    {'#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#'},   //3
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},}; //4
   // 0    1    2    3    4    5    6    7    8    9   

//Function prototypes 
void moveSpy();


//Execution Begins Here! 

int main(int argc, char** argv) {

    while (action != 'Q' || 'q') {

        cout << "Move with wasd.";
        cout << endl;

        maze[posx][posy] = player;

        for (int y = 0; y < H; y++) {
            cout << endl;
            for (int x = 0; x < W; x++) {
                cout << maze[y][x];
            }
        }

        //call move spy function
        moveSpy();

    }
    return 0;
}

void moveSpy() {
    cout << "\nAction:";
    cin>>action;

    int prevposx = posx;
    int prevposy = posy;
    unsigned char space = {32};

    switch (action) {
        case'a':
            ;
            if (maze[posx][posy - 1] != '#') {
                posy--;
                //cout<<posx<<','<<posy<<endl;
                maze[prevposx] [prevposy] = space;
            }
            //system("CLS");
            break;

        case'd':

            if (maze[posx][posy + 1] != '#') {
                posy++;
                // cout<<posx<<','<<posy<<endl;
                maze[prevposx] [prevposy] = space;
            }
            //system("CLS");
            break;

        case's':

            if (maze[posx + 1][posy] != '#') {
                posx++;
                //cout<<posx<<','<<posy<<endl;
                maze[prevposx] [prevposy] = space;
            }
           // system("CLS");
            break;

        case'w':

           if (maze[posx - 1][posy] != '#') {
                posx--;
                // cout<<posx<<','<<posy<<endl;
                maze[prevposx] [prevposy] = space;
            }
         //   system("CLS");
            break;
            
            if(maze[prevposx][prevposy] !=' '){
                cout<<"Winner"<<endl;
            }

        default:
            cout << "Use asdw to move! hurry before you're caught!" << endl;
            break;

    }

}






















