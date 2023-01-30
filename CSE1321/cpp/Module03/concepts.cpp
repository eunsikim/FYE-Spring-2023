//  Concepts:
//      Booleans
//      Comparison Operators
//          ==          Equal
//          !=          Not equal
//          < and <=    Lesser and Lesser or equal
//          > and >=    Greater and Greater or equal
//      Logical Operators
//          &&          AND
//          ||          OR
//          !           NOT
//      If statements
//      Else statements
//      If/Else if structures
//
//      Switch case statement

#include <iostream>

using namespace std;

int main(){
    int number;
    bool someBooleanVariable = false;

    //  If statements with boolean variable
    if(someBooleanVariable == true){
        std::cout << "SomeBooleanVariable is true";
    }
    else{
        std::cout << "SomeBooleanVariable is not true";
    }

    std::cout << "Enter a number: ";
    std::cin >> number;

    //  If/Else if structure.
    if(number < 5 || number <=5){
        std::cout<< "The number is lesser than 5";
    }
    else if(number == 5){
        std::cout << "The number is equal to 5";
    }
    else{
        std::cout << "The number is greater than 5";
    }

    //  If statements
    if(number > 4){
        std::cout<< "The number is greater than 4";
    }
    if(number == 5){
        std::cout << "The number is equal to 5";
    }
    if(number > 1){
        std::string someString = "Hello World";
        std::cout << "The number is greater than 1 " << someString;
    }

    //  Switch Case Statements
    switch (number)
    {
        case 1:
            std::cout<<"The number is equal to 1";
            break;
        case 2:
            std::cout<<"The number is equal to 2";
            break;
        default:
            std::cout<<"I dont know that number";
            break;
    }


}

