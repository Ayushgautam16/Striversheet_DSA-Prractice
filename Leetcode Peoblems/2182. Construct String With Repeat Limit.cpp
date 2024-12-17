// 2182. Construct String With Repeat Limit

// OJ: https://leetcode.com/contest/weekly-contest-281/problems/construct-string-with-repeat-limit/
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(1)
class Solution {
public:
    string repeatLimitedString(string s, int limit) {
        int cnt[26] = {};
        string ans;
        for (char c : s) cnt[c - 'a']++;
        while (true) {
            
