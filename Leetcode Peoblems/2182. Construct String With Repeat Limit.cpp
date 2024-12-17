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
            int i = 25;
            bool onlyOne = false;
            for (; i >= 0; --i) {
                if (ans.size() && i == ans.back() - 'a' && cnt[i]) { // the character of our last batch still has some count left, so we only insert a single character in this batch
                    onlyOne = true;
                    continue;
                }
                if (cnt[i]) break; // found a character with positive count, fill with this character
            }
            if (i == -1) break; // no more characters to fill, break;
            int fill = onlyOne ? 1 : min(cnt[i], limit);
            cnt[i] -= fill;
            while (fill--) ans += 'a' + i;
        }
        return ans;
    }
};
