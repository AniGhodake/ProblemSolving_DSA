#include<iostream>
using namespace std;
#include<vector>

void negativeMarking(vector<int>&nums, int n){
    int i = 0;
    while(nums[i]>0 && i<n){
        cout<<nums[i]* -1<<" ";
        i++;
    }
    cout<<endl;m
   
}

int main(){
    vector<int> nums;
    
    int n;
    int element;
    cout<<"Enter how many elements you want to insert in Vector : "<<endl;
    cin>>n;

    cout<<"Enter the Vector elements : "<< endl;
    for(int i = 0; i<n; i++){
        cin>>element;
        nums.push_back(element);
    }

    negativeMarking(nums,n);

    // cout<<"Output Vector elements : "<< endl;
    // for(int i = 0; i<n; i++){
    //     cout<<nums[i]<<" ";
    // }

}

