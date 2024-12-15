// 1792. Maximum Average Pass Ratio

class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int k) {
        priority_queue<pair<double,int>> pq;
        for(int i=0;i<classes.size();i++)
        {
            