#include<iostream>
using namespace std;
#include<algorithm>

int missingNumber(int arr[], int n){
    // int ans = -1;
    // sort(arr,arr + n);
    // for(int i = 0; i < n; i++){
    //     if(arr[i]!=i+1){                           WITH USING THE SORT FUNCTION AND COMPARING THE 1ST ELEMENT WITH 1ST+1 INDEX
    //         ans = i+1 ;
    //     }
    // }
    // return ans;



    // int ans = -1;
    // for(int i = 0; i < n; i++){
    //     int index = abs(arr[i]);                      // NEGATIVE MARKING METHOD

    //     if(arr[index-1]>0){
    //        arr[index-1] = arr[index-1] * -1;
            
    //     }
    // }


    int i=0;
    while(i<n){
        int index = arr[i] - 1 ;
        if(arr[i]!=arr[index]){
            swap(arr[i],arr[index]);
        }
        else{
            i++;
        }
    }


    for(int i = 0; i< n ; i++){
        if(arr[i]!=i+1)
        cout<<i+1<<" ";
    }

   
}

int main(){
    int arr[]= {1,3,3,3,3};
    int n = sizeof(arr)/sizeof(int);
    
    int missing = missingNumber(arr,n);
    //cout<<"Missing Number is "<<missing;             

    // for(int i = 0; i < n; i++){
    //     if(arr[i]>0)
    //     cout<<i+1<<" ";
    // }
}