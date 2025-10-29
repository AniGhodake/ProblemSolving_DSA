import java.util.Scanner;

class DeleteFromArray{
    public static void main(String arga[]){
        int arr[] = userArray();
        int brr[] = deletingArray(arr);
        printArray(brr);
    }

    public static int[] deletingArray(int arr[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Array Element you want to delete : ");
        int ele = sc.nextInt();
        
        int occur = occurances(arr,ele);
        int newArraylength = arr.length - occur;
        int brr[] = new int[newArraylength];

        int i = 0;
        int j = 0;
        while(j < brr.length){
            if(arr[i] == ele){
                i++;
                continue;
            }
            brr[j] = arr[i];
            i++;
            j++;
        }
        return brr;
    }

     public static int occurances(int nums[], int n){
        int count = 0;
        int i = 0;
    
        while(i < nums.length){
            if(nums[i] == n){
                count++;
            }
            i++;
        }
        return count;
    }

    public static void printArray(int arr[]){
        int i = 0;
        System.out.println("\nArray elements after deletion is :");
        while(i < arr.length){
            System.out.print(+arr[i]+"  ");
            i++;
        }
    }

    public static int[] userArray(){
        Scanner sc = new Scanner(System.in);
        System.out.print("\nHow many elements you want to enter ? : ");
        int n = sc.nextInt();
        int nums[] = new int[n];

        int i = 0;
        while(i < nums.length){
            System.out.print("Enter the array element no. "+i+" : ");
            nums[i] = sc.nextInt();
            i++;
        }
        return nums;
    }
}