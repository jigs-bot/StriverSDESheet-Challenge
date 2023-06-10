//Link:https://www.codingninjas.com/codestudio/problems/find-minimum-number-of-coins_8230766?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{   
    int total =0;
    vector<int> v={1000,500,100,50,20,10,5,2,1};
    int p=0,coin=0;
    while(total<amount){
        total += v[p];coin++;
        if(total > amount){
            total-=v[p];
            p++;coin--;
        }
    }
    return coin;
}
