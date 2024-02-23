//  int peakIndexInMountainArray(vector<int>& arr) {
//         int s = 0;
//         int e = arr.size()-1;
//         int mid = s + (e - s)/2;
//         int ans = -1;

//         while(s<=e){
//             if((mid + 1 <= e) && arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
//                ans = mid;
//                break;
//             }
//             else if((mid + 1 <= e) && arr[mid]< arr[mid+1]){
//                 s = mid+1;
//             }

//             mid = s + (e-s)/2;
//         }
//         return ans;
//     }