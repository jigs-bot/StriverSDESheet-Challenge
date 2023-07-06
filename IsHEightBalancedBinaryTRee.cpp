#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

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
int height(BinaryTreeNode<int>*root){
    if(root ==NULL)
        return 0;
    int left =height(root->left);
    int right = height(root->right);

    return max(left,right) +1;
}
bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Write your code here.
    if(root == NULL) return true;

    bool l =isBalancedBT(root->left);
    bool b =isBalancedBT(root->right);
    
    int left = height(root->left);
    int right = height(root->right);

    return l && b && (abs(left-right)<=1);
}