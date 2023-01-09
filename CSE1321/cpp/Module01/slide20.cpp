#include <iostream>

using namespace std;

int main(){
    int dobYear; // This variable will hold the year the user was born
    int currentYear; // This variable will hold the current year
    cout<<"What year did you born: "; // Prompt the user
    cin>>dobYear; // Take input and store it in dobYear;
    cout<<"What year are we in: "; // Second prompt for the current year
    cin>>currentYear;

    int age = currentYear - dobYear; // Subtract currentYear to dobYear, then save the result into the variable age
    cout<<"You should be "<<age<<" years old this year"<<endl;
}