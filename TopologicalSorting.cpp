#include <bits/stdc++.h> 
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    vector<int> ans;
    // Write your code here
    vector<vector<int>>graph(v);
    for( auto i : edges){
        graph[i[0]].push_back(i[1]);
    }

    vector<int> indegree(v,0);

    for( int i=0;i<v;i++){
        for(int j=0;j<graph[i].size();j++){
            indegree[graph[i][j]]++;
        }
    }
    
    queue<int> q;
    vector<int> vis(v,0);
    for(int i=0;i<v;i++){
        if(indegree[i]==0)
            q.push(i);
    }

    while(!q.empty()){
        int f =q.front();q.pop();
        ans.push_back(f);
        vis[f]=1;
        for(auto it : graph[f]){
            if(vis[it]==1) continue;
            indegree[it]--;
            if(indegree[it]==0)
                q.push(it);
        }
    }
    return ans;
}