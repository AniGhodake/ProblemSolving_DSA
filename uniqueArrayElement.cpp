#include<iostream>
using namespace std;

int uniqueElement(int arr[], int size){
    int result = 0;
    for(int i=0; i<size; i++ ){
        result = result ^ arr[i];
    }
    return result;
}

int main(){
    // int arr[11]= {1,1,2,5,8,-22,5,8,-78,-78,2};               // NEEDS TO BE A SINGLE UNIQUE ELEMENT
    // int size = 11; 
    // int n = uniqueElement(arr, size);
    // cout<<"unique element in an array is : "<<n<<endl;

    cout<<(7^5);
}