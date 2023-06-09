#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    unordered_set<int> s;

    s.insert(input[0]);
    int i=1;
    int ans=0;
    int S;
    while(i<input.size()){
        if(s.find(input[i])==s.end()){
            s.insert(input[i]);
        }
        else{
            S=s.size();
            ans=max(ans,S);
            s.erase(s.begin(),s.end());
            s.insert(input[i]);
        }
        i++;
    }
    return ans;
}

// #include <bits/stdc++.h> 
// int uniqueSubstrings(string input)
// {
//     int len = 0;
//     int right = 0;
//     int left = 0;
//     int n = input.size();
//     vector<int> map(256, -1);

//     while(right < n) {

//         if(map[input[right]] != -1) {

//             left = max(map[input[right]]+1, left);
//         }

//         map[input[right]] = right;
//         len = max(len, right-left+1);
//         right++;
//     }

//     return len;
// }