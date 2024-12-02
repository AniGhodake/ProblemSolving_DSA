import java.util.Scanner;

class Print {
    static void printNum(int n) {    //  counting from the n to 0
        if(n<=0) {
            return;
        }
        
        System.out.println(n);

        printNum(n-1);
    }


    static int factorial(int n) {    //   factorial of number
        if(n == 1 || n == 0) {
            return 1;
        }

        return n * factorial(n-1);
    }

    static int pow(int n) {          // power of 2
        if(n==0) {
            return 1;
        }

        return 2 * pow(n-1);
    }

    static int fibonacci(int n) {  // fibonacci nth term 
        if(n == 0) {
            return 0;
        }
        if(n == 1) {
            return 1;
        }

        return fibonacci(n-1) + fibonacci(n-2);
    }

    static int sum(int n) {  // sum of n numbers from n to 0
        if(n == 0) {
            return 0;
        }

        return n + sum(n-1);
    }

}

class Recursion {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        //Print.printNum(n);

        // int result = Print.factorial(n);
        // System.out.println(result);

        // int result = Print.pow(n);
        // System.out.println(result);

        // int result = Print.fibonacci(n);
        // System.out.println(result);

        int result = Print.sum(n);
        System.out.println(result);


    }
}