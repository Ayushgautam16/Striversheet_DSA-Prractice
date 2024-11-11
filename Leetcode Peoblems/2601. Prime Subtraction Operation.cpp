// 2601. Prime Subtraction Operation

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
    void sieveOfEratosthenes(vector<int>& primes, int maxVal) {
        bool sieve[maxVal + 1];
        memset(sieve, false, sizeof(sieve));
        for (int i = 2; i * i < maxVal; ++i) {
            if (sieve[i] == false) {
                for (int j = 2; i * j < maxVal; ++j)
                    sieve[i * j] = true;
            }
        }
        for (int i = 2; i < maxVal; ++i)
            if (sieve[i] == false)
                primes.push_back(i);
    }

public:
    bool primeSubOperation(vector<int>& nums) {
        vector<int> primes;
        int maxVal = *max_element(nums.begin(), nums.end());
        sieveOfEratosthenes(primes, maxVal);

        // Greedy: Try minimizing each value
     