#include<bits/stdc++.h>
#define ll int
#define vs vector<string>
#define vvs vector<vs>
#define pb push_back

void fillPalindromes(ll row, vector<vector<bool>>& arr, vvs& res, vs r, string& str){
    
     if(row>=arr.size()){
     if(!r.empty())res.pb(r);
     return;
     }
     for(ll j=0;j<arr.size();j++){//arr.size()==arr[0].size()
         if(arr[row][j]==1){
             vs dummy=r;
             dummy.pb(str.substr(row, j-row+1));
             fillPalindromes(j+1, arr, res, dummy, str);
         }
     } 
    
    }
vector<vector<string>> partition(string &str) 
{
    // Write your code here.
    ll m=str.size();
    vector<vector<bool>>arr(m, vector<bool>(m, 0));
    for(ll i=0;i<m;i++){
        arr[i][i]=1;
    }
    for(ll i=1;i<m;i++){
        if(str[i]==str[i-1]){
            arr[i-1][i]=1;
        }
    }
    for(ll l=3;l<=m;l++){
        for(ll i=0;i<m;i++){
            ll j=i+l-1;
            if(j<m && str[i]==str[j]){
              arr[i][j]=arr[i+1][j-1];  
            }
        }
    }
    
    vvs res={};
    vs r={};
    if(str.empty()){
       res.pb(r);
        return res;
    }
    fillPalindromes(0, arr, res, r, str);
    return res;
}
