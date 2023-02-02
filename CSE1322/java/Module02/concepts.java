//  Concepts:
//      More ArrayList funcitons
//          Remove by object
//          Is Empty
//      Inheritance
//          super() = parent
//      Pass by reference vs Pass by value

import java.util.ArrayList;

class animal{
    public String name;
    public boolean isAlive;

    public animal(String name){
        this.name = name;
        this.isAlive = true;
    }

    public String makeSound(){
        return "Animal Sound";
    }
}

class dog extends animal{
    public float lengthOfTail;

    public dog(float lengthOfTail, String name){
        super(name);
        this.lengthOfTail = lengthOfTail;
    }

    @Override
    public String makeSound(){
        return "Bark";
    }
}

class bird extends animal{
    public boolean canFly;

    public bird(boolean canFly, String name){
        super(name);
        this.canFly = canFly;
    }

    @Override
    public String makeSound(){
        return "Chirp";
    }
}

public class concepts{
    //  When objects are passed as a parameter for a function, a copy of the refenrece is passed as a value
    //  This copy of the refenrece is actually a pointer to the memory address the object is located
    //  If we make a change in the method to the content of the object, the change is made to the actual object
    //  If we change this reference, then whatever change is done, is not reflected into the original object
    public static void arrayListChangeContent(ArrayList<Integer> list){
        list.set(0, 40);
    }

    public static void arrayListChangeReference(ArrayList<Integer> list){
        list = new ArrayList<>();

        list.add(900);
    }

    public static void main(String[] args) {
        //  Pass by reference and Pass by Value with objects in Java
        ArrayList<Integer> integerList = new ArrayList<>();

        integerList.add(30);
        System.out.println(integerList.get(0));

        arrayListChangeContent(integerList);
        System.out.println(integerList.get(0));

        arrayListChangeReference(integerList);
        System.out.println(integerList.get(0));

        //  Example of isEmpty() and remove by object
        ArrayList<animal> animalList = new ArrayList<>();

        if(animalList.isEmpty()){
            System.out.println("The list is empty");
        }

        animalList.add(new animal("Dog"));
        animalList.add(new animal("Bird"));

        for(animal a : animalList){
            System.out.println(a.name);
        }
        System.out.println();

        animal temp = animalList.get(0);

        animalList.remove(new animal("Dog"));
        for(animal a : animalList){
            System.out.println(a.name);
        }

        if(!animalList.isEmpty()){
            System.out.println("The list is not empty");
        }

        //  Inheritance
        dog d1 = new dog(40.3f, "Some Dog");

        bird b1 = new bird(true, "Some Bird");

        System.out.println(d1.makeSound());
        System.out.println(b1.makeSound());
    }
}