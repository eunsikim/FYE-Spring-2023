import java.util.Random;

public class arrays03 {
    public static void main(String[] args){
        int[] numbers = new int[5];

        Random randomObj = new Random();

        for(int i = 0; i < numbers.length; i++){
            numbers[i] = randomObj.nextInt(10) + 1;
        }

        for(int i = 0; i < numbers.length; i++){
            System.out.println(numbers[i]);
        }
    }
}
