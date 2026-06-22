class Solution {
public:
    void inorder(TreeNode* node,int count, int&maxcount)
    {
        if(node==nullptr)return;
        
        inorder(node->left,count+1,maxcount);
        inorder(node->right,count+1,maxcount);
        maxcount=max(maxcount,count);
    }
    int maxDepth(TreeNode* root) {
        int count=1;
        int maxcount=0;
        inorder(root,count,maxcount);
        return maxcount;
    }
};