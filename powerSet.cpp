#include <bits/stdc++.h> 

void helper(vector<int>v ,vector<vector<int>> &ans,int i,vector<int>temp){
    if(i==v.size()){
        ans.push_back(temp);
        return;
    }
    temp.push_back(v[i]);
    helper(v,ans,i+1,temp);
    temp.pop_back();
    helper(v,ans,i+1,temp);

}


vector<vector<int>> pwset(vector<int>v)
{
    vector<vector<int>> ans;
    vector<int> temp;
    helper(v,ans,0,temp);
    return ans;
}