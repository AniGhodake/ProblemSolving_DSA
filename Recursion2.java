import java.util.*;
import java.util.ArrayList;

class RecFunctions {
   static void printArray(int arr[], int size, int index){
        if(index >= size){
            return;
        }
           
        System.out.println(arr[index]);
       printArray(arr,size,index+1);
   }

    static int search(int arr[], int size, int index, int target){
        if(index >= size){
            return -1;
        }

        if(arr[index] == target){
            return index;
        }

        return search(arr,size,index+1,target);
    }


    static int minimum(int arr[], int size, int index, int minValue) {
        if(index >= size){
            return minValue;
        }

        if(arr[index] < minValue){
            minValue = arr[index];
        }

        return minimum(arr, size, index + 1, minValue);
    }

    static int maximum(int arr[], int size, int index, int maxValue){
        if(index >= size){
            return maxValue;
        }

        if(arr[index] > maxValue){
            maxValue = arr[index];
        }
        
        return maximum(arr,size,index+1,maxValue);
    }


    static int bindex = 0;
    static void store(int arr[], int brr[], int size, int index){
        
        if(index >= size){
            return;
        }
        if(arr[index]%2 == 0){
            brr[bindex] = arr[index];
            bindex++;
        }
        store(arr,brr,size,index+1);
    }


    static void printDigits(int n, ArrayList<Integer> list){
        if(n==0){
            return;
        }

        int rem = n%10;      
        n = n/10;

        printDigits(n,list);
        System.out.print(rem+" ");
        list.add(rem);

    }



}

class Recursion2 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        
        int arr[] = {5, 6, 30, 43, 23, 99, 23,10,12};
        int size = arr.length;
        int index = 0;

        // RecFunctions.printArray(arr, size, 0);

        // int target = 99;
        // int position = RecFunctions.search(arr, size, index, target);
        // System.out.println(position);

        // int minValue = Integer.MAX_VALUE;
        // int minimumValue = RecFunctions.minimum(arr,size,index,minValue);
        // System.out.println(minimumValue);

        // int maxValue = Integer.MIN_VALUE;
        // int maximumValue = RecFunctions.maximum(arr,size,index,maxValue);
        // System.out.println(maximumValue);

        // int brr[] = new int[size];
        // RecFunctions.store(arr,brr,size,index);
        // for(int i = 0; i < size; i++){
        //     System.out.println(arr[i]);
        // }
        // System.out.println(".................................");
        // for(int i = 0; i < size; i++){
        //     System.out.println(brr[i]);
        // }

        ArrayList<Integer> list = new ArrayList<>();
        int n = sc.nextInt();
        RecFunctions.printDigits(n,list);
        System.out.println(list);

    }
}