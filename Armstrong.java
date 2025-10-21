import java.util.Scanner;
class Armstrong{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Counter for Armstrong Number(enter value less that 7) : ");
        int num = sc.nextInt();
        int count = 0;
        long i = 0;

        while(count < num){
            boolean isArmstrong = Armstrong(i);
            if(isArmstrong){
                System.out.println("Your Number "+i+" is an Armstrong Number");
                count++;
            }
            i++;   
        }
    }

    public static boolean Armstrong(long num){
        long temp = num;
        long digit;
        long arm = 0;

        while(num > 0){
            digit = num % 10;
            // arm = arm + (digit * digit * digit);      
            arm = arm + (long)Math.pow(digit,2);
            num = num / 10;
        }


        return (arm == temp);
        // if(arm == temp){
        //     return true;
        // }else{
        //     return false;
        // }
    }
}