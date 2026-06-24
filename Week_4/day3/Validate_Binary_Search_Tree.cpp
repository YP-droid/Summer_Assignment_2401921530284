class Solution {
public:
    //min max approach, at each level set curr nodes val as the necessary check for all nodes below to clear
    bool check(TreeNode*node,long long mini,long long maxi)
    {
        if(!node)return true;
        if(node->val<=mini or node->val>=maxi)return false;
        return check(node->left,mini,node->val) and check(node->right,node->val,maxi); 
    }
    bool isValidBST(TreeNode* root) {
        return check(root,LONG_MIN,LONG_MAX);
    }
};