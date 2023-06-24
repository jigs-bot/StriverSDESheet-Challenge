#include <bits/stdc++.h> 
void dfs(vector<vector<int>> &mat , int &ans,int i , int j,int m ,int n){
	if(i>=m || j>=n)
		return;
	if(i==m-1 && j==n-1){
		ans++;return;
	}

	dfs(mat,ans,i,j+1,m,n);
	dfs(mat,ans,i+1,j,m,n);

	return;
}

int uniquePaths(int m, int n) {
	// Write your code here.
	int ans=0;
	vector<vector<int>> mat(m,vector<int>(n,0));
	// vector<int> vis()
	dfs(mat,ans,0,0,m,n);

	return ans;
}