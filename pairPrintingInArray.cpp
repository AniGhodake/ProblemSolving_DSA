#include<iostream>
using namespace std;

void pairPrinting(int arr[], int size){
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size; j++){
            cout <<"("<<arr[i]<<","<<arr[j]<<")  ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[]= {1,2,3};
    int size= 3;
    pairPrinting(arr, size);   
    // for(int i = 0; i<size; i++){
    //     cout<<arr[i];
    // }
}