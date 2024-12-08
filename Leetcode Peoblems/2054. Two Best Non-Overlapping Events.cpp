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

        for(int i = 0; i < n ;i++){
            int id = upper_bound(x.begin(), x.end(), vector<int>{x[i][1], (int)2e9, (int)2e9}) - x.begin();

            ans=max(ans, x[i][2]);
            if(id != n)
                ans = max(ans, x[i][2] + suf[id]);
        }
        return ans;
    }
};
