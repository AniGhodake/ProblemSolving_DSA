#include<iostream>
using namespace std;
#include<algorithm>

int firstOccurance(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e - s ) / 2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}


int lastOccurance(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e - s) / 2;
    int ans = -1 ;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
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
    cout<<"enter the value of key : "<<endl;
    int key;
    cin>>key;
    cout<<"enter the N elements : "<<endl;
    for(int i = 0; i< n ; i++){
        cin>>arr[i];
    }
   

    // cout<<"entered array elements are as follows : "<<endl;
    // for(int i = 0; i< n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    sort(arr, arr+n);

    int firstIndex = firstOccurance(arr,n,key);
    cout<<"First Occurance of the element is at the index : "<< firstIndex<<endl;

    int lastIndex = lastOccurance(arr,n,key);
    cout<<"last Occurance of the element is at the index : "<< lastIndex<<endl;

    if(firstIndex || lastIndex){
        int totalOccurance = lastIndex - firstIndex + 1;
        cout <<"Total Occurance of the key element is : "<<totalOccurance<<endl;
    }
}