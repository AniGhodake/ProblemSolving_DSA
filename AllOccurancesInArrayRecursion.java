import java.util.Scanner;

class AllOccurancesInArrayRecursion {
    

    static void OccuranceIndex(int arr[], int size, int index,int target){
        if(index >= size){
            return;
        }

        if(arr[index] == target){
            System.out.println(index);
        }

        OccuranceIndex(arr,size,index+1,target);
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[7];
        int size = 7;
        int index = 0;
        int target = 10;
        System.out.println("Enter the 7 Array Elements :");
        for(int i = 0; i < 7; i++){
            arr[i] = sc.nextInt();
        }

        System.out.println("Array Elements are : ");
        for(int i = 0; i< 7; i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println(" ");

        OccuranceIndex(arr,size,index,target);
    }
}