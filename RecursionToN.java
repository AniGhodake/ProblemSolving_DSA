import java.util.*;

class RecursionToN {

    static void print(int n){
        if(n == 0){
            return;
        }     
        
        print(n-1);
        System.out.print(n);
        System.out.print(" ");
    }

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        print(n);
    }
}