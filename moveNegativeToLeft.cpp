#include<iostream>
using namespace std;
#include<vector>

void moveNegative(vector<int> &nums){
    int left = 0; 
    int i = 0;
    while(i<=nums.size()){
        if(nums[i]<0){
            swap(nums[i], nums[left]);
            left++;
            i++;
        }
        else{
            i++;
        }
    }
    cout<<"Desired Output is as follows : "<<endl;
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
    vector<int>nums(7,0);
    int size = nums.size();
    for(int i = 0; i < size; i++){
        cin>>nums[i];
    }
    cout<<"Entered vector is as follows : "<<endl;
    for(int i = 0; i < size; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    moveNegative(nums);
}


/////////////////////////////////////////////////without changing the order of the positive and negarive elements
//  void segregateElements(int arr[],int n)
//     {
//         int brr[n]={0};
        
//         int start = 0;
//         int end = n-1;
//         int s = 0;
//         int e = n-1;
    
//       while(start<n){
//         if(arr[start]<0){
//             brr[e] = arr[start];
//             e--;
//         }
        
//         if(arr[start]>=0){
//             brr[s] = arr[start];
//             start++;
//             s++;
//         }
//     }
//         for (int i = 0; i < n; ++i) {
//         arr[i] = brr[i];
//         }
//     }