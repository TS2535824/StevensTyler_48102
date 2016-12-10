#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    unsigned short choose;
    unsigned short maze;
    
    do{
        cout<<"Choose either 1 or 2 \n";
        cin>>choose;
    }while(choose==1&&choose==2);
    
    switch(choose){
        
        case 1:
            maze =10;
            break;
        case 2:
            maze=20;
            break;
       default:
            maze=1;
  }
    
    cout<<maze;
    
    return 0;
}

