#include<iostream>
using namespace std;
#include<algorithm>

int missingElement(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e - s)/2;
    int ans = n+1;

    while(s<=e){
        if(arr[mid] == mid+1){
            s = mid + 1;
        }
        else if(arr[mid] == mid + 2){
            ans = mid+1;
            e = mid -1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
   
    int n;
    cout<<"enter the value of the N" <<endl;
    cin>>n;
    int arr[n];
    // cout<<"enter the value of key : "<<endl;
    // int key;
    // cin>>key;
    cout<<"enter the N elements : "<<endl;
    for(int i = 0; i< n ; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int missing = missingElement(arr,n);
    cout <<"missing element is : "<<missing<<endl;
}