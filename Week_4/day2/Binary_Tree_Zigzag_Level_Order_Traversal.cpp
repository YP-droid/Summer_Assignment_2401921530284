class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)return {};
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        int count=-1; //to check odd even level
        while(!q.empty())
        {
            vector<int>v;
            int s = q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode* node = q.front();q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                v.push_back(node->val);
            }
            count++;
            if(count%2!=0)reverse(v.begin(),v.end());
            ans.push_back(v);
        }
        return ans;
    }
};