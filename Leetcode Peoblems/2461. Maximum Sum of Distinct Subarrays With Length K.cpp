// 2461. Maximum Sum of Distinct Subarrays With Length K
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long n = nums.size(), ws = 0, mx = 0;
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            // Add the current element to the window
            mp[nums[i]]++;
            ws += nums[i];

            // If the window size exceeds 'k', slide the window
           