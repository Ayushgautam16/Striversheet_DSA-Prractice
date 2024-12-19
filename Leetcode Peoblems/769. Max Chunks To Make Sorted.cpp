// 769. Max Chunks To Make Sorted


class Solution {
public:
   bool canBeChunked (vector<int>&arr, int i, int j) {
        int count = j-i+1;
        int valcount = 0;
        for (int k=i; k<=j; k++) {
            if (arr[k] >=i && arr[k] <= j) valcount++;
        