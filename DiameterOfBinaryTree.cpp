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

int height(TreeNode<int> *root){
    if(root==NULL){
        return 0;
    }
    int left_height = height(root->left);
    int right_height = height(root->right);

    return max(left_height,right_height) + 1;

}

int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    if(root == NULL){
        return 0;
    }

    int diameter1 = height(root->left) + height(root->right) + 1;
    int diameter2 = diameterOfBinaryTree(root -> left);
    int diameter3 = diameterOfBinaryTree(root -> right);

    return max(diameter1,max(diameter2,diameter3))-1;

}
