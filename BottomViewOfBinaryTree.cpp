#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> bottomView(BinaryTreeNode<int> * root){

    vector<int> ans;
    map<int,int> mp;
    
    queue<pair<BinaryTreeNode<int>*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto it = q.front();q.pop();
        BinaryTreeNode<int>* node=it.first;
        int dist = it.second;
        mp[dist]=node->data;
        if(node->left) {
            q.push({node->left,dist-1});
        }
        if(node->right) {
            q.push({node->right,dist+1});
        }
    }

    for(auto it:mp){
        ans.push_back(it.second);
    }
    return ans;
    
}
