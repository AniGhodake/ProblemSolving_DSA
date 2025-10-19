import java.util.Scanner;

class BitwiseAnd{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the First Number : ");
        int num1 = sc.nextInt();
        System.out.print("Enter the Second Number : ");
        int num2 = sc.nextInt();

        int result = num1 & num2;
        System.out.println("The bitwise and of "+num1+" and "+num2+" is "+result);
    }
}