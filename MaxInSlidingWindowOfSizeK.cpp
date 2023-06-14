#include <bits/stdc++.h> 

int findMax(vector<int> &nums ,int x , int y){
    int ret=0;
    for(int i=x; i<=y;i++){
        ret = max(ret,nums[i]);
    }
    return ret;
}

vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
    vector<int> ans ;
    int i =0,j=0;
    int to_put=0;
    while(j<nums.size()){

        if(j-i+1 < k) j++;

        else if(j-i+1 == k){
            to_put = findMax(nums,i,j);
            ans.push_back(to_put);
            i++;j++;
        }
    }
    return ans;
}