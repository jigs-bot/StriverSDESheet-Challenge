class node {
    public:
    int smallest,largest,size;
    bool isBST;
    node(int smallest,int largest,int size,bool isBST) {
        this->smallest=smallest;
        this->largest=largest;
        this->size=size;
        this->isBST=isBST;
    }
};
node helper(TreeNode<int>* root,int &ans) {
    if(!root) {
        node obj(INT_MAX,INT_MIN,0,true);
        return obj;
    }
    if(!root->left && !root->right) {
        node obj(root->data,root->data,1,true);
        ans=max(ans,1);
        return obj;
    }
    node l=helper(root->left,ans);
    node r=helper(root->right,ans);
    if(l.isBST && r.isBST && root->data>l.largest && root->data<r.smallest) {
        ans=max(ans,l.size + r.size + 1);
        int small=min(l.smallest,root->data);
        int large=max(r.largest,root->data);
        node obj(small,large,l.size+r.size+1,true);
        return obj;
    }
    else {
        node obj(INT_MAX,INT_MIN,0,false);
        return obj;
    }
}
int largestBST(TreeNode<int>* root) {
    if(!root) {
        return 0;
    }
    int ans=0;
    helper(root,ans);
    return ans;
}