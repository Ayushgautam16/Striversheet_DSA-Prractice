// 769. Max Chunks To Make Sorted


class Solution {
public:
   bool canBeChunked (vector<int>&arr, int i, int j) {
        int count = j-i+1;
        int valcount = 0;
        for (int k=i; k<=j; k++) {
            if (arr[k] >=i && arr[k] <= j) valcount++;
        }
        return (count == valcount);
    }

    int maxChunksToSorted(vector<int>& arr) {
        int chunks = 0;
        int n = arr.size();
        int i = 0;
        while (i<=n-1) {
            for (int j=i; j<n; j++) {
                if (canBeChunked(arr, i, j)) {
                    chunks++;
                    i=j+1;
                    break;
                }
            }
        }
        return chunks;
    }
}; 