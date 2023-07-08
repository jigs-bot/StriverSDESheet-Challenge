#include <bits/stdc++.h> 
class disjoint{
	private:
		vector<int> parent,rank;

	public:
		disjoint(int n){
			parent.resize(n+1);
			rank.resize(n+1,0);
			for(int i=0;i<=n;i++){
				parent[i]=i;
			}
		}

		int findpar(int node){
			if(node==parent[node])
				return node;
			return parent[node]=findpar(parent[node]);
		}

		void unionbyrank(int x , int y){
			int u =findpar(x);
			int v= findpar(y);

			if(u==v) return ;

			if(rank[u]>rank[v]){
				parent[v]=u;
			}
			else if(rank[u]<rank[v]){
				parent[u]=v;
			}
			else{
				parent[v]=u;
				rank[u]++;
			}
		}
};
int kruskalMST(int n, int m, vector<vector<int>> &graph) {
	// Write your code here.
	disjoint ds(n);
	vector<pair<int,pair<int,int>>> edges;
	
		for(auto it : graph){
			int wt=it[2];
			int u=it[0];
			int v=it[1];

			edges.push_back({wt,{u,v}});
		}
	
	sort(edges.begin(),edges.end());
	int mstwt=0;

	for(auto it : edges){
		int wt=it.first;
		int u=it.second.first;
		int v= it.second.second;

		if(ds.findpar(u)!=ds.findpar(v)){
			mstwt+=wt;
			ds.unionbyrank(u,v);
		}
	}
	return mstwt;

}