#include<bits/stdc++.h>
bool detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
    // Write your code here
    vector<vector<int>>graph(n+1);
    for( auto i : edges){
        graph[i.first].push_back(i.second);
    }

    vector<int> indegree(n+1,0);

    for( int i=0;i<=n;i++){
        for(int j=0;j<graph[i].size();j++){
            indegree[graph[i][j]]++;
        }
    }
    
    queue<int> q;
    vector<int> vis(n+1,0);
    for(int i=1;i<=n;i++){
        if(indegree[i]==0)
            q.push(i);
    }
    int count=0;
    while(!q.empty()){
        int f =q.front();q.pop();
        // ans.push_back(f);
        count++;
        vis[f]=1;
        for(auto it : graph[f]){
            if(vis[it]==1) continue;
            indegree[it]--;
            if(indegree[it]==0)
                q.push(it);
        }
    }
    if(count == n) return false;
    return true;
}