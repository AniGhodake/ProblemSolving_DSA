#include<iostream>
using namespace std;

void invertedDiagonalOfArray(int arr[][3], int row, int col){
    cout<<"The  Inverted Diagonal elements of the given array is as follows :  ";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i + j == col-1){
                cout << arr[i][j]<<" ";
            }
        }
        
    }
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

    cout<<"The array elements that you have entered is as follows : "<<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    invertedDiagonalOfArray(arr,row,col);
}