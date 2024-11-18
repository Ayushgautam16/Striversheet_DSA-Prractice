// 1652. Defuse the Bomb
class Solution {
public:
    void addNums(vector<int> &nums, vector<int> &code)
    {
        for(auto val:code) 
            nums.push_back(val);
    }
    vector<int> decrypt(vector<int>& code, int k) 
    {
        int n = code.size();
        vector<int>ans(n);
        if(k == 0) return ans;
        auto nums = code;
        addNums(nums, code);
        addNums(nums, code);
