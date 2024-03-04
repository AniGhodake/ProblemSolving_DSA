#include<iostream>
using namespace std;

void sortZOT(int arr[],int size){
    for(int i = 0,left = 0, right = size-1; i <=right && left<=right; ){
        if(arr[i]==0){
            swap(arr[left],arr[i]);
            left++;
            i++;
        }
        else if(arr[i]==2){                    // doubt==========> remove else keyword from this line and then run
            swap(arr[right],arr[i]);                       
            right--;
            
        }
        else{
            i++;
        }
    }
    cout<<"Array elements after sorting is as follows : "<<endl;
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
    cout<<"Array elements before sorting is as follows : "<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;

    sortZOT(arr,size);
}