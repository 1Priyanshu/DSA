// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.



// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n =nums.size();
//         vector<int> v(n, 1);
//         int k1 =1, k2 =1;
//         for(int i=0; i<n; i++){
//             v[i] = k1;       //prefix array having produxt of numbers before that number;
//             k1 *= nums[i];     
//         }
//         for(int i=n-1; i>=0; i--){
//             v[i]  *= k2;   // suffix array multiplied with prefix array  so for nums[0] = 1* (n1*n2*n3.....n(n-1));
//             k2 *= nums[i];
//         }
//         return v;
//     }
//};