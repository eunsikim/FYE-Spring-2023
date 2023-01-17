using System;

public class eggCarton{
    public static void Main(){
        int cartonCapacity = 16; // We know that the carton has a capaicty of 16
        int numberOfEggs; // We are going to save the user input in this variable

        Console.WriteLine("How many eggs do you have: "); // Prompt the user
        numberOfEggs = Int32.Parse(Console.ReadLine()); // Read input and store it in the variable

        // Without Casting both integers as float
        float decimal1 = numberOfEggs / cartonCapacity; 
        Console.WriteLine("The carton is " + decimal1 + " full");

        // Casting both integers as float
        float decimal2 = (float) numberOfEggs / (float) cartonCapacity;
        Console.WriteLine("The carton is " + decimal2 + " full");

        // You will notice that the first calculation (decimal1) results without any 
        // decimal numbers even though decimal1 was declared as a float
        // This is because numberOfEggs and cartonCapacity are integers.
    }
}