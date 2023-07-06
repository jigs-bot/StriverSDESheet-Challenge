void dfs(vector<vector<int>> &ans , int i , int j , int clr,int newColor){
    if(i<0 || i>=ans.size() || j<0 || j>=ans[0].size() || ans[i][j]!=clr ||ans[i][j]==newColor )
      return;
    ans[i][j]=newColor;
    dfs(ans,i+1,j,clr,newColor);
    dfs(ans,i-1,j,clr,newColor);
    dfs(ans,i,j+1,clr,newColor);
    dfs(ans,i,j-1,clr,newColor);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    // Write your code here.int **mat =arr;
   vector<vector<int>> ans ;
   ans = image;
   int clr = ans[x][y];
   dfs(ans,x,y,clr,newColor); 

   return ans;
}