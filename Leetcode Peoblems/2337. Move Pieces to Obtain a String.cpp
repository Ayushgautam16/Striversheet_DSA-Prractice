// 2337. Move Pieces to Obtain a String

class Solution {
public:
    bool canChange(string start, string target) 
    {
        int idx = 0, cur = 0, n = start.size();

        for(int i = 0; i < n; i++)
        {
            if(start[i] == target[i]) continue;
            
            