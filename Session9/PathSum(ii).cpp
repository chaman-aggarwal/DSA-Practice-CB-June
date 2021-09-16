https://leetcode.com/problems/path-sum-ii/

class Solution {
    
    void traversal(TreeNode* root, int targetSum, vector<int>& path, vector<vector<int>>&res)
    {
        if(root==NULL)
        {
            return;
        }
        path.push_back(root->val);
        if(!root->left && !root->right && targetSum == root->val)
        {
            res.push_back(path);
        }
        
        traversal(root->left, targetSum-root->val, path, res);
        traversal(root->right, targetSum-root->val, path, res);
        
        path.pop_back();
        
    }
    
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<vector<int>> res;
        vector<int> path;
        traversal(root, targetSum, path, res);
        return res;
        
    }
};