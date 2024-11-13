// 2563. Count the Number of Fair Pairs
class Solution {
public:
    long long countFairPairs(vector<int>& v, int lower, int upper) {
        long long ans = 0;
        sort(v.begin(), v.end());

   