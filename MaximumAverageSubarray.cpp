// ---------------------------------- LEETCODE 643--------------------------------



#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<climits>

 double findMaxAverage(vector<int>& nums, int k) {
        int start = 0;
        int end = start + k-1;
        double sum;
        vector<double>ans;
        int size = nums.size();
        while(end<size){
            sum = 0;
            for(int i =start; i<=end;i++){
                sum +=nums[i];
            }
            ans.push_back(sum);
            start++;
            end++;
        }
        
     cout<<"vector elements are : "<<endl;
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
        auto maxV = max_element(ans.begin(),ans.end());
        double average = (double)(*maxV) / k;
        return average;
    }

int main() {
    // Write C++ code here
   vector<int>nums = {5};
   int k = 1;
    cout<<"vector elements are : "<<endl;
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
  double maxAvg = findMaxAverage(nums,k);
  cout<<"Maximum Average Subarray is : "<<maxAvg;
    //return 0;
}

