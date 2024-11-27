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
               
                if (dis[p] == INT_MAX) {  
                    dis[p] = dis[node] + 1;  
                    q.push(p); 
                }
            }
        }
        return dis[end] == INT_MAX ? -1 : dis[end];     
    }
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<pair<int,vector<int>>>adj(n);
        for(int i=0;i<n-1;i++){
            adj[i].first=i;
            adj[i].second.push_back(i+1);
        }
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            adj[queries[i][0]].second.push_back(queries[i][1]);
            int shortest=findshortest(adj,0,n-1,n);
            ans.push_back(shortest);
        }    
        return ans;
    }
};