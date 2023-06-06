//Striver Sheet Challenge  
#include <bits/stdc++.h>
int findMajorityElement(int arr[], int n) {
	map<int,int> mp;

	for(int i=0;i<n;i++){
		mp[arr[i]]++;
	}
	int ans=-1;
	int maxi=0;
	for(auto it=mp.begin();it!=mp.end();it++){
		if(it->second > n/2){
			maxi=it->second;
			ans=it->first;
		}
		
	}
	return ans;
}