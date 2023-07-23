#include <bits/stdc++.h> 
void helper(vector<int> &num ,vector<int> &ans ,int i,int &sum){
    if(i==0){
        ans.push_back(sum);
        return;
    }
    sum+=num[i-1];
    helper(num,ans,i-1,sum); //pick
    sum-=num[i-1];
    helper(num,ans,i-1,sum);//not pick

    return;

}

vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int> ans;
    // ans.push_back(0);
    int n= num.size();
    int sum=0;
    helper(num,ans,n,sum);
    sort(ans.begin(),ans.end());
    return ans;
}