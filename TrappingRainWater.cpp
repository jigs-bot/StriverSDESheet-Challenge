#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
    int i=0,j=n-1;
    long total=0;
    int lmax=0,rmax=0;
    while(i<j){
        if(arr[i]<=arr[j]){
            if(arr[i]>=lmax)
                lmax=arr[i];
            else
                total+=lmax-arr[i];
            i++;
        }
        else {
            if(arr[j]>=rmax)
                rmax=arr[j];
            else
                total+=rmax-arr[j];
            j--;
        }
        
        
    }
    return total;
     
    
}