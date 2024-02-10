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

int main(){
    int arr[7];
    int size= 7;
    cout<<"Enter the "<<size<<" array elements : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int maximum = maxElement(arr, size);
    cout<<"Maximum Element is : "<<maximum;
}