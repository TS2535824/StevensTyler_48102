/* 
 * File:   main.cpp
 * Author: Tyler
 *
 * Created on December 11, 2016, 8:48 PM
 */

#include <iostream>
#include <fstream>

using namespace std;

const int SIZE = 3;

int main(int argc, char** argv) {
    ofstream dataFile;
    ifstream outFile;
    int score1,score2,score3,score4;
    int highScore;
    int line;
    int count=0;
    
    cin>>score1;
    cin>>score2;
    cin>>score3;
    cin>>score4;
    
    cout<<"Opening file ...\n";
    
    //Open the file in output mode.
    dataFile.open("demofile.txt",ios::out);
    cout<<"Now writing data to the file.\n";
    dataFile<<score1<<endl;
    dataFile<<score2<<endl;
    cout<<"Now closing the file.\n";
    dataFile.close();
    
    cout<<"Opening the file again...\n";
    //Open the file in append mode.
    dataFile.open("demofile.txt",ios::out|ios::app);
    cout<<"Writing more data to the file.\n";
    dataFile<<score3<<endl;
    dataFile<<score4<<endl;
    
   // dataFile<<name4<<endl;
    cout<<"Now closing the file.\n";
    dataFile.close();
    
    cout<<"Done...\n";
    
    outFile.open("demofile.txt");
    while(outFile>>line){
        if(count==0){
            highScore=line;
            count++;
            
        }else {
            if(line>highScore)
                highScore=line;
        }
        
    }
    outFile.close();
    
    cout<<"High score: "<<highScore;
    

    return 0;
}

