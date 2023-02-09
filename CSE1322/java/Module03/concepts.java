//  Concepts:
//      Absctract Classes and Methods
//      Polymorphism

//  Shapes are an abtract idea since shapes are not by itself a real-world object.
abstract class shape{
    //  Every shape has the lenght of one of their sides
    private int lengthOfSide;

    public shape(int lengthOfSide){
        this.lengthOfSide = lengthOfSide;
    } 

    public int getLengthOfSide(){
        return lengthOfSide;
    }

    //  Abstract Methods does not provide a "body", just the header.
    //  The concrete version of the method has to be provided in the child class
    public abstract int getPerimeter(); 

    public abstract int getArea();
}

class square extends shape{
    public square(int lenghtOfSide){
        super(lenghtOfSide);
    }

    //  Provide the actual functionality of the abstract method by overriding it
    @Override
    public int getPerimeter(){
        return super.getLengthOfSide() + super.getLengthOfSide() + super.getLengthOfSide() + super.getLengthOfSide();
    }
}

class triangle extends shape{
    public triangle(int lenghtOfSide){
        super(lenghtOfSide);
    }

    @Override
    public int getPerimeter(){
        return super.getLengthOfSide() + super.getLengthOfSide() + super.getLengthOfSide();
    }

}

public class concepts {
    public static void main(String[] args) {
        shape s1 = new square(6);
        shape t1 = new triangle( 7);

        s1 = new triangle(6);

        shape[] listOfShapes = new shape[5];

        shape[0] = new square(6);
    }
}
