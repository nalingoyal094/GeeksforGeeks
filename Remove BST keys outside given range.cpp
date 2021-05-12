// https://practice.geeksforgeeks.org/problems/remove-bst-keys-outside-given-range/1#

class Solution {
    public:
    Node* removekeys(Node* root, int l, int r) {
        
        if (root==NULL)
          return NULL;
          
        root->left=removekeys(root->left,l,r);
        root->right=removekeys(root->right,l,r);
        
        if (root->data>=l and root->data<=r)
        {
            return root;
        }
        else if (root->data<l )
        {
            return root->right;
        }
        else
        {
            return root->left;
        }
        
    }
};
