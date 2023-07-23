#include<bits/stdc++.h>

void helper(vector<int> &arr ,vector<vector<int>> &ans ,vector<int>&temp,int n,int k){
    if(n>=arr.size()){
        // ans.push_back(temp);
        if(k==0)
            ans.push_back(temp);
        return;
    }

    temp.push_back(arr[n]);
    // sum+=arr[n-1];
    
    helper(arr,ans,temp,n+1,k-arr[n]);
    // sum-=arr[n-1];
    temp.pop_back();
    helper(arr,ans,temp,n+1,k);
    return;
    
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> temp;
    int sum=0;
    helper(arr,ans,temp,0,k);
    return ans;
}