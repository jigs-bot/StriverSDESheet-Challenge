#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

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
TreeNode<int>* insert(vector<int>&arr , int s ,int e){

    if(s>e)
        return NULL;

    int mid=(s+e)/2;
    TreeNode<int> * node = new TreeNode<int>(arr[mid]);
    node->left =insert(arr,s,mid-1);
    node->right =insert(arr,mid+1,e);
    return node;
    
    
}
TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    // Write your code here.
    
    return insert(arr,0,n-1);
}