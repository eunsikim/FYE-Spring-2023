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
//      Float division vs Integer Division

using System;

public class concepts{
    public static void Main(){
        Console.WriteLine("-------[Data Types]-------");
        //  Integer Example
        Console.WriteLine("-------[int]-------");
        int someInteger = 5;
        int someOtherInteger;

        // //  Short and Long (Just know they exist, usually we will use integer for most applications)
        Console.WriteLine("-------[short & long]-------");
        short someShortNumber;
        long someLongNumber;

        // //  Float Example
        Console.WriteLine("-------[float]-------");
        float someFloatNumber;

        // //  Double Example
        Console.WriteLine("-------[double]-------");
        double someDoubleNumber;

        // //  Boolean Example
        Console.WriteLine("-------[bool]-------");
        bool someBooleanVariable = false;

        // //  Character Example
        Console.WriteLine("-------[char]-------");
        char someChar = '@';
        Console.WriteLine('a');

        // //  String Examlpe
        Console.WriteLine("-------[string]-------");
        string someString = "Hello World";
        Console.WriteLine($"Console.WriteLine() {someString}");

        //  Constants
        Console.WriteLine("-------[const]-------");
        const int someConstantInteger = 3;
        const char someConstantChar = '@';
        Console.WriteLine(someConstantInteger);

        //  Math Operations
        Console.WriteLine("-------[Math]-------");
        Console.WriteLine(3 / 5);

        //  Modulus - Check if a number is even or odd
        Console.WriteLine("-------[Modulus % Even or Odd]-------");
        int modCalc1 = 5 % 2;
        Console.WriteLine(modCalc1);
        Console.WriteLine(6 % 2);

        //  Modulus - Split a number
        Console.WriteLine("-------[Modulus % Split a number]-------");
        Console.WriteLine(1996 % 1000);

        // //  Casting
        Console.WriteLine("-------[Casting]-------");
      

        //  Float Division
        Console.WriteLine("-------[Float Division]-------");
        float num1 = 8;
        float num2 = 7;

        Console.WriteLine(num1 / num2);

        //  Integer Division
        Console.WriteLine("-------[Integer Division]-------");
        int n1 = 8;
        int n2 = 7;

        Console.WriteLine((float)n1 / (n1 / n2));
    }
}