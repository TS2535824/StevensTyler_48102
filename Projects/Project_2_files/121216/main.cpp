/*
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on December 13, 2016
 * Purpose: Create a maze game the user figures out how to escape
 */

#include <iostream> // Input/Output
#include <fstream> //File objects
#include <string> //String Objects
using namespace std;
//User Libraries

//Global Constants
const int SIZE = 20;//Hold 20 names in a file

//Execution Begins Here!

//Function prototypes
void titleScreen(); //Display title from a file
void playerNames(string); //Copy names from file to one dimensional array
void selectionSort(string[], int); //Sort Previous players names in Z to A order
void showArray(const string[], int); //Display sorted array

//Execution Begins Here!

int main() {
    //Declare Variables  
    const char W = 20, H = 10; //Width and Height of Maze
    unsigned char action; //user input. asdw to move and q to quit
    unsigned short choose;
    unsigned char maze[H][W]; //2D Array Maze
    string name; //record players name

    //Input values
    int posx = 1, posy = 1; //default player
    bool quit = false;
    unsigned char thief = 'X'; //symbol for thief position


    unsigned char maze1[H][W] = {//first maze
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}, //0  
        {'#', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'}, //1
        {'#', ' ', ' ', ' ', '#', ' ', '#', '#', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', '#', ' ', '#'}, //2                      
        {'#', ' ', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#'}, //3  
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', ' ', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', '#'}, //4            
        {'#', '#', '#', '#', '#', '#', ' ', '#', ' ', '#', '#', ' ', '#', '#', ' ', '#', ' ', '#', ' ', '#'}, //5  
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', '#'}, //6  
        {'#', ' ', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', '#', '#', '#', '#', '#', ' ', '#', ' ', '#'}, //7
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' '}, //8
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
    }; //9  
    //0    1    2    3    4    5    6    7    8    9   10   11   12   13   14   15   16   17   18   19

    unsigned char maze2[H][W] = {//second maze
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}, //0  
        {'#', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', '#'}, //1
        {'#', ' ', '#', '#', '#', ' ', '#', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', '#', '#'}, //2                      
        {'#', ' ', ' ', ' ', '#', ' ', ' ', '#', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#', ' ', '#', ' ', '#'}, //3  
        {'#', ' ', '#', ' ', '#', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', '#', ' ', '#'}, //4            
        {'#', ' ', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', '#'}, //5  
        {'#', ' ', ' ', '#', ' ', ' ', '#', '#', ' ', '#', '#', '#', ' ', '#', ' ', ' ', ' ', '#', ' ', '#'}, //6  
        {'#', ' ', '#', '#', ' ', '#', '#', ' ', ' ', '#', ' ', '#', ' ', '#', '#', '#', ' ', ' ', ' ', '#'}, //7
        {'#', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#', '#', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#', ' ', ' '}, //8
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
    }; //9  
    //0    1    2    3    4    5    6    7    8    9   10   11   12   13   14   15   16   17   18   19

    unsigned char maze3[H][W] = {//third maze
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}, //0  
        {'#', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#'}, //1
        {'#', ' ', '#', ' ', '#', '#', '#', ' ', '#', '#', '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', '#'}, //2                      
        {'#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', '#', '#'}, //3  
        {'#', ' ', '#', '#', '#', ' ', '#', ' ', '#', '#', '#', '#', ' ', '#', '#', '#', '#', ' ', '#', '#'}, //4            
        {'#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#', ' ', ' ', ' ', ' ', '#'}, //5  
        {'#', ' ', '#', ' ', '#', '#', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', '#', '#', '#'}, //6  
        {'#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', ' ', '#', ' ', ' ', ' ', ' ', '#'}, //7
        {'#', ' ', '#', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', ' ', ' '}, //8
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
    }; //9  
    //0    1    2    3    4    5    6    7    8    9   10   11   12   13   14   15   16   17   18   19


    //Call Function
    titleScreen();
    //Clear screen
    system("clear");

    cout << "Hello there!\n\n"
            "I am very lucky to have been able to hire such a famous jewel thief.\n\n"
            "Before I give you the details on your next heist what can a call you?\n\n";
    cout << "[Enter a name] ";
    cin>>name;

    cout << "\nAlright " << name << "! Here are your instructions\n\n";


    //Instruction
    cout << "INSTRUCTIONS \n";
    cout << "---------------------------\n";
    cout << "Move Thief Left with:  'a' \n";
    cout << "Move Thief Right with: 'd' \n";
    cout << "Move Thief Up with:    'w' \n";
    cout << "Move Thief Down with:  's' \n";
    cout << "Quit game with:        'q' \n";
    cout << "See instructions with: 'i' \n";
    cout << "---------------------------\n";

    cout << "Which place would you like to target first " << name << "?\n\n";
    //Choose maze
    do {
        cout << "![Enter 1,2, or 3 to load a map]!\n\n";
        cin >> choose;
        cin.clear();
        cin.ignore(3, '\n');
    } while (choose != 1 && choose != 2 && choose != 3); //Input validation. Input must 1,2,or 3

    cout << "Good luck! You are gonna need it...\n";

    switch (choose) {
        case 1://maze 1
            //Copy contents of chosen map's 2D array elements to main array
            for (int i = 0; i < H; i++) {
                for (int j = 0; j < W; j++) {
                    maze[i][j] = maze1[i][j];
                }
            }
            break;
        case 2://maze 2
            //Copy contents of chosen map's 2D array elements to main array
            for (int i = 0; i < H; i++) {
                for (int j = 0; j < W; j++) {
                    maze[i][j] = maze2[i][j];
                }
            }
            break;
        case 3://maze 3
            //Copy contents of chosen map's 2D array elements to main array
            for (int i = 0; i < H; i++) {
                for (int j = 0; j < W; j++) {
                    maze[i][j] = maze3[i][j];
                }
            }
            break;
    }
    //Main game  
    do {
        //Placement of Thief in maze. Default position is maze[1][1]
        maze[posx][posy] = thief;

        //Increments 2D array and displays maze
        for (int y = 0; y < H; y++) {
            cout << endl;

            for (int x = 0; x < W; x++) {
                cout << maze[y][x];
            }
        }

        //Input values for movement  
        cout << "\nAction:";
        cin>>action;

        int prevposx = posx;
        int prevposy = posy;
        unsigned char space = {32};

        //Move player
        switch (action) {
                //Moves thief to the left in the maze
            case'a':
                if (maze[posx][posy - 1] != '#') {
                    posy--;
                    cout << posx << ',' << posy << endl; //displays where in array x is
                    maze[prevposx] [prevposy] = space;
                } //replace 'x' with space
                system("clear"); //clear screen
                break;

                //Moves thief to the right in the maze
            case'd':
                if (maze[posx][posy + 1] != '#') {
                    posy++;
                    cout << posx << ',' << posy << endl; //displays where in array x is
                    maze[prevposx] [prevposy] = space;
                }
                system("clear"); //clear screen
                break;

                //Moves thief down in the maze
            case's':
                if (maze[posx + 1][posy] != '#') {
                    posx++;
                    cout << posx << ',' << posy << endl; //displays where in array x is
                    maze[prevposx] [prevposy] = space;
                }
                system("clear"); //clear screen
                break;

                //Moves thief down in the maze    
            case 'w':
                if (maze[posx - 1][posy] != '#') {
                    posx--;
                    cout << posx << ',' << posy << endl; //displays where in array x is
                    maze[prevposx] [prevposy] = space;
                }
                system("clear"); //clear screen
                break;

                //Display instruction on how to play the game    
            case'i':
                cout << "INSTRUCTIONS \n";
                cout << "---------------------------\n";
                cout << "Move Thief Left with:  'a' \n";
                cout << "Move Thief Right with: 'd' \n";
                cout << "Move Thief Up with:    'w' \n";
                cout << "Move Thief Down with:  's' \n";
                cout << "Quit game with:        'q' \n";
                cout << "Return th beginning    'r' \n";
                cout << "See instructions with: 'i' \n";
                cout << "---------------------------\n";
                break;

                //Quits game    
            case'q':
                quit = true;
                cout << "I am disappointed in you " << name << "...";
                break;
            case 'r':
                posx = 1;
                posy = 1;
                maze[posx][posy] = thief;
                maze[prevposx] [prevposy] = space;
                break;

                //If user does not input asdwq they will be prompt the instruction again
            default:
                cout << "Use asdw to move!I though it was clear in the instructions I handed you...";
        }
        //A cheat code a Genie whispers to the thief and when entered will solve maze
        if ((posx == 3) && (posy == 6)) {
            cout << "A magic entity rises from a lamp and whispers to you \n"
                    "Enter  assdddddddddsddsddsdd at once" << endl;
        }
        //End do while loop
        if ((posx == 8) && (posy == 19)) { //If player reaches posx = 8 and posy = 19 in maze array program ends
            cout << "Congratulations " << name << " you have successfully stolen the jewel!"; //Winners message
            playerNames(name); //Display previous players in Z to A alphabetical order
            quit = true; //Exits do while loop after condition is met
        }
    } while (quit != true); //loop will run while quit does not equal true

    //Exit program
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   titleScreen   ************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here -> Description, Range, Units
//Output:   Outputs to the function here -> Description, Range, Units
//  title screen that is saved in the file "files.txt
//******************************************************************************

void titleScreen() {
    //Declaration of Variables
    char play; //any input will execute program
    int number;
    string title; //variable for the title
    ifstream inFile; //declare input file object
    inFile.open("title.txt"); //open input file object "file.txt"

    if (inFile) { //if inFile was opened successfully
        while (inFile >> title) {
            getline(inFile, title); //while we can read in more input from the file
            cout << title << endl; //display 'words'    
        }
        //Unsuccessful file open
    } else {
        cout << "Error with file" << endl;
    }
    //User input starts game
    cin>>play;
    cin.clear();

    return;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   selectionSort   **********************************
//Purpose:  Sort contents of array from Z to A order
//Inputs:   Inputs to the function here -> Description, Range, Units
// array[]-> 1 dimensional array of strings
//  size->size of array, 20
//Output:   Outputs to the function here -> Description, Range, Units
//  Sorted array
//******************************************************************************

void selectionSort(string array[], int size) {
    //Declaration of variables
    int minIndex;
    string minValue;

    //Selection sort
    for (int startScan = 0; startScan < (size - 1); startScan++) {
        minIndex = startScan;
        minValue = array[startScan];
        for (int i = startScan + 1; i < size; i++) {
            if (array[i] > minValue) {
                minValue = array[i];
                minIndex = i;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }

}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   showArray   **************************************
//Purpose:  Display contents of array
//Inputs:   Inputs to the function here -> Description, Range, Units
//  array[]-> 1 dimensional array of strings
//  size->size of array, 20
//Output:   Outputs to the function here -> Description, Range, Units
//  Players names in z to A order
//******************************************************************************

void showArray(const string array[], int size) {
    //Display array
    for (int i = 0; i < size; i++) {
        cout << array[i] << " " << endl;
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   PlayerNames   ************************************
//Purpose:  Copy contents of a file to a 1 dimensional array
//Inputs:   Inputs to the function here -> Description, Range, Units
//  array[]->1 dimensional array of strings
//  size->size of array, 20
//Output:   Outputs to the function here -> 
//  Display names in array
//******************************************************************************

void playerNames(string name) {
    ofstream dataFile;
    ifstream outFile;
    string thiefs[SIZE];

    // Open the file in append mode.
    dataFile.open("players.txt", ios::out | ios::app);
    //writing more data to file
    dataFile << name << endl;
    //Close file
    dataFile.close();

    //Open file
    outFile.open("players.txt");
    //Copy file to array
    for (int i = 0; i < SIZE; i++) {
        outFile >> thiefs[i];
    }
    //Close file
    outFile.close();

    //Sort array with selection sort
    selectionSort(thiefs, SIZE);

    //Display the values again.
    cout << "\nPast Thieves\n";
    cout << "----------------\n";
    showArray(thiefs, SIZE);

}