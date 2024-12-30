class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        int mod = 1e9 + 7;
        vector<int> dp(high + 1, 0);
        dp[0] = 1; // Base case: 1 way to create an empty string.

        for (int i = 0; i <= high; i++) {
            if (dp[i] > 0) {
                