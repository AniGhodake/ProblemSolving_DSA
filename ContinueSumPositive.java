import java.util.Scanner;

class ContinueSumPositive{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter how many elements you want to give : ");
        int n = sc.nextInt();
        int sum = sumPositive(n);

        System.out.println("Sum of all positive elements that you entered is "+ sum);
    }

    public static int sumPositive(int n){
        Scanner sc = new Scanner(System.in);
        int sum = 0;
        for(int i = 0; i < n; i++){
            System.out.print("Enter a number : ");
            int num = sc.nextInt();
            if(num <= 0){
                continue;
            }
            sum += num;
        }
        return sum;
    }

}