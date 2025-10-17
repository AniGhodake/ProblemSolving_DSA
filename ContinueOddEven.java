import java.util.Scanner;

class ContinueOddEven{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter how many element you want even numbers : ");
        int n = sc.nextInt();
        printOddEven(n);
    }
    public static void printOddEven(int n){
        for(int i = 0; i <= n; i++){
            if(i % 2 == 1){
                continue;
            }
            System.out.print(i+"  ");
        }
    }
}