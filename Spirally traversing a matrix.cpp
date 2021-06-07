class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    { 
        vector<int>arr(r*c);
        
        for (int i=0;i<r*c;i++)
        {
            
                arr[i]=0;
            
        }
        
        
        
        if (matrix.size()==0)
         return arr;
        
        int rr=0,cc=0;
    
   
    int k=0;
    while(rr<r && cc<c)
    {
        
        for(int j=cc;j<c;j++)
        {
            arr[k]=matrix[rr][j];
            k++;
        }
        rr++;
        
        for(int j=rr;j<r;j++)
        {
            arr[k]=matrix[j][c-1];
            k++;
        }
        c--;
        
        if (rr<=r-1)
        {for(int j=c-1;j>=cc;j--)
        {
            arr[k]=matrix[r-1][j];
            k++;
        }
        r--;
        }
        
        if (c-1>=cc)
        {
        for(int j=r-1;j>=rr;j--)
        {
            arr[k]=matrix[j][cc];
            k++;
        }
        cc++;
        }
        
        
    }
    
    return arr;
        
    }
};
