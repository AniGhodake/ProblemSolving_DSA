#include<iostream>
using namespace std;

int zeroCount(int arr[], int size){
    int zeroCount = 0;
    for (int i = 0; i<size; i++){
        if(arr[i]==0){
            zeroCount++;
        }
    }
    return zeroCount;
}

int oneCount(int arr[], int size){
    int oneCount = 0;
    for (int i = 0; i<size; i++){
        if(arr[i]==1){
           oneCount++;
        }
    }
    return oneCount;
}

int main(){
    int arr[7];
    int size = 7;
    cout<<"Enter "<<size << " array elements : "<<endl;
    for(int i= 0; i<size; i++){
        cin>>arr[i];       
    }
    int zeros = zeroCount(arr, size);
    int ones = oneCount(arr, size);


    // int zeroCount=0;
    // for (int i = 0; i<size; i++){
    //     if(arr[i]==0){
    //         zeroCount++;
    //     }
    // }

    //   int oneCount = 0;
    // for (int i = 0; i<size; i++){
    //     if(arr[i]==1){
    //        oneCount++;
    //     }
    // }

    cout<<"Zero count is : "<<zeros<<endl;
    cout<<"One count is : "<<ones<<endl;
}
