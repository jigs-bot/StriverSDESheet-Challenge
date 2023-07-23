#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

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

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
void inorder(BinaryTreeNode<int>*root , vector<int> &in){
    if(!root) return ;
    
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.
    vector<int> in;

    inorder(root,in);
    pair<int,int> p;
    for(int i=0;i<in.size();i++){
        if(in[i]==key){
            if(i>0 && i< in.size()-1)
                p=make_pair(in[i-1],in[i+1]);
            else if(i==0 && i==in.size()-1)
                p=make_pair(-1,-1);
            else if(i==0)
                p=make_pair(-1,in[i+1]);
            else if(i==in.size()-1)
                p=make_pair(in[i-1],-1);
            break;
        }
       
    }
    return p;
}
