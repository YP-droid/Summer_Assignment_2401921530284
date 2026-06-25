class Solution {
public:
    bool check(TreeNode* node,int t,int sum)
    {
        if(!node)return false;
        sum+=node->val;
        if(!node->left and !node->right and sum==t)return true;
        return check(node->right,t,sum) or check(node->left,t,sum);
    }
    bool hasPathSum(TreeNode* root, int t) {
        return check(root,t,0);
    }
};