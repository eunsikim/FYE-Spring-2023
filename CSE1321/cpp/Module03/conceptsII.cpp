//  Concepts:
//      Nested If-Statements
//      String comparrison using .compare("") == 0

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    // string userInput;

    // cout << "Enter something:" << endl;
    // getline (cin, userInput);

    // if (userInput.compare("Bob") == 0) {
    //     cout << "You typed Bob" << endl;
    // }
    // else {
    //     cout << "You didn't type Bob" << endl;
    // }

    float age = 9;

    float number = (age <= 10? 0.0f: 9.99f);

    char ans;
    cout << "Do you have a phone (Y/N)? ";
    cin >> ans;

    if(ans == 'Y' || ans == 'y'){
        cin.ignore();
        string phoneType;
        cout << "Is it an Android or Iphone: ";
        getline(cin, phoneType);

        if(phoneType.compare("Android") == 0){
            cout << "You have an Android" << endl;
        }
        else if(phoneType.compare("Iphone") == 0){
            cout << "You have an Iphone" << endl;
        }
        else{
            cout << "I dont know" << endl;
        }
    }
    else{
        cout << "Bye" << endl;
    }
}

// \n
