#include<bits/stdc++.h>

bool detect(vector<vector<int>> &graph , vector<int> &vis ,int src){
    vis[src]=1;

    queue< pair<int,int> > q;
    q.push({src,-1});

    while(!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();
        for(auto adj :graph[node]){
            if(!vis[adj]){
                vis[adj]=1;
                q.push({adj,node});
            }
            else{
                if(parent!=adj){
                    return true;
                }
            }
        }
    }
    return false;
}


string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here. 
    vector<vector<int>> graph(n+1);

    for(auto i : edges){
        graph[i[0]].push_back(i[1]);
        graph[i[1]].push_back(i[0]);
    }

    
    vector<int> vis(n+1,0);

    for(int i=1;i<=n;i++){
        if(!vis[i]){
            if(detect(graph,vis,i)==true)
                return "Yes";
        }
    }
    return "No";

}
