class Solution {
public:
    int numWays(vector<string>& words, string target) {
        vector<vector<int>> dp(words[0].size(), vector<int>(target.size(), -1));
        vector<vector<int>> charFrequency(words[0].size(), vector<int>(26, 0));

        // Store the frequency of every character at every index.
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[0].size(); j++) {
                int character = words[i][j] - 'a';
                charFrequency[j][character]++;
            }
        }
        return getWords(words, target, 0, 0, dp, charFrequency);
    }

private:
    long getWords(vector<string>& words, string& target, int wordsIndex,
                  int targetIndex, vector<vector<int>>& dp,
                  vector<vector<int>>& charFrequency) {
        if (targetIndex == target.size()) return 1;
        if (wordsIndex == words[0].size() ||
            words[0].size() - wordsIndex < target.size() - targetIndex)
            return 0;

        if (dp[wordsIndex][targetIndex] != -1)
            return dp[wordsIndex][targetIndex];

        long countWays = 0;
        int curPos = target[targetIndex] - 'a';
        // Don't match any character of target with any word.
        countWays += getWords(words, target, wordsIndex + 1, targetIndex, dp,
                              charFrequency);
        // Multiply the number of choices with getWords and add it to count.
        countWays += charFrequency[wordsIndex][curPos] *
                     getWords(words, target, wordsIndex + 1, targetIndex + 1,
                              dp, charFrequency);

        return dp[wordsIndex][targetIndex] = countWays % 1000000007;
    }
};