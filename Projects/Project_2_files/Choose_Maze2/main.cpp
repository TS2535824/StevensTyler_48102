/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Tyler
 *
 * Created on December 9, 2016, 9:26 PM
 */

#include <iostream>
 
using namespace std;
 
const int SIZE = 3;
const int COL = 3;
 
int main(int argc, char** argv) {
    unsigned short choose;
    unsigned char maze[SIZE][COL];
   
    unsigned char maze1[SIZE][COL] = {{'a', 'b', 'c'},
                                       {'d', 'e', 'f'},
                                       {'g', 'h', 'i'}};
   
    unsigned char maze2[SIZE][COL] = {{'j', 'k', 'l'},
                                       {'m', 'n', 'o'},
                                       {'p', 'q', 'r'}};
 
    do {
        cout << "Choose either 1 or 2 \n";
        cin >> choose;
    } while (!(choose == 1 || choose == 2));
 
    switch (choose) {
        case 1:
            //Copy contents of chosen map's 2D array elements to main array
            for (int i = 0; i < SIZE; i++){
                for (int j = 0; j < COL; j++){
                    maze[i][j] = maze1[i][j];
                }
            }
           
            break;
           
        case 2:  
            //Copy contents of chosen map's 2D array elements to main array
            for (int i = 0; i < SIZE; i++){
                for (int j = 0; j < COL; j++){
                    maze[i][j] = maze2[i][j];
                }
            }
           
            break;
           
        default:
            //Look at case 1 (but used by default)
            for (int i = 0; i < SIZE; i++){
                for (int j = 0; j < COL; j++){
                    maze[i][j] = maze1[i][j];
                }
            }
    }
 
    cout << endl;
   
    for (int i = 0; i < SIZE; i++){
        //cout<<endl;
        for (int j = 0; j < COL; j++){
            cout << maze[i][j] << (j == 2 ? "\n" : " ");
        }
    }
 
    return 0;
}