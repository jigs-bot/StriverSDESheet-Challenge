#include <bits/stdc++.h> 

bool helper(vector<int> &arr , int n , int k){
    if(k==0) return true;
    if(n<0 && k>=0) return false;

    if(arr[n]>k) return helper(arr,n-1,k);
    bool inc =helper(arr,n-1,k-arr[n]);
    bool exc = helper(arr,n-1,k);

    return exc || inc ;
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    return helper(arr,n-1,k);
}