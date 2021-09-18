https://leetcode.com/problems/recover-binary-search-tree/

class Solution {
    
    void visitTree(TreeNode* root, TreeNode* &prev, TreeNode* &first, TreeNode* &second)
    {
        if(root==NULL)
        {
            return;
        }
        visitTree(root->left, prev, first, second);
        
        if(prev!=NULL)
        {
            if(prev->val > root->val)
            {
                if(first==NULL)
                {
                    first = prev;
                }
                second = root;
            }
        }
        
        prev = root;
        
        visitTree(root->right, prev, first, second);
    }
    
public:
    void recoverTree(TreeNode* root) {
        
        TreeNode* prev = NULL, *first = NULL, *second = NULL;
        visitTree(root, prev, first, second);
        swap(first->val, second->val);
        return;
        
    }
};