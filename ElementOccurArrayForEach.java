import java.util.Scanner;

class ElementOccurArrayForEach{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("How many elements you want to insert : ");
        int num = sc.nextInt();

        int arr[] = userArray(num);
        System.out.print("Enter which element occurance you want to find out : ");
        int ele = sc.nextInt();
        int count = occurInArray(arr, ele);
        printArray(arr);
        System.out.println("Element "+ele+" occur "+count+" times in entered array.");
    }

    public static int occurInArray(int arr[], int num){
        int count = 0;
        for(int ele : arr){
            if(ele == num){
                count++;
            }
        }
        return count;
    }

    public static int[] userArray(int n){
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[n];
        for(int i = 0; i < n; i++){
            System.out.print("Enter element no. "+(i+1) +" : ");
            arr[i] = sc.nextInt();
        }
        return arr;
    }
    public static void printArray(int arr[]){
        for(int ele: arr){
            System.out.print(ele+" ");
        }
        System.out.println();
    }


}