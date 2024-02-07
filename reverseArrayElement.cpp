#include<iostream>
using namespace std;

// int reverseArray(int arr[],int arr2[], int size){
//     for(int i=0, j =size-1 ; i<size, j>=0; i++,j--){
//         arr2[j]= arr[i];
//     }
// }


int reverseArrayBest(int arr[], int size){
    int left = 0, right = size-1;
    for(int i = left; left<=right; left++, right--){
        swap(arr[left], arr[right]);
    }
}

int main(){
    int arr[5];
    int arr2[5];
    int size =5;
    
    cout<<"Enter the "<<size<<" array elements : "<< endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Array Elements you have entered is : "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //reverseArray(arr,arr2,size);
    reverseArrayBest(arr,size);

    cout<<"Array Elements after reverse is : "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
