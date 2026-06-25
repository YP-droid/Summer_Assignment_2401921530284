class Solution {
public:
    int check(TreeNode* node,int&maxsum)
    {
        if(!node)return 0;
        int l = max(0,check(node->left,maxsum));int r = max(0,check(node->right,maxsum));
        int sum = l+r+node->val;
        maxsum =  max(maxsum,sum);
        return node->val + max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        int mini = -1e9;
        check(root,mini);
        return mini;
    }
};