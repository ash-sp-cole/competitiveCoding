#include <iostream>

using namespace std;


int main () {
int stones {19};
int turnsTaken {};



// stones in pile

// first turn then opponent turn

// can pick 1-3

while ( stones > 0) {
            

    stones -=3;
    if (stones <= 0) {

        cout << " yes winnable";

    }

    stones -=3;


    turnsTaken ++;
 
} 

cout << " \n \n turns taken for game " <<  turnsTaken << endl;




    return 0;
}