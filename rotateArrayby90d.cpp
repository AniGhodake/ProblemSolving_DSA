#include<iostream> 
using namespace std;

void transposeOfArray(int arr[3][3], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = i; j < col; j++){
           swap(arr[i][j],arr[j][i]);
        }     
    }
}

int reverseArrayBest(int arr[3][3], int row, int col){
  
    for (int i = 0; i < row; ++i) {
        int left = 0;
        int right = col - 1;
        while (left <= right) {
            swap(arr[i][left], arr[i][right]);
            left++;
            right--;
        }
    }
}


void rotateArray(int arr[3][3], int row, int col){
    transposeOfArray(arr,row,col);
    reverseArrayBest(arr,row,col);
    cout<<"Rotated array is as follows : "<<endl;
    for(int i = 0; i < row; i++ ){
        for(int j = 0; j < col; j++){
            cout<< arr[i][j] << " ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][3];
    int row = 3; 
    int col = 3;

    cout << "enter the array elements : "<<endl;
    for(int i = 0; i < row; i++ ){
        for(int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
        
    }

    cout<< "array elements that you entered is as follows : "<<endl;
    for(int i = 0; i < row; i++ ){
        for(int j = 0; j < col; j++){
            cout<< arr[i][j] << " ";
        }
        cout<<endl;
    }

    rotateArray(arr, row, col);
}