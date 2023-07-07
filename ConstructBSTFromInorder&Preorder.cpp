int findPosition(vector<int> &inorder, int element, int start, int end)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==element)
        {
            return i;
        }
    }
    return -1;
}

TreeNode<int>* solve(vector<int> &inorder, vector<int> &preorder,
        int n, int &preIndex, int inorderStart, int inorderEnd)
{
    // base case
    if(preIndex>=n || inorderStart > inorderEnd)
    {
        return NULL;
    }

    int element=preorder[preIndex++];
    TreeNode<int>* root=new TreeNode<int>(element);
    int position=findPosition(inorder, element, inorderStart, inorderEnd);

    // Recursive calls
    root->left=solve(inorder, preorder, n, preIndex, inorderStart, position-1);

    root->right=solve(inorder, preorder, n, preIndex, position+1, inorderEnd);

    return root;
                                    
}

TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	//    Write your code here
    int n=inorder.size();

    int preIndex=0;

    TreeNode<int>* ans=solve(inorder, preorder, n, preIndex, 0, n-1);

    return ans;
}