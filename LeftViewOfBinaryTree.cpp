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

//Link : https://www.codingninjas.com/codestudio/problems/left-view-of-a-binary-tree_8230757?challengeSlug=striver-sde-challenge&leftPanelTab=3
vector<int> getLeftView(TreeNode<int> *root)
{   if(!root) return {};
    int first_node=0;
    queue<TreeNode<int>*> q;
    vector<int> ans;

    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i =0;i<n;i++){
            TreeNode<int> *node = q.front();
            q.pop();
            if(first_node == 0){
                ans.push_back(node->data);
                first_node=1;
            }
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        first_node=0;
    }
    return ans;
}