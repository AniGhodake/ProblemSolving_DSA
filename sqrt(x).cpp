// class Solution {
// public:
//     int mySqrt(int x) {
//         long root = 0;
//         long ans = 0;
//         if(x == 1){
//             return 1;
//         }
//         for(long i = 0; i < x; i++){                     runtime is 15 ms
//             ans = i * i;
//             if(ans>x){
//                 return root;
//             }
//             root = i;
//         }
//         return root;
//     }
// };

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0)
            return x;
        int first = 1, last = x;
        while (first <= last) {
            int mid = first + (last - first) / 2;
            // mid * mid == x gives runtime error                         binary search 
            if (mid  == x / mid)
                return mid;
            else if (mid > x / mid) {
                last = mid - 1;
            }
            else {
                first = mid + 1;
            }
        }
        return last;
    }
};