import java.util.Scanner;

class AreaCircumference{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Welcome to Area and Circumference Calculator : ");

        System.out.print("Enter the radius of Circle : ");
        int radius = sc.nextInt();
       
        double circum = calCircum(radius);
        System.out.println("Circumference of circle with radius "+radius+" is : "+circum);
        double area = calAreaCircle(radius);
        System.out.println("Area of Circle having radius "+radius+" is : " + area);

    }
    public static double calCircum(int radius){
        double circum = 2 * Math.PI * radius;
        return circum;
    }

    public static double calAreaCircle(int radius){
        double area = Math.PI * Math.pow(radius, 2);
        return area;
    }

}