void dfs(int **mat ,int i ,int j,int n,int m){
   if(i<0 || i>=n || j<0 || j>=m || mat[i][j]==0 || mat[i][j]==-1)
      return;
   mat[i][j]=-1;
   dfs(mat,i+1,j,n,m);
   dfs(mat,i-1,j,n,m);
   dfs(mat,i,j+1,n,m);
   dfs(mat,i,j-1,n,m);
   dfs(mat,i-1,j-1,n,m);
   dfs(mat,i-1,j+1,n,m);
   dfs(mat,i+1,j-1,n,m);
   dfs(mat,i+1,j+1,n,m);
   
}

int getTotalIslands(int** arr, int n, int m)
{
   // Write your code here.
   int **mat =arr;
   int ans=0;
   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
         if(mat[i][j]==1){
            ans++;
            dfs(mat,i,j,n,m);
         }
         
      }
   }

   return ans;
}
