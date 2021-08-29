https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/

class Solution {  
    
    void find_parents(unordered_map<TreeNode*, TreeNode*>& parents, TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left!=NULL)
        {
            parents[root->left] = root;
            find_parents(parents, root->left);
        }
        if(root->right!=NULL)
        {
            parents[root->right] = root;
            find_parents(parents, root->right);
        }
    }
    
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        unordered_map<TreeNode*, TreeNode*> parents;
        
        find_parents(parents, root);
        
        unordered_map<TreeNode*, bool> visited;
        queue<TreeNode*> q;
        q.push(target);
        
        vector<int> res;
        
        while(!q.empty())
        {
            int n = q.size();
            while(n--)
            {
                TreeNode* curr = q.front();
                q.pop();
                visited[curr] = true;
                
                if(k==0)
                {
                    res.push_back(curr->val);
                }
                
                // check for left and right child which are not visited
                if(curr->left && !visited[curr->left])
                {
                    q.push(curr->left);
                }
                if(curr->right && !visited[curr->right])
                {
                    q.push(curr->right);
                }
                
                // check for unvisited parent
                if(parents.count(curr)>0 && visited[parents[curr]]==false)
                {
                    q.push(parents[curr]);
                }
            }
            k--;
            if(k<0)
            {
                break;
            }
        }
        
        return res;
        
    }
};