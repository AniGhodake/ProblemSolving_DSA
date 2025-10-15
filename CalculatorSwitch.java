import java.util.Scanner;

class CalculatorSwitch{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the first Number : ");
        int num1 = sc.nextInt();
        System.out.print("Enter the second Number : ");
        int num2 = sc.nextInt();

        System.out.print("Enter the symbol of operatio like \"  +  -  /  *  \" : ");
        String ch = sc.next();
        float result = arithmeticCalc(num1,num2,ch);
        System.out.println(num1+" "+ch+" "+num2+" = "+result);
    }

    public static float arithmeticCalc(int num1, int num2, String ch){
        return switch(ch){
            case "+" -> num1 + num2;
            case "-" -> num1 - num2;
            case "*" -> num1 * num2;
            case "/" -> num1 / num2;
            default -> -1;
        };
    }
}