//                            --------- Leetcode Problem 268 ---------

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int a1 = 0;
//         int n = nums.size(); 
//         int An = n+1;
//         int sum = 0;
//         // formula is n/2 * (a1 + an)
//         int totalSum = (float)n/2 * (a1 + An);

//         for(int i = 0; i < n; i++){
//             sum = sum + nums[i];
//         }

//         int Num = totalSum - sum;
//         return Num; 

//     }
// };


