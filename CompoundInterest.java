import java.util.Scanner;
import java.lang.*;

class CompoundInterest{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Amount you want to Borrow : ");
        int principle = sc.nextInt();
        System.out.print("Enter the Rate of Interest : ");
        float rate = sc.nextFloat();
        System.out.print("Now, tell me for how many years are you borrowing this money : ");
        float years = sc.nextFloat();

        double interest = principle * Math.pow((1 + rate/100), years);
        System.out.println("\n\n\tYour Compound Interest is : "+ interest);
    }
}