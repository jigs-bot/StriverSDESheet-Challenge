#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    unordered_map<int,int> mp;
    int n = arr.size();
    vector<int> ans;
    for(auto i:arr){
        mp[i]++;
    }

    for(auto i=mp.begin();i!=mp.end();i++){
        if(i->second > n/3)
            ans.push_back(i->first);
    }
    return ans;

}