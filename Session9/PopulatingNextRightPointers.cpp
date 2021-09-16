https://leetcode.com/problems/populating-next-right-pointers-in-each-node/

class Solution {
public:
    Node* connect(Node* root) {
        
        if(!root)
        {
            return NULL;
        }
        
        Node* curr = root;
        while(curr->left!=NULL)
        {
            Node* nextLevel = curr->left;
            while(curr!=NULL)
            {
                curr->left->next = curr->right;
                if(curr->next)
                {
                    curr->right->next = curr->next->left;
                }
                // else
                // {
                //     curr->right->next = NULL;
                // }
                curr = curr->next;
            }
            curr = nextLevel;
        }
        
        return root;
        
    }
};