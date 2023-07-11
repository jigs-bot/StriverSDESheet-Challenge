#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure.

    template <typename T>
    class TreeNode {
        public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void preorder(TreeNode<int>*root , TreeNode<int>* &ans){
    if(root==NULL)
        return;
    // ans = root;
    preorder(root->right , ans);
    preorder(root->left , ans);
    root->left =NULL;
    root->right= ans;
    ans=root;
}
TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    // Write your code here.
    TreeNode<int> * ans=NULL;
    preorder(root,ans);
    return ans;
}