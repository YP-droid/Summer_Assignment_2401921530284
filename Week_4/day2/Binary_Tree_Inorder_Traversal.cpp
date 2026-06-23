class Solution {
public:
    void inorder(TreeNode* node,vector<int>&v)
    {
        if(!node)return;
        inorder(node->left,v);
        v.push_back(node->val);
        inorder(node->right,v);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        return v;
    }
};