#include<iostream>
using namespace std; 
void rowSum(int arr[4][3], int row, int col){   
    for(int i = 0; i < row; i++) {
        int sum=0;
        for(int j = 0; j < col; j++){
            sum  = sum + arr[i][j];
        }
        cout<<"row sum of the row no."<<i<<" is : "<<sum<<endl;

    }
}

int main(){
    int arr[4][3];
    int row = 4;
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
    
    rowSum(arr, row, col);
}