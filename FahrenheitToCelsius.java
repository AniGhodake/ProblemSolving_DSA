import java.util.Scanner;

class FahrenheitToCelsius{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Temperature in Fahrenheit : ");
        float fah = sc.nextFloat();

        float cel = (fah - 32) * 5/9;

        System.out.println("\n\t"+fah+" is equal to "+cel+" degree celsius");
    }
}