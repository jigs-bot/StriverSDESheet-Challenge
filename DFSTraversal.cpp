void dfs(vector<vector<int>> &graph , vector<int> &vis,int src,vector<int>&temp){
    vis[src]=1;
    temp.push_back(src);
    for(auto it : graph[src]){
        if(!vis[it]){
            dfs(graph,vis,it,temp);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    vector<vector<int>> ans;
    vector<int> vis(V,0);
    vector<vector<int>> graph(V);
    for(auto i : edges){
        graph[i[0]].push_back(i[1]);
        graph[i[1]].push_back(i[0]);
    }
    for(int i=0;i<V;i++){
        if(!vis[i]){
            vector<int> temp;
            dfs(graph,vis,i,temp);
            ans.push_back(temp);
        }

    }

    return ans;
}