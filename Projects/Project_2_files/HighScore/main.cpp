/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Tyler
 *
 * Created on December 11, 2016, 5:11 PM
 */
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void highScore(int);
void display_members(int);

int main(int argc, char** argv) {
    int score;
    
    cout<<"Enter score ";
    cin>>score;
   
    highScore(score);
    display_members(score);

    return 0;
}
void highScore(int score){
    ofstream fout;
    fout.open("Highscore.TXT");
    fout<<score<<endl;
    fout.close();    
}
void display_members(int getcontent){
    ifstream openfile ("Highscore.txt");
    if(openfile.is_open()){
        while(! openfile.eof()){
            openfile >> getcontent;
            cout << getcontent << endl;
        }
    }
}