unordered_map<int ,int>mp;
int indx=0;
Node* solve(int pre[],int in[],int lb,int ub)
{
    
    if (lb>ub)
    return NULL;
    //int mid=(lb+ub+1)/2;
    Node*n=new Node(pre[indx++]);
    if (lb==ub)
    {
        
        
        return n;
    }
    
    else
    {
        
       int mid=mp[n->data];
        n->left=solve(pre,in,lb,mid-1);
        n->right=solve(pre,in,mid+1,ub);
         
        return n;
    }
    
    
}

class Solution{
    public:
    Node* buildTree(int in[],int pre[], int n)
    {
        indx=0;
       mp.clear();
    
        for (int i=0;i<n;i++)
        {
            mp[in[i]]=i;
        }
        
      Node*root=solve(pre,in,0,n-1);
  
      return root;
        
    }
};

//t.c = O(n)
//s.c = O(n) because of map
