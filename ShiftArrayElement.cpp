#include<iostream>
using namespace std;

void shiftArrayElement(int arr[], int size){
    cout<<"Array Elements Before shifting : "<<endl;
    for (int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int temp = arr[size-1];
    for (int i = size-1; i>=0; i--){
        arr[size-1]= arr[size-2];
        size--;
    }
    arr[0] = temp;
//     cout<<"Array Elements After shifting : "<<endl;
//     for (int i = 0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    shiftArrayElement(arr, size);
    cout<<"Array Elements After shifting : "<<endl;
    for (int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}