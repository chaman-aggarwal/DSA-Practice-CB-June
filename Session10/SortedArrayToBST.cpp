https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

class Solution {   
    
    TreeNode* buildBST(vector<int>& nums, int s, int e)
    {
        if(s>e)
        {
            return NULL;
        }
        int mid = (s+e)/2;
        
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = buildBST(nums, s, mid-1);
        root->right = buildBST(nums, mid+1, e);
        
        return root;
    }
    
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int n = nums.size();
        return buildBST(nums, 0, n-1);
        
    }
};