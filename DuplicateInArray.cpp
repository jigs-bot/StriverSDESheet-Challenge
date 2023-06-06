#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	
	map<int,int> mp;
	
	for(auto i:arr){
		mp[i]++;
	}
	
	for(auto it=mp.begin();it!=mp.end();it++){
		if(it->second >1)
			return it->first;
	}
	return -1;
}
