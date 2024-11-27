// 3243. Shortest Distance After Road Addition Queries I

class Solution {
public:
    int findshortest(vector<pair<int,vector<int>>>adj ,int st,int end,int n){
      vector<int> dis(n, INT_MAX);
        dis[st] = 0;        
        queue<int> q;  
        q.push(st);        
        while (!q.empty()) {
            int node = q.front();
            q.pop();            
            for (auto p : adj[node].second) { 
               
                