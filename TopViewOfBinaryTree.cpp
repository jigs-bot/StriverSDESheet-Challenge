#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.\
    

    if(root==NULL) return {};
    vector<int> ans;
    queue<pair<TreeNode<int>*,int>> q;

    q.push({root,0});

    map<int,int> mp;
    
    // mp[0]=root->val;
    while(!q.empty()){
        auto it = q.front();
        TreeNode<int> *n = it.first;
        int distance=it.second;
        q.pop();

        if(mp.find(distance)==mp.end()) mp[distance]=n->val;

        if(n->left) q.push({n->left,distance-1});

        if(n->right) q.push({n->right,distance+1});
    }
    for(auto i : mp){
        ans.push_back(i.second);
    }
    return ans;
}