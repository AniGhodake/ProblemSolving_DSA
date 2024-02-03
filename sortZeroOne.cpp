#include<iostream>
using namespace std;

int oneCount(int arr[], int size){
     int oneCount=0;
    for(int i = 0; i<size; i++){
        if(arr[i]==1){
            oneCount++;
        }
    }
    cout<<"No. of Ones : "<<oneCount<<endl;
    return oneCount;
}
int zeroCount(int arr[], int size){
    int zeroCount=0;
    for(int i = 0; i<size; i++){
        if(arr[i]==0){
            zeroCount++;
        }
    }
    cout<<"No. of Zeros : "<<zeroCount<<endl;
    return zeroCount;
}

 
int sortZeroOne(int arr[], int size){
    int one = oneCount(arr, size);
    int zero = zeroCount(arr, size);
    int i;
    for(i=0;one>0; i++){
        arr[i] = 1;
        one--;
    }
    for(i=i;zero>0; i++){
        arr[i] = 0;
        zero--;
    }
    for(int j = 0; j<size; j++){
        cout<<arr[j]<<" ";
    }


}

int main(){
    int arr[9] = {0,0,1,0,1,0,0,0,1};
    int size = 9;
    sortZeroOne(arr, size);
    //cout<<"After Sorting, Array elements are as follows : "<<endl;
    // for(int i = 0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }
}