// 2914. Minimum Number of Changes to Make Binary String Beautiful
#include <iostream>
using namespace std;
class Solution {
public:
    int minChanges(string s) {
        int n = s.length();
        int cnt = 0;
        for (int i = 0; i < n-1; i=i + 2) {
            if (s[i] != s[i + 1]) {
                cnt++;
            }else continue;
        }
        return cnt;
    }
};

int main() {
    


    return 0;
}
