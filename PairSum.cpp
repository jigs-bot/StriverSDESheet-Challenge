#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   sort(arr.begin(),arr.end());
   int i,j;
   vector<vector<int>> ans;
   for(int k =0;k<arr.size();k++){
      i=k;
      j=arr.size()-1;
      while(i<j){
         if(arr[i]+arr[j]==s){
            vector<int> v;
            v.push_back(arr[i]);
            v.push_back(arr[j]);
            ans.push_back(v);
         }
         j--;
      }
   }
   return ans;
}