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
            