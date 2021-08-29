https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/

class Solution {
public:
    int sum=0;
    TreeNode* bstToGst(TreeNode* root) {
        
        // reverse inorder
        if(root==NULL)
        {
            return NULL;
        }
        bstToGst(root->right);
        sum += root->val;
        root->val = sum;
        bstToGst(root->left);
        return root;
        
    }
};