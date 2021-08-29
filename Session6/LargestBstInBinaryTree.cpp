https://practice.geeksforgeeks.org/problems/largest-bst/1#

class Solution{
    
    // 0 -> isBST
    // 1 -> size
    // 2 -> minVal
    // 3 -> maxVal
    vector<int> maxSizeBST(Node* root)
    {
        if(root==NULL)
        {
            return {1, 0, INT_MAX, INT_MIN};
        }
        if(!root->left && !root->right)
        {
            return {1, 1, root->data, root->data};
        }
        
        vector<int> ls = maxSizeBST(root->left);
        vector<int> rs = maxSizeBST(root->right);
        
        if(ls[0]==1 && rs[0]==1)
        {
            if(ls[3] < root->data && root->data < rs[2])
            {
                int minVal = ls[2];
                int maxVal = rs[3];
                
                if(minVal == INT_MAX)
                {
                    minVal = root->data;
                }
                if(maxVal == INT_MIN)
                {
                    maxVal = root->data;
                }
                
                return {1, ls[1] + rs[1] + 1, minVal, maxVal};
                
            }
        }
        
        return {0, max(ls[1], rs[1]), 0, 0};
        
    }
    
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    int largestBst(Node *root)
    {
    	//Your code here
    	vector<int> res = maxSizeBST(root);
    	return res[1];

    }
};