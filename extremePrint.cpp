#include<iostream>
using namespace std;

void extremePrint(int arr[], int size){
    int left = 0, right = size-1;
    cout<<"Extreme Array Elements are  : ";
    for(; left<=right; left++, right--){
        if(left == right){
            cout<<arr[left];
        }
        else{
            cout<<arr[left]<<" ";
            cout<<arr[right]<<" ";
        }
       
    }
}

int main(){
    int arr[5];
    int size = 5;
    cout<<"Enter the "<<size<<" array elements : ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    } 
    cout<<"Entered Array Elements are  : ";
    for(int i = 0; i < size; i++){
        cout<< arr[i]<<" ";
    } 
    cout<<endl;

    extremePrint(arr, size);
}