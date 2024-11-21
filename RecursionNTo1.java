import java.util.*;

class RecursionNTo1{

    static void print(int n){
        if(n == 0){
            return;
        }     
        
        System.out.print(n);
        System.out.print(" ");

        print(n-1);
       
    }

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        print(n);
    }
}