// 1574. Shortest Subarray to be Removed to Make Array Sorted
class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size(), l{0}, r = n - 1;
        while (l + 1 < n && arr[l] <= arr[l + 1]) ++l;
        if (l == n - 1) return 0;
        while (r > l && arr[r - 1] <= arr[r]) --r;
      