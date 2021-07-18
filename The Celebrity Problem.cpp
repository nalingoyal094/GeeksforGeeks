class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& m, int n) 
    {
        stack<int >s;
        for (int i=0;i<n;i++)
        {
            s.push(i);
        }
        
        while(s.size()>=2)
        {
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            
            if (m[a][b]==1)
            {
                s.push(b);
            }
            else
            {
                s.push(a);
            }
            
            
        }
        
        for (int i=0;i<n;i++)
        {
            if(m[i][s.top()]==0 && i!=s.top())
               return -1;
        }
        
        for (int i=0;i<n;i++)
        {
            if(m[s.top()][i]==1)
               return -1;
        }
        return s.top();
        
    }
};
