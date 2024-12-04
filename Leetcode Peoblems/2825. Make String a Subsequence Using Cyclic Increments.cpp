// 2825. Make String a Subsequence Using Cyclic Increments

class Solution {
public:
    void convertChar(char& ch)
    {
        if(ch == 'z') ch = 'a';
        else ch += 1;
    }
    bool canMakeSubsequence(string str1, string str2) 
    {
        int idx = 0;
        string subStr;
        for(auto ch : str1)
        {
            if(ch == str2[idx])
            {
            