import java.util.Scanner;

class CheckSorted{
    public static void main(String args[]){
        int arr[] = userArray();
        boolean isSorted = isSorted(arr);
        System.out.println(isSorted ? "Array elements are sorted" : "Array elements are not sorted");
    }

    public static boolean isSorted(int arr[]){
        int i = 1;
        boolean asc = true;
        while(i < arr.length){
            if(arr[i] < arr[i-1]){
                asc = false;
            }
            i++;
        }

        int j = 1;
        boolean desc = true;
        while(j < arr.length){
            if(arr[j] > arr[j-1]){
                desc = false;;
            }
            j++;
        }
        return asc || desc;
    }

    public static int[] userArray(){
        Scanner sc = new Scanner(System.in);
        System.out.print("How many elements you want to enter : ");
        int n = sc.nextInt();
        int nums[] = new int[n];

        int i = 0;
        while(i < nums.length){
            System.out.print("Enter the array element "+i+" : ");
            nums[i] = sc.nextInt();
            i++;
        }
        return nums;
    }
}