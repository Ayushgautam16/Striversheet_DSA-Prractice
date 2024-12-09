// 3152. Special Array II

class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) 
    {
        int n = nums.size();
        set<int> store;
        for(int i = 1; i < n; i++)
            if((nums[i] % 2) == nums[i - 1] % 2)
                store.insert(i);

        vector<bool> ans;
        for(auto querie : queries)
        