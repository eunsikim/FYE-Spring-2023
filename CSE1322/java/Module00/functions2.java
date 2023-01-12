public class functions2 {
    public static void stringPrinter(String s){
        System.out.println(s);
    }

    public static void main(String[] args){
        stringPrinter("Hello World");

        int n = 123;

        stringPrinter(Integer.toString(n));
    }
}
