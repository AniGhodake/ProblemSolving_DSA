#include<iostream>
using namespace std;
#include<limits.h>

int maxElement(int arr[], int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if (arr[i]>max ){
            max = arr[i];
        }
    }
    return max;
}

int MaxNoRow(int arr[4][4], int row, int col){ 
    int arr2[row];
    for(int i = 0; i < row; i++ ){
        int onesCount = 0;
        for(int j = 0; j < col; j++){
            if(arr[i][j]==1){
                onesCount++;
            }
        }
        cout<<onesCount<<endl;
        arr2[i] = onesCount;
    }
    int max = maxElement(arr2,row);
    return max;
}

int main(){
    int arr[4][4];
    int row = 4;
    int col = 4;
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

    int max = MaxNoRow(arr,row, col);
    cout<< "Row with the Maximum ones is Row No."<<max;
}