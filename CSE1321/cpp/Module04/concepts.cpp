//  Loops:
//      For Loops
//      While Loops
//      Do While Loops
//  Random Number Generator
//  Example: Lab3B
//  Example: Even or Odd

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    for(int i = 0; i < 10; i++){
        cout << "Hello World" << endl;
    }
    // i = 0
    // 0 < 3 == TRUE
    // Print Hello World
    // i++ => i = 1
    // 1 < 3 == TRUE
    // Print Hello World
    // i++ => i = 2
    // 2 < 3 == TRUE
    // Print Hello World
    // i++ => i = 3
    // 3 < 3 == FALSE

    int selection = 0;

    while(selection != 3){
        cout << "1 - To do something" << endl;
        cout << "2 - To do another thing" << endl;
        cout << "3 - Exit" << endl;

        cout << "Your selection: ";
        cin >> selection;

        switch(selection){
            case 1: break;
            case 2: break;
            case 3:
                cout << "Bye" << endl;
                break;
        }
        //
    }


    int selection2;

    do{
        cout << "1 - To do something" << endl;
        cout << "2 - To do another thing" << endl;
        cout << "3 - Exit" << endl;

        cout << "Your selection: ";
        cin >> selection2;

        switch(selection2){
            case 1: break;
            case 2: break;
            case 3:
                cout << "Bye" << endl;
                break;
        }
    }while(selection2 != 3);

    //Example Even or Odd
    bool loop = true;
    
    srand((unsigned) time(0));

    int iterationNum = 0;
    
    while(loop){
        int randomNumber = (rand() % 10) + 1; // Generation a number from 1 to 10
        cout << "Iteration: " << iterationNum << endl;
        cout << "Random Number: " << randomNumber << endl;

        if(randomNumber % 2 == 1){
            cout << randomNumber << " is odd" << endl;
        }
        else{
            cout << randomNumber << " is even" << endl;
        }

        char exit;
        cout << "Do you want to continue? (Y/N): ";
        cin >> exit;
        if(tolower(exit) == 'n'){
            loop = false;
            cout << "Bye" << endl;
        }

        iterationNum++;
    }
}