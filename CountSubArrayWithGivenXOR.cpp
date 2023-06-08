#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    int arr_count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] == x) arr_count++;
        int temp=arr[i];
        for(int j=i+1;j<arr.size();j++){
            temp^=arr[j];
            if(temp==x){
                arr_count++;
            }
        }
    }
    return arr_count;
}