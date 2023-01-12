public class functions3 {
    public static int[][] fillArray(int[][] array){
        int[][] newArray = new int[array.length][array[0].length];

        int start = 1;

        for(int i = 0; i < newArray.length; i++){
            for(int j = 0; j < newArray[0].length; j++){
                newArray[i][j] = start++;
            }
        }

        return newArray;
    }

    public static void printArray(int[][] array){
        for(int i = 0; i < array.length; i++){
            for(int j = 0; j < array[0].length; j++){
                System.out.print(array[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args){
        int[][] numbers = new int[3][3];

        numbers = fillArray(numbers);

        printArray(numbers);
    }
}
