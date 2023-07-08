#include <bits/stdc++.h> 
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // Write your code here.
    priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<pair<pair<int, int>, int>> ans;
    unordered_map<int, list<pair<int, int>>> adj;
    for(int i=0;i<m;i++){
        int u = g[i].first.first;
      int v = g[i].first.second;
      int w = g[i].second;
      adj[u].push_back({v,w});

      adj[v].push_back({u,w});
    }
    vector<int>vis(n+1,0);
    vector<int> key(n+1,INT_MAX);
    vector<int> parent(n+1,-1);
    pq.push({0,1});
    key[1]=0;
    parent[1]=-1;
    while(!pq.empty()){
        int u=pq.top().second;
        int wt=pq.top().first;
        pq.pop();

        if(vis[u]) continue;
        vis[u]=1;
        for(auto i : adj[u]){
            int v=i.first;
            int w=i.second;
            if(!vis[v] && w<key[v]){
                key[v] =w;
                pq.push({w,v});
                parent[v]=u;
            }
        }
    }

    for(int i=2;i<=n;i++){
        ans.push_back({{parent[i],i},key[i]});
    }
    return ans;
}
