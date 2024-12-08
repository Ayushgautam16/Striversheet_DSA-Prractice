// 2054. Two Best Non-Overlapping Events1

class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& x) {
        sort(x.begin(), x.end());

        int n = x.size();
        vector<int>suf(n + 1);

        int ans = 0;
        for(int i = n - 1; ~i ;i--)
            suf[i] =  max(x[i][2], suf[i + 1]);

        
