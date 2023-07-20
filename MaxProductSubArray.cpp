#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
	// Write your code here
	int prod=1;
	int maxP=INT_MIN;
	for(int i=0;i<n;i++){
		prod*=arr[i];
		maxP=max(maxP,prod);
		if(prod==0)
			prod=1;
	}
	prod=1;
	for(int i=n-1;i>=0;i--){
		prod*=arr[i];
		maxP=max(maxP,prod);
		if(prod==0)
			prod=1;
	}
	return maxP;
}
