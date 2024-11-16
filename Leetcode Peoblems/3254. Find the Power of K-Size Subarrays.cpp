// 3254. Find the Power of K-Size Subarrays I
class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n - k + 1, -1); 

        int conseCnt = 1;
        for (int i = 1; i < k; i++) {
            if (nums[i] == nums[i - 1] + 1) {
                conseCnt++;
            } else {
                conseCnt = 1;
            }
        }
  if (conseCnt == k) {
            ans[0] = nums[k - 1];
        }

        int i = 1;
        int j = k;
     
         while (j < n) {
            if (nums[j] == nums[j - 1] + 1) {
                conseCnt++;
            } else {
                conseCnt = 1;
            }
            if (conseCnt >= k) {
                ans[i] = nums[j];
            }

            j++;
            i++;
        }
        return ans;
    }
};