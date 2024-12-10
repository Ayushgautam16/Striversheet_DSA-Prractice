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
    int getOccurrence(const string& s, char c, int len) {
        int occurrence = 0;
        // slide the window with width `len`
        for (int i = 0; (i + len) <= s.size(); i++) {
            bool matched = true;
            for (int j = 0; j < len; j++) {
                if (s[i + j] != c) {
                    matched = false;
                    break;
                }
            }
            if (matched) occurrence++;
        }
        return occurrence;
    }
};
