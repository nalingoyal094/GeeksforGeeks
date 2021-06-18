class Solution {
public:
    int res=INT_MIN;
    int max_sum(Node*root)
    {
        if (root==NULL)
        {
            return 0;
        }
        if(root->left==NULL && root->right==NULL)
        {
           
            return root->data;
        }
        
        // return maximum sum of path from root to leaf in left subtree
        int ls=max_sum(root->left);
        // return maximum sum of path from root to leaf in right subtree
        int rs=max_sum(root->right);
        
        if (root->right && root->left)
        {  
          //update res
           res=max(res,ls+rs+root->data);
           
           return max(ls,rs)+root->data;
        }
     
        if (root->left==NULL)
        {
            
            return rs+root->data;
        }
        if (root->right==NULL)
        {
            
            return ls+root->data;
        }
        
       
        
    }
    
    int maxPathSum(Node* root)
    {
        int val=max_sum(root);
        
        //res remains INT MIN when
        // 1. root=NULL;
        // 2. only children are not pr root node is present, itsesent;
        // 3. only right subtree is present or only left subtree is present
        
        
        if (res==INT_MIN)
        {
            return val;
        }
        
        //return res when both left and right subtree is present
        return res;
    }
};
