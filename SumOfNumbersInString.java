import java.util.Scanner;

public class SumOfNumbersInString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an alphanumeric string: ");
        String str = sc.next();
        sc.close();

        int sum = 0, num = 0;

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);

            if (ch >= '0' && ch <= '9') { // Check if the character is a digit
                num = num * 10 + (ch - '0'); // Forming the number
            } else {
                sum += num; // Add the extracted number to sum
                num = 0; // Reset num for the next number
            }
        }
        
        sum += num; // Add the last number if any

        System.out.println("Sum of numbers in string: " + sum);
    }
}
