import java.util.Scanner;

class DiagonalSumIn2D{
    public static void main(String args[]){
        int arr[][] = userArray();
        printArray(arr);
        int sum = diagonalSum(arr);
        System.out.println("The Sum of Diagonal Sum is : "+sum);
    }

    public static int diagonalSum(int arr[][]){
        int sum = 0;
        int leftdiagonal = 0;
        int rightdiagonal = 0;
        int row = arr.length;
        int col = arr[0].length;

        int i = 0;
        while(i < row){
            leftdiagonal = leftdiagonal + arr[i][i];
            i++;
        }

        // i = 0;
        // while(i < row){
        //     int j = arr.length - 1 - i;
        //     rightdiagonal = rightdiagonal + arr[i][j];        --------- good way without 2nd loop
        //     i++;
        // }
        i = 0;
        while(i < row){
            int j = 0;
            while(j < col){
                if(i + j == row-1){
                    rightdiagonal = rightdiagonal + arr[i][j];
                }
                j++;
            }
            i++;
        }
        


        sum = leftdiagonal + rightdiagonal;
        if(arr.length % 2 != 0){
            int index = arr.length/2;
            sum = sum - arr[index][index];
        }
        return sum;
    }

    public static void printArray(int arr[][]){
        System.out.println();
        int rows = arr.length;
        int cols = arr[0].length;
        int i = 0;

        while(i < rows){
            int j = 0;
            while(j < cols){
                System.out.print(arr[i][j]+" ");
                j++;
            }
            i++;
            System.out.println();
        }
    }

    public static int[][] userArray(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter no. of rows : ");
        int rows = sc.nextInt();
        System.out.print("Enter no. of cols : ");
        int cols = sc.nextInt();
        int arr[][] = new int[rows][cols];

        int i = 0;
        while(i < rows){
            int j = 0;
            while(j < cols){
                System.out.print("Enter element for row :"+i+" and col "+j+" : ");
                arr[i][j] = sc.nextInt();
                j++;
            }

            i++;
        }
        return arr;
    }
}