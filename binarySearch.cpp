#include<iostream>
using namespace std;

void binarySearch(int arr[], int n , int key){
    int start = 0; 
    int end = n-1;
    int mid = start + (end - start) / 2;

    while(start<=end){
        if(arr[mid] == key){
            cout<<"key is presents at index : "<<mid;
            break;
        }
        else if(arr[mid] > key){
           end = mid -1;
        }
        else if(arr[mid] < key){
           start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    cout<<"key is not present !!!";
}

int main(){
   
    int n;
    cout<<"enter the value of the N" <<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the value of key : "<<endl;
    int key;
    cin>>key;
    cout<<"enter the N elements : "<<endl;
    for(int i = 0; i< n ; i++){
        cin>>arr[i];
    }
   

    cout<<"entered array elements are as follows : "<<endl;
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    binarySearch(arr,n,key);
}