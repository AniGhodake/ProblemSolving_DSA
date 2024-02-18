#include<iostream>
using namespace std;

void columnWisePrint(int arr[][4], int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {4,5,6,4},
        {5,6,3,2}     
    };
    int row = 4;
    int col = 4;
    columnWisePrint(arr, row, col);
}