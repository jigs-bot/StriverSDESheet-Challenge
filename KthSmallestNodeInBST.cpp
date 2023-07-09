#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

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
int inorder(TreeNode<int>*root , int &k){
    if(root ==NULL)
        return 0;
    
    
    int left=inorder(root->left,k);
    if(left!=0) return left;
    k--;
    if(k==0) return root->data;
    int right=inorder(root->right,k);
    if(right!=0) return right;

    return 0;

    }
int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
    return inorder(root,k);
}