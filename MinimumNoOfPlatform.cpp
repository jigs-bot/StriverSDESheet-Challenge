#include<bits/stdc++.h>

int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);

    // for(int i=0;i<n;i++)
    //     cout<<dt[i] <<"-";
    int i=1,j=0;

    int ans=1;
    int count=1;
    while(i<n && j<n){
        if(at[i]<=dt[j]){
            count++;
            i++;
        }
        else{
            count--;
            j++;
        }
        ans=max(ans,count);

    }

    return ans;
}