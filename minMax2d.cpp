#include<iostream>
using namespace std;
#include<limits.h>

int minArray(int arr[3][3], int row, int col){
    int min = INT_MAX;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j]<min){
                min = arr[i][j];
            }
        }
    }
    return min;
}

int maxArray(int arr[3][3], int row, int col){
    int max = INT_MIN;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    return max;
}


int main(){
    int arr[3][3];
    int row = 3;
    int col = 3;
    cout<<"Enter the "<<row * col <<" array elements : "<<endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    
    int min = minArray(arr, row, col);
    int max = maxArray(arr, row, col);
    cout<<"min : "<<min<<endl;
    cout<<"max : "<<max;
}