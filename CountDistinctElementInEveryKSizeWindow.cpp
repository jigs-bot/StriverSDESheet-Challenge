#include <bits/stdc++.h> 
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    int i=0,j=0;
    map<int,int> mp;
    vector<int> ans;
    while(j<arr.size()){
        mp[arr[j]]++;
        if(j-i+1 < k){
            j++;
        }
        else if(j-i+1 == k){
            ans.push_back(mp.size());
            mp[arr[i]]--;
            if(mp[arr[i]] == 0) mp.erase(arr[i]);
            j++;i++;
            
        }
        
        
        
    }
    return ans;
	
}


    

