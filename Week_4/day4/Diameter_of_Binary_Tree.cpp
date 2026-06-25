class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int dia=0;
        dfs(root,dia);
        return dia;
    }
    int dfs(TreeNode* root,int& dia){
        if(!root)return 0;
        int l = dfs(root->left,dia);
        int r = dfs(root->right,dia);
        dia = max(dia,l+r);
        return 1+max(l,r);
    }
    
};