https://leetcode.com/problems/delete-node-in-a-bst/

class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(root==NULL)
        {
            return NULL;
        }
        else if(root->val > key)
        {
            root->left = deleteNode(root->left, key);
            return root;
        }
        else if(root->val < key)
        {
            root->right = deleteNode(root->right, key);
            return root;
        }
        // root->val == key
        else
        {
            // leaf node
            if(!root->left && !root->right)
            {
                return NULL;
            }
            // 1 child
            else if(!root->left && root->right)
            {
                return root->right;
            }
            else if(root->left && !root->right)
            {
                return root->left;
            }
            // 2 child
            TreeNode* replace = root->right;
            while(replace->left!=NULL)
            {
                replace = replace->left;
            }
            root->val = replace->val;
            root->right = deleteNode(root->right, replace->val);
            return root;
        }
        
    }
};