https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

// Queue Approach
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        if(!root)
        {
            return {};
        }
        
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        bool dirLtoR = true;
        while(!q.empty())
        {
            int n = q.size();
            vector<int> curr(n);
            for(int i=0; i<n; i++)
            {
                TreeNode* f = q.front();
                q.pop();
                int index = (dirLtoR) ? i : (n-1-i);
                curr[index] = f->val;
                if(f->left)
                {
                    q.push(f->left);
                }
                if(f->right)
                {
                    q.push(f->right);
                }
            }
            dirLtoR = !dirLtoR;
            res.push_back(curr);
        }
        
        return res;
        
    }
};




// Stack Approach
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        if(root==NULL)
        {
            return {};
        }
        
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        
        s1.push(root);
        vector<vector<int>> res;
        vector<int> tempAns;
        
        while(!s1.empty() || !s2.empty())
        {
            while(!s1.empty())
            {
                TreeNode *temp = s1.top();
                s1.pop();
                tempAns.push_back(temp->val);
                
                if(temp->left)
                {
                    s2.push(temp->left);
                }
                if(temp->right)
                {
                    s2.push(temp->right);
                }
                
            }
            
            res.push_back(tempAns);
            tempAns.clear();
            
            while(!s2.empty())
            {
                TreeNode *temp = s2.top();
                s2.pop();
                tempAns.push_back(temp->val);
                
                if(temp->right)
                {
                    s1.push(temp->right);
                }
                if(temp->left)
                {
                    s1.push(temp->left);
                }
                
            }
            
            if(tempAns.size() > 0)
            {
                res.push_back(tempAns);
                tempAns.clear();   
            }
            
        }
        
        return res;
        
    }
};