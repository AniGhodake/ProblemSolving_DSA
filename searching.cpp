#include<iostream>
using namespace std;

void searchTarget(int arr[][4], int row, int col, int target){
    int flag = 0;
    for(int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if(arr[i][j]==target)
            {
                cout<<"Target element found in array at row : "<<i<<" column : "<<j;
                return;
            }
        }
    }
    cout<<"Target element not found in the given array";
}

int main(){
    int arr[2][4];
    int row = 2;
    int col = 4;
    int target;
    cout<<"enter the "<< row * col <<" array elements : "<<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the Target element : "<<endl;
    cin>>target;

    cout<<"Array Element You have entered is as follows : "<<endl;
    for(int i =0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    searchTarget(arr, row, col, target);


}