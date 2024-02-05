#include<iostream>
using namespace std;


void reverse(int arr[],int size){
    int temp,last=size-1,first=0;
    
    for(int i = 0; last>=first; i++){
        temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        last--;
        first++;
    }
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[10]= {10,20,30,40,50,60,70,80,90,99};
    int size = 10;

    reverse(arr,size);
}