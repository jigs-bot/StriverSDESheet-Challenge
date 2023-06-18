
#include<bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    vector<pair<int,int>> v;
    int n =start.size();
    for(int i=0;i<n;i++){
        v.push_back({finish[i],start[i]});
    }
    sort(v.begin(),v.end());
    int ans=1;
    int dead=v[0].first;
    for(int i=1;i<n;i++){
        if(v[i].second>=dead){
            ans++;
            dead=v[i].first;
        }
    }
    return ans;
}