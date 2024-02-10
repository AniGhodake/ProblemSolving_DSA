#include<iostream>
using namespace std;
#include<limits.h>

int minElement(int arr[], int size){
    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if (arr[i]<min ){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int arr[7];
    int size= 7;
    cout<<"Enter the "<<size<<" array elements : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int minimum = minElement(arr, size);
    cout<<"Minimum Element is : "<<minimum;
}