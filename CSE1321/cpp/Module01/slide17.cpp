#include <iostream>
#include <string> //To use getline() we need to include this library

using namespace std;

int main(){
    string name;
    cout<<"What is your name: ";
    getline(cin, name); //This is what we call a function, whatever we have between the parenthesis we call them parameters.
    // For getline() function, we need 2 parameters. The first one will always be cin.
    // The second parameter is going to be the variable we want to store the input to. 
    cout<<"Your age is "<<name<<endl;
}