import java.util.Scanner;

class ConcatenateAndConvert{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your first string : ");
        String first = sc.next();
        System.out.print("Enter your second string : ");
        String second = sc.next();

        ConcateAndConvert(first,second);

        // String third = first + second;
        // String result = third.toUpperCase();
        // System.out.println(third);
        // System.out.println(result);
    }
    public static void ConcateAndConvert(String first, String second){
        String result = first.concat(" ").concat(second);
        System.out.println(result);
        result = result.toUpperCase();
        System.out.println(result);
    }
}