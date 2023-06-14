#include <bits/stdc++.h> 
/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
    class BinaryTreeNode {
        public: 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/
void inorder(BinaryTreeNode<int> *root,vector<int> &levelorder){
    if(root==NULL)
        return;
    inorder(root->left,levelorder);
    levelorder.push_back(root->data);
    inorder(root->right,levelorder);
}
bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    vector<int> levelorder;
    inorder(root,levelorder);

    int i=0,j=levelorder.size()-1;
    while(i<j){
        if(levelorder[i]+levelorder[j] == k){
            return true;
        }
        else if(levelorder[i]+levelorder[j] > k){
            j--;
        }
        else i++;
    }
    return false;
}