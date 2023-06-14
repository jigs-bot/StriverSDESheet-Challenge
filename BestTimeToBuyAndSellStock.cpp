#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    
//First Approach
    int n = prices.size();
    int profit=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(prices[j]>=prices[i]){
                profit =max(profit , prices[j]-prices[i]);
            }

        }
    }
    return profit;

//second Approach
    int n =prices.size();
    int maxP=0, minP=INT_MAX;
    for(int i=0;i<n;i++){
        if(prices[i]<minP){
            minP=prices[i];
        }
        else if(prices[i]-minP >maxP){
            maxP=prices[i]-minP;
        }
    }
    return maxP;
}