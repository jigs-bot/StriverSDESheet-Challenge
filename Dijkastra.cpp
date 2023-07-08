#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // Write your code here.
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> dist(vertices ,INT_MAX);
    vector<pair<int,int>> adj[vertices];
    dist[source]=0;
    pq.push({0,source});

    for(auto ele : vec){
        adj[ele[0]].push_back({ele[1],ele[2]});
        adj[ele[1]].push_back({ele[0],ele[2]});
    }
    while(!pq.empty()){
        int dis=pq.top().first;
        int node =pq.top().second;
        pq.pop();

        for(auto it : adj[node]){
            int wt=it.second;
            int adjNode=it.first;
            if(dis+wt < dist[adjNode]){
                dist[adjNode]=dis+wt;
                pq.push({dist[adjNode],adjNode});
            }
        }
    }
    return dist;

}
