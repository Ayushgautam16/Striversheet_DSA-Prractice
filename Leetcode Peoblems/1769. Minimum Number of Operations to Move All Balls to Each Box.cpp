// 1769. Minimum Number of Operations to Move All Balls to Each Box

class Solution {
public:
    vector<int> minOperations(string boxes) {
         int n = boxes.length();
    vector<int> distances(n, 0);

    int prefixCount = 0;  
    int prefixSum = 0;    

    for (int i = 0; i < n; ++i) {
        distances[i] = prefixCount * i - prefixSum;
        if (boxes[i] == '1') {
            ++prefixCount;
            prefixSum += i;
        }
    }

    int suffixCount = 0;  
    int suffixSum = 0;    

    for (int i = n - 1; i >= 0; --i) {
        distances[i] += suffixSum - suffixCount * i;