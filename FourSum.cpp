#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());

    int l,r;
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            l=j+1;
            r=n-1;
            int find = target - (arr[i]+arr[j]);
            while(l<r){
                if(arr[l]+arr[r]==find) return "Yes";
            
                else if(arr[l] + arr[r] > find) r--;

                else l++ ;
                }
            }
        }
    return "No";
}
