//  Concepts: 
//      Interfaces

import java.util.Scanner;

interface iTest{
    public void someFunction();
} 

class test implements iTest{
    @Override
    public void someFunction(){
        System.out.println("This is a test of an interface");
    }
}

class student{
    private int id;
    private static int idCount = 0;
    private String name;

    public student(String name){
        this.name = name;
        id = idCount;
        idCount++;
    }

    @Override
    public String toString(){
        return name + " " + id;
    }
}

public class conceptsII{
    

    public static void main(String[] args){
        student s1 = new student("John");
        student s2 = new student("Eun Sik");
        student s3 = new student("Mark");

        System.out.println(s1);
        System.out.println(s2);
        System.out.println(s3);
    }
}
