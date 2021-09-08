class Solution
{
    
    public:
    
    vector<string>ans;
    
    void paran(int open, int close, int n , string temp)
    {
        if (close>open || open>n || close>n)
        {
            return;
        }
        
        if (open==n && close==n)
        {
            ans.push_back(temp);
        }
        
        else if (open==close)
       {
           paran(open+1,close,n,temp+'(');
       }
       else 
       {
           paran(open+1,close,n,temp+'(');
           paran(open,close+1,n,temp+')');
       }
        
        
    }
    
    
    vector<string> AllParenthesis(int n) 
    {
        ans.resize(0);
        
        int open=0;
        int close=0;
        
        paran(open,close,n,"");
        return ans;
        
        
    }
};
