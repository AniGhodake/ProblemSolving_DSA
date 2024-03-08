#include<iostream>
using namespace std;

void sortNegativePositive(int arr[], int size){
    for(int i = 0,left = 0; i < size; i++){
        if(arr[i]<0){
            swap(arr[left],arr[i]);
            left++;
        }
    }

    cout<<"Array elements after sorting is as follws : "<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[10];
    int size = 10;
    cout<< "Enter the Array elements : "<< endl;
    for (int i = 0; i < size; i++){
        cin>>arr[i];
    }

    sortNegativePositive(arr,size);
}