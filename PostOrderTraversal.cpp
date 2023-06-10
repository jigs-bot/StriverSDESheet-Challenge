#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
//Link : https://www.codingninjas.com/codestudio/problems/postorder-traversal_8230858?challengeSlug=striver-sde-challenge

void pstorder(TreeNode *root ,vector<int>& ans){
    if(root == NULL) return;
    
    pstorder(root->left,ans);
    
    pstorder(root->right,ans);

    ans.push_back(root->data);
}

vector<int> getPostOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    pstorder(root,ans);
    return ans;
}