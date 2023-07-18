#include <bits/stdc++.h> 
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    unordered_map<int,int> mp;
    for(auto i: arr){
        mp[i]++;
    }

    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > pq;

    for(auto i :mp){
        pq.push({i.second ,i.first});
        if(pq.size()>k) pq.pop();
    }

    vector<int> ans(k,0);
    for(int i=k-1;i>=0;i--){
        // pair<int,int> it=pq.top();
        ans[i]=pq.top().second;
        pq.pop();
    }
    sort(ans.begin(),ans.end());
    return ans;

}