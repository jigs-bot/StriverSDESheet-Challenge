#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

*************************************************************/
TreeNode<int>* insert(vector<int> &preOrder ,int &i,int ub=INT_MAX){
    if(i>=preOrder.size() || preOrder[i]>ub)
        return NULL;
    // if(root ==NULL){
    TreeNode<int>* root=new TreeNode<int>(preOrder[i++]);
    
    
    // if(preOrder[i]>root->data)
        root->left=insert(preOrder,i,root->data);
    // if(preOrder[i]<root->data)
        root->right=insert(preOrder,i,ub);
    return root;
}
TreeNode<int>* preOrderTree(vector<int> &preOrder){
    // Write your code here.
    // TreeNode<int>* root=new  TreeNode<int>(preOrder[0]);
    int i=0;
    return insert(preOrder,i);
     
}