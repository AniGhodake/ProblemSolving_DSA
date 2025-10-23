import java.util.Scanner;

class AgeGroup{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Your Age : ");
        int age = sc.nextInt();

        if(age < 13){
            System.out.println("You are Child.");
        }else if(age < 20){
            System.out.println("You are Teen.");
        }else if(age < 60){
            System.out.println("You are Adult.");
        }else if(age > 60){
            System.out.println("You are Senior Citizen.");
        }
    }
}