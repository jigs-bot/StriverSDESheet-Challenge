#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here
    stack<int> s;
    vector<int> ans;
    ans.push_back(-1);
    s.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
            if(s.top() > arr[i]){
                    ans.push_back(s.top());
                    s.push(arr[i]);
                }
            else{
                while(!s.empty() && s.top()<=arr[i]) s.pop();
                if(s.empty()) {
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(s.top());
                }
                s.push(arr[i]);
            }
    }
    reverse(ans.begin(),ans.end());
    return ans;

}