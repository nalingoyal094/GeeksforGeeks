
// method 1 - Recursive
class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
  
    void mirror(Node* node) 
    {
        if (node==NULL || node->left==NULL and node->right==NULL)
        {
            return ;
        }
        swap(node->left,node->right);
        mirror(node->left);
        mirror(node->right);
        
        
    }
};

// t.c=o(n)
// s.c=O(h)  h is height  


// method 2 - Iterative

class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) 
    {
        if (node==NULL || node->left==NULL and node->right==NULL)
        return;
        
        queue<Node*>q;
        q.push(node);
        
        while(q.empty()==false)
        {
            Node*f=q.front();
            q.pop();
            swap(f->right,f->left);
            if (f->left)
            q.push(f->left);
            if (f->right)
            q.push(f->right);
        }
        
    }
};

// t.c=O(n)
// t.c=O(n)



