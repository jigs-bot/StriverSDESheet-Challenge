#include <bits/stdc++.h> 
void helper(vector<int> &arr ,vector<int> &temp , set<vector<int>> &s ,int i){
    if(i==0){
        s.insert(temp);
        return;
    }
    temp.push_back(arr[i-1]);
    helper(arr,temp,s,i-1);
    temp.pop_back();
    helper(arr,temp,s,i-1);

    return ;
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    vector<int> temp;
    set<vector<int>> s;
    sort(arr.begin(),arr.end());
    helper(arr,temp,s,n);
    vector<vector<int>> ans;

    for(auto i:s){
        sort(i.begin(),i.end());
        ans.push_back(i);
    }
    sort(ans.begin(),ans.end());
    return ans;
}