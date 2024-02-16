#include<iostream>
using namespace std; 
void columnSum(int arr[4][3], int row, int col){   
    for(int i = 0; i < col; i++) {
        int sum=0;
        for(int j = 0; j < row; j++){
            sum  = sum + arr[j][i];
        }
        cout<<"Column sum of the row no."<<i<<" is : "<<sum<<endl;

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
   columnSum(arr, row, col);
}