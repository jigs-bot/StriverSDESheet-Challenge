#include <bits/stdc++.h> 
void put(stack<int> &s , int x){
	if(s.empty() || s.top() <= x ){
		s.push(x);
		return;
	}
	else{
		int v =s.top();
		s.pop();
		put(s,x);
		s.push(v);
	}
}

void sortStack(stack<int> &s)
{
	// Write your code here
	if(s.size()==1){
		return;
	}
	int x = s.top();s.pop();
	sortStack(s);
	put(s,x);
}