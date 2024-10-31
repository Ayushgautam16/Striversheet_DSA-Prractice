

// class Solution {
// public:
//     long long solve(int roboPos, int factPos, vector<int>& fact,
//                     vector<int>& robot) {
//         if (roboPos < 0)
//             return 0;
//         if (factPos < 0)
//             return LONG_MAX / 10;
//         long long pick = abs(robot[roboPos] - fact[factPos]) +
//                          solve(roboPos - 1, factPos - 1, fact, robot);
//         long long notPick = solve(roboPos, factPos - 1, fact, robot);
//         return min(pick, notPick);
//     }
//     long long minimumTotalDistance(vector<int>& robot,
//                                    vector<vector<int>>& factory) {
//         sort(robot.begin(), robot.end());
//         sort(factory.begin(), factory.end());
//         int n = robot.size();

//         vector<int> fact;
//         for (auto it : factory) {
//             int pos = it[0];
//             int limit = it[1];
//             for (int i = 0; i < limit; i++) {
//                 fact.push_back(pos);
//             }
//         }
//         int m = fact.size();
//         return solve(n - 1, m - 1, fact, robot);
//     }
// };