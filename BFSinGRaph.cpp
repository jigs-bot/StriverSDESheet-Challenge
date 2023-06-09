#include <bits/stdc++.h> 
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    queue<int> q;
    vector<int> ans;
    // int n = edges.size();
    vector<int> vis(vertex,0);
    vector<vector<int>> graphs(vertex) ;

    for(auto i : edges){
        graphs[i.first].push_back(i.second);
        graphs[i.second].push_back(i.first);
    }
    for(int i =0;i<vertex;i++){
        if(!vis[i]){
            q.push(i);
            while(!q.empty()){
                int curr = q.front();q.pop();
                if(!vis[curr]) continue;
                ans.push_back(curr);
                vis[curr]=1;
                
                for(auto j : graphs[curr]){
                    if(!vis[j]){
                        q.push(j);
                    }
                }
            }
        }
    }


    return ans;
}