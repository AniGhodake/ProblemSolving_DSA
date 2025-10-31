import java.util.Scanner;

class Factorial{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Number : ");
        int num = sc.nextInt();

        if(num == 1 || num == 0){
            System.out.println("The factorial of "+num+" is "+num);
            return;
        }
        int i = 1;
        int fact = 1;
        while(i <= num){
            fact = fact * i;
            i++;
        }
        System.out.println("The factorial of "+num+" is "+fact);
    }
}