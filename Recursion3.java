import java.util.*;
class Recursion3 {

    static void print(int arr[], int size){
        for(int i = 0; i < size; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println(" ");
    }

    static int binSearch(int arr[], int start, int end, int target){
       if(start>end){
            return -1;
       }
        int mid = start+(end-start)/2;

        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid] < target){
            return binSearch(arr,mid+1,end,target);
        }
        else{
            return binSearch(arr,start,mid-1,target);
        }
    }

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Size of Array :");

        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the "+n+" array elements :");
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }

        print(arr,n);

        System.out.println("Enter the Target Value");
        int target = sc.nextInt();
        int targetIndex = binSearch(arr,0,n-1,target);
        System.out.println("Target value found at index : "+targetIndex);

    }
}