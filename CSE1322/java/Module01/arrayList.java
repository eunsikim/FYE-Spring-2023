//  Concepts:
//      - Classes
//      - ArrayList
import java.util.ArrayList;

public class arrayList{
    public static void main(String[] args) {
        String[] strArray = new String[2];

        ArrayList<String> strArrList = new ArrayList<>();

        strArray[0] = "Hello";

        //  Adding strings to strArrList
        strArrList.add("Hello");
        strArrList.add("world");
        //  Adding strings to strArrList with specific index
        strArrList.add(1, "WORLD");

        //  Removing item in strArrList specifying its index
        strArrList.remove(1);

        //  Changing an item in strArrList specifying its index
        strArrList.set(0, "HELLO");

        //  Printing the contents of strArrList with get function
        for(int i = 0; i < strArrList.size(); i++){
            System.out.println(strArrList.get(i));
        }

        
    }
}