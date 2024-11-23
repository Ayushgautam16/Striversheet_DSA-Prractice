// 1861. Rotating the Box
class Solution {
public:
    void swapChar(vector<char> &vec)
    {
        int n = vec.size(), Hash = 0;
        unordered_map<int, int>store;
        for(int i = 0; i < n; i++)
        {
            Hash += vec[i] == '#';
            if(vec[i] == '*')
                store[i] = Hash, Hash = 0;
        }
        if(Hash) store[n] = Hash;

        for(auto [idx_i, count] : store)
        {
            int idx = idx_i;
            while(count--) vec[--idx] = '#';
            while(idx-- and vec[idx] != '*') vec[idx] = '.';
        }
    }

    