//  Concepts:
//      Data Types
//          Integers (int, short, long)
//          Decimal Numbers (float & double)
//          Boolean (bool)
//          Characters (char) ''
//          Strings (string) ""
//      Constants
//          #DEFINE 
//          const
//      Math Operations
//          Addition +
//          Subtraction -
//          Multiplication *
//          Division /
//          Modulus %
//      Casting
//      Float/Double division vs Integer Division

#include <iostream>

using namespace std;

//  Constants using DEFINE


int main(){
    //  Integer Example
    int someNumber = 9;
    int someOtherNumber;

    // cout<<someNumber + someOtherNumber;
    
    //  Short and Long (Just know they exist, usually we will use integer for most applications)
    short shortNumber = 99;
    long longNumber = 9;

    //  Float Example
    float someFloat = 123.3;

    //  Double Example
    double someDouble = 9.9;

    //  Boolean Example
    bool someBoolean = 0;
    bool someBoolean2 = true;

    //  Character Example
    char c = ' ';
    cout<<'c'<<endl;

    //  Strings Example
    string s = "Hello World";
    cout<<"Hello World"<<endl;

    //  Constants
    const int conversionRate = 9;
    cout << conversionRate;

    //  Math Operations
    int sum = conversionRate + 5;

    cout << conversionRate + 5 << endl;

    //  Modulus - Check if a number is even or odd
    cout << 5 % 2 << endl;

    //  Modulus - Split a number
    cout << 1996 % 10 << endl;

    //  Casting
    //  Float Division
    int n = 7;
    cout << (float)9 / (float)(n + 8) << endl;

    //  Integer Division
    cout << 9 / (n + 8);
    
}