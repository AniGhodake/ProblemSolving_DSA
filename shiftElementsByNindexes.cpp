#include<iostream>
using namespace std;

void shiftByN(int arr[], int size, int n){
    int arr2[10];
    for(int i = 0; i < size; i++ ){
       arr2[i] = arr[(i + n) % size];
    }
    cout<<"Elements Afer shifting are as follows : "<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr2[i]<<" ";
    }

}

int main(){
    int arr[10];
    int size = 10;
    cout<< "Enter the array elements "<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    int n;
    cout<<"Enter the value of N "<<endl;
    cin>>n;
    cout<<"Elements you entered are as follows : "<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
         
    shiftByN(arr,size,n);
}