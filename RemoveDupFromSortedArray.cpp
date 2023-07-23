//Link:https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-sorted-array_8230811?challengeSlug=striver-sde-challenge&leftPanelTab=0
#include<bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
	//Approach 1
	int i=0;
	for(int j=0;j<n;j++){
		if(arr[i]!=arr[j]){
			arr[i+1]=arr[j];
			i++;
		}
	}
	return i+1;

	//Approach 2
	unordered_map<int,int>mp;
	for(auto i : arr){
		mp[i]++;
	}
	return mp.size();

}