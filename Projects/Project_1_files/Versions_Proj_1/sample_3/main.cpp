
/* 
 * File:   main.cpp
 * Author: Tyler
 *
 * Created on October 25, 2016, 9:10 PM
 */

#include <iostream>
#include <stdlib.h>
using namespace std;
//
//const char W = 10, H = 5;
//unsigned char player = 'S';
//unsigned char action;
//int posx = 1, posy = 1;
//
//unsigned char maze[H][W] = {
//    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},   //0
//    {'#', ' ', '#', '#', '#', ' ', ' ', ' ', ' ', '#'},   //1
//    {'#', ' ', '#', '#', '#', ' ', '#', ' ', ' ', '#'},   //2
//    {'#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#'},   //3
//    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},}; //4
//    0    1    2    3    4    5    6    7    8    9   

int main(int argc, char** argv) {
    
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

while(action != 'Q' || 'q'){
    
    //Instructions for user
    cout<<"  ____.                    .__    ___________.__    .__        _____ \n";
    cout<<"    |    | ______  _  __ ____ |  |     \\__    ___/|  |__ |__| _____/ ___\\ \n";
    cout<<"    |    |/ __ \\ \\/ // // __ \\|  |     |    |   |  |  \\|  |/ __ \\   __\\ \n";
   cout<<"/\\__|    \\  ___/\\     /\\  ___/|  |__   |    |   |   Y  \\  \\  ___/|  |   \n";
    cout << "Move with wasd.";
        cout << endl;

    //Placement of Thief in maze. Default position is maze[1][1]
    maze[posx][posy] = player;
  
//Display maze     
    for (int y = 0; y < H; y++) {
       cout << endl;

            for (int x = 0; x < W; x++) 
               {
               cout << maze[y][x]<<flush;
               }
                                  }
    //Inputs direction the thief moves by    
    cout << "\nAction:";
    cin>>action;

    int prevposx = posx;
    int prevposy = posy;
    unsigned char space = {32};

    switch (action) {
        case'a':
            ;
            if (maze[posx][posy - 1] != '#') 
            {
                posy--;
                cout<<posx<<','<<posy<<endl;
                maze[prevposx] [prevposy] = space;}

//            system("clear");
            break;
           
      

        case'd':

            if (maze[posx][posy + 1] != '#') 
            {
                posy++;
                cout<<posx<<','<<posy<<endl;
                maze[prevposx] [prevposy] = space; }
            
//            system("clear");
            break;

        case's':

            if (maze[posx + 1][posy] != '#')
            {
                posx++;
                cout<<posx<<','<<posy<<endl;
                maze[prevposx] [prevposy] = space;}
//            system("clear");
            break;

        case'w':

           if (maze[posx - 1][posy] != '#') 
           {
                posx--;
                // cout<<posx<<','<<posy<<endl;
                maze[prevposx] [prevposy] = space;}
//            system("clear");
            break;
            
        case maze[posx][posy] == maze[1][2]:
            cout<<"Winner"<<endl;
            break;
            
            
            
        default:
            cout << "Use asdw to move! hurry before you're caught!";
            break;

    }
        
       
        
        
 }
    return 0;
}

