#include <bits/stdc++.h> 

void dfs(vector<vector<int> >&maze,vector<int> &temp,vector<vector<int> >&ans,int i,int j,int n){
  if(i<0 || j<0 || i>=maze.size() || j>=maze[0].size()|| maze[i][j]==0 || maze[i][j]==2)
    return;
  
  if(i==n-1 && j==n-1){
    temp[n*n-1]=1;
    ans.push_back(temp);
    return;
  }
  
  maze[i][j]=2;
  temp[(n*i)+j]=1;

  dfs(maze,temp,ans,i+1,j,n);
  dfs(maze,temp,ans,i-1,j,n);
  dfs(maze,temp,ans,i,j+1,n);
  dfs(maze,temp,ans,i,j-1,n);
  temp[(n*i)+j]=0;
  maze[i][j]=1;
 
  return;
}
vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
  // Write your code here.
  vector<vector<int>> ans;
  vector<int> temp(n*n,0);
  if(maze[0][0])
    dfs(maze,temp,ans,0,0,n);

  return ans;
}