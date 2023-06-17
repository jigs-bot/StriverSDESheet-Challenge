#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.

	if(n<3) return {};
	vector<vector<int>> ans;
	set<vector<int>> s;
	sort(arr.begin(),arr.end());
	int l,r;
	for(int i =0 ;i<n-2;i++){
		int target = K-arr[i];
		l=i+1;r=n-1;
		while(l<r){
			if(arr[l] + arr[r] == target){
				vector<int> temp = {arr[i],arr[l],arr[r]};
				s.insert(temp);
				l++;r--;
			}
			else if(arr[l] + arr[r] > target){
				r--;
			}
			else if(arr[l]+arr[r]< target){
				l++;
			}
		}
	}

	for(auto i : s){
		ans.push_back(i);
	}
	return ans;


}