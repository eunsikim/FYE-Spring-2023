//  Concepts:
//      - Classes
//      - Attributes
//      - Constructors
//          - Default
//          - Overloaded
//      - Functions
//          - Getters and Setters
//      - Override
//          - toString method
//      - Static Variables

class Dog{
    private static int count = 100;
    private int numberOfLegs;
    private String name;
    private int id;

    //  Default Constructor
    public Dog(){
        this.numberOfLegs = 4;
        this.name = "Dog";
        id = count;
        count++;
    }

    //  Overloaded Constructor
    public Dog(int numberOfLegs, String name){
        this.numberOfLegs = numberOfLegs;
        this.name = name;
        id = count;
        count++;
    }

    //  Function
    public void bark(){
        System.out.println("bark");
    }

    //  Overloaded Function (notice the difference)
    public void bark(String customBark){
        System.out.println(customBark);
    }

    //  Setter
    public void setNumberOfLegs(int newNumberOfLegs){
        if(newNumberOfLegs < 0){
            System.out.println("This is not valid");
        }
        else{
            numberOfLegs = newNumberOfLegs;
        }
    }

    //  Getter
    public int getNumberOfLegs(){
        return numberOfLegs;
    }

    //  toString Override
    //  String value of the object
    @Override
    public String toString(){
        return "Dog name: " + name + " Dog ID: " + id;
    }
}


public class classes {
    public static void main(String[] args) {
        Dog d1 = new Dog(5, "Dog1");
        Dog d2 = new Dog();

        d1.bark();
        d1.bark("Hello World");

        System.out.println(d1);
        System.out.println(d2);


        //  Create dog array
        Dog[] dogArray = new Dog[4];

        //  Initialize or construct dogs
        for(int i = 0; i < 4; i++){
            dogArray[i] = new Dog();
        }
        //  Use toString of each dog
        for(int i = 0; i < 4; i++){
            System.out.println(dogArray[i]);
        }
    }
}
