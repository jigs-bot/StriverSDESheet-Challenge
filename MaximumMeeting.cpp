#include <bits/stdc++.h> 

struct meet{
    int start;
    int end;
    int pos;
};

bool comperator(struct meet s1 , struct meet s2){
    if(s1.end < s2.end) return true;
    else if(s1.end > s2.end) return false;
    else if(s1.pos < s2.pos) return true;
    return false;
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    int n = start.size();
    struct meet m[n];
    vector<int> ans;
    for(int i=0;i<n;i++){
        m[i].start=start[i];
        m[i].pos=i+1;
        m[i].end=end[i];
    }

    sort(m,m+n,comperator);
    int limit = m[0].end;
    ans.push_back(m[0].pos);
    for(int i=1;i<n;i++){
        if(m[i].start>limit){
            limit=m[i].end;
            ans.push_back(m[i].pos);
        }
    }
    return ans;
}