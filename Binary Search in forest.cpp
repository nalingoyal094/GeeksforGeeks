class Solution{
    public:
    int find_height(int tree[], int n, int k)
    {
        
        sort(tree,tree+n);
        
        int max=tree[n-1];
        
        int low=0;
        int high=max;
        
        while(low<=high)
        {
        int mid=(low+high)/2;
        
        int a=0;
        
        for (int j=0;j<n;j++)
        {
            int i;
            i=tree[j];
            if (i>mid)
            {
                a+=i-mid;
            }
        }
        
       // cout<<a<<" "<<k<<endl;
        
        
        if (a==k)
        {
            return mid;
        }
        
        else if (a<k)
        {
             high=mid-1;
        }
        else
        {
            low=mid+1;
           
        }
        
        
        
        
        
        
        
        }
        
        
        return -1;
        
        
    }
};
