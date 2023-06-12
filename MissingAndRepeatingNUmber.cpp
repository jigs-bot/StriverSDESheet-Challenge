Link:https://www.codingninjas.com/codestudio/problems/missing-and-repeating-numbers_8230733?challengeSlug=striver-sde-challenge&leftPanelTab=1
#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int sum = n*(n+1)/2;
	int total=0;;
	pair<int,int>p;
	map<int,int> mp;
	for(auto i:arr){
		mp[i]++;
		total+=i;
	}
	int diff = abs(sum - total);
	for(auto it=mp.begin();it!=mp.end();it++){
		if(it->second ==2){
			int M ;
			int temp =abs(it->first - diff);
			if(mp.find(temp) == mp.end() && temp!=0) M=temp;
			else 
				M=abs(it->first + diff);
			int N = it->first;
			p =make_pair(M,N);
			break;
		}
	}
	return p;
	
}
