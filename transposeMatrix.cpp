#include<iostream>
using namespace std;

void transposeOfArray(int arr[][3], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = i; j < col; j++){
           swap(arr[i][j],arr[j][i]);
        }     
    }

    cout<<"The Transpose array is as follows :  "<<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
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

    transposeOfArray(arr,row,col);
}