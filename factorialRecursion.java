import java.util.*;

class factorialRecursion {

    static long fact(long n){
        if(n == 0 || n == 1){
          return 1;
        }
        return n * fact(n-1);  
    }

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        long   n = sc.nextInt();
        long  ans = fact(n);
        System.out.println(ans);
    }
}