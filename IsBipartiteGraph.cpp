#include<bits/stdc++.h>
bool isGraphBirpatite(vector<vector<int>> &edges) {
	// Write your code here.

	int row=edges.size();
	vector<vector<int>> graph(row);
	
	for(int i=0;i<row;i++){
		for(int j=0;j<row;j++){
			if(edges[i][j]==1){
				graph[i].push_back(j);
				graph[j].push_back(i);
			}
		}
	}

	vector<int>clr(row,-1);
	queue<int> q;
	q.push(0);
	clr[0]=0;

	while(!q.empty()){
		auto node = q.front();
		q.pop();
		int p_clr=clr[node];
		for(auto it : graph[node]){
			if(clr[it]==p_clr)
				return false;
			else if(clr[it]==-1){
				clr[it]=(p_clr)? 0:1 ;
				q.push(it);
			}
		}
	}
	return true;


}