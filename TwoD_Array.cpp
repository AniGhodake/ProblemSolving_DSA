#include<iostream>
using namespace std;

void printArray(int arr[][5], int row, int col){
    for(int i =0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
    }
}

int main(){
    int arr[3][5];
    // int arr[3][5]={
    //     {1,2,3,4,5},
    //     {6,7,8,9,10},
    //     {11,12,13,14,15}
    // };
    int row = 3;
    int col = 5;
    cout <<"enter the "<<row*col<<" array elements : "<<endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    printArray(arr, row, col);

    // for(int i = 0; i<row; i++){
    //     for(int j = 0; j<col; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    // }
}