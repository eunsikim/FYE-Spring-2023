//  Loops:
//      Nested Loops

/*  
    The program will generate a random number and evaluate if it this number
    is even or odd. Then, it will ask the user if the use wants to run the program again.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
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

        bool continueBool = true;

        while(continueBool){
            char exit;
            cout << "Do you want to continue? (Y/N): ";
            cin >> exit;
            if(tolower(exit) == 'n'){
                loop = false;
                continueBool = false;
                cout << "Bye" << endl;
            }
            else if(tolower(exit) == 'y'){
                continueBool = false;
            }
            else{
                cout<<"Invalid Input" << endl;
            }
        }
        

        iterationNum++;
    }
}