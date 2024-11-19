// 2461. Maximum Sum of Distinct Subarrays With Length K
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long n = nums.size(), ws = 0, mx = 0;
      