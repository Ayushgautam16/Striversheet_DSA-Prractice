// 2940. Find Building Where Alice and Bob Can Meet

#define all(x) (x).begin(), (x).end()

const int INF = 1e7;

class MergeSortTree{
public:
    int left = -1, right = -1;
    MergeSortTree *leftChild, *rightChild;
    std::vector<pair<int, int>> nums;
    std::vector<int> suffixMinIndex;

    MergeSortTree(int l, int r, std::vector<int>& arr){
        this -> left = l;
        this -> right = r;
        this -> leftChild = this -> rightChild = nullptr;

        if(this -> isLeaf()){
            nums = {{arr[l], l}};
            suffixMinIndex = {l};
        }
        else{
            int mid = (left + right) >> 1;
            this -> leftChild = new MergeSortTree(l, mid, arr);
            this -> rightChild = new MergeSortTree(mid + 1, r, arr);
            
            // Merge left and right halves
            std::merge(
                    all(leftChild -> nums), all(rightChild -> nums), 
                    std::back_inserter(this -> nums)
                );
            
            // Create a suffix array, where suffix[i] is the minimum index of all indices
            // in nums in the range [i, sz).
            int sz = nums.size();
            suffixMinIndex.resize(sz);
            int mnIndex = INF;
            for(int i = sz - 1; i >= 0; i--){
                mnIndex = min(mnIndex, nums[i].second);
                suffixMinIndex[i] = mnIndex;
            }
        }
    }
    
    
    /*
        Returns the minimum index i in the range [l, r] such that nums[i].first >= k.
    */
    int query(int l, int r, int k){
        if(l <= left && right <= r){
            auto it = std::lower_bound(all(nums), make_pair(k, -1)); 
            return it != nums.end() ? suffixMinIndex[it - nums.begin()] : INF;
        }
        else if(left > r || right < l){
            return INF;
        }
        else{
            return min(leftChild -> query(l, r, k), rightChild -> query(l, r, k));
        }
    }

    bool isLeaf(){
        return this -> left == this -> right;
    }
};

class Solution {
public:
    vector<int> leftmostBuildingQueries(vector<int>& heights, vector<vector<int>>& queries) {
        int n = heights.size();
        MergeSortTree *obj = new MergeSortTree(0, n - 1, heights);
        
        vector<int> ans(queries.size(), -1);
        for(int qi = 0; qi < queries.size(); qi++){
            int i = queries[qi][0], j = queries[qi][1];
            
            if((i == j) || (i < j && heights[i] < heights[j])){
                ans[qi] = j;
                continue;
            }
            if(j < i && heights[j] < heights[i]){
                ans[qi] = i;
                continue;
            }
            
            // int index = obj -> query(max(i, j) + 1, n - 1, max(heights[i], heights[j]) + 1);
//             if(index < INF) ans[qi] = index;
// //         }
        
//         return ans;
//     }
// };