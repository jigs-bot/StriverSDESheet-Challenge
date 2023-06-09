#include <bits/stdc++.h>
//Link: https://www.codingninjas.com/codestudio/problems/longest-subarray-zero-sum_8230747?challengeSlug=striver-sde-challenge
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int ans=0,res=0;
  for(int i=0;i<arr.size();i++){
    int sum =0;
    
    for(int j=i;j<arr.size();j++){
        sum+=arr[j];
        if(sum== 0){
          res=j-i+1;
          ans = max(ans,res);
        }
    }
  }
  return ans;

}