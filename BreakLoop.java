import java.util.Scanner;

class BreakLoop{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        while(true){
            System.out.print("Enter input (if you enter 'exit' then you end this game.)");
            String input = sc.next();
            if(input.equals("exit")){
                System.out.println("You exited from Loop");
                break;
            }
        }
    }
}