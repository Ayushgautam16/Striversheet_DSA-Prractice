// 2924. Find Champion II

class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) 
    {
       vector<int> count(n);
        for(auto ed : edges)
            count[ed[1]] += 1;

        