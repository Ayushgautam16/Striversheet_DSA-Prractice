// 2981. Find Longest Special Substring That Occurs Thrice I

class Solution {
public:
    // time/space: O(n ^ 3)/O(1)
    int maximumLength(string s) {
        int n = s.size();
        int result = -1;
        // try all possible special substring
        for (char c = 'a'; c <= 'z'; c++) {
            for (int len = 1; len <= n; len++) {
                // get the occurrence of the special substring
                if (getOccurrence(s, c, len) >= 3) result = max(result, len);
            }
        }
        return result;
    }
private:
    