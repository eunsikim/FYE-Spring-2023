public class arrays01 {
    public static void main(String[] args){
        int[] numbers = new int[3];

        numbers[0] = 55;
        numbers[1] = 66;
        numbers[2] = 99;

        for(int i = 0; i < numbers.length; i++){
            System.out.println(numbers[i]);
        }
    }
}
