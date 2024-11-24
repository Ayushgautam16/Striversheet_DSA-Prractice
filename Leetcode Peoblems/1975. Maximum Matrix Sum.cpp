// 1975. Maximum Matrix Sum

class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0; 
        int minus = INT_MAX, amt = 0;
        bool zero = false;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                int tmp = matrix[i][j];
                