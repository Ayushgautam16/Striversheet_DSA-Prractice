// 2054. Two Best Non-Overlapping Events1

class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& x) {
        sort(x.begin(), x.end());

        int n = x.size();
        vector<int>suf(n + 1);

        