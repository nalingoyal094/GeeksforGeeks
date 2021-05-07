//https://practice.geeksforgeeks.org/problems/generate-all-possible-parentheses/1#

class Solution
{
    public:
    
    vector<string>v;
    
    void ok(string curr,int score,int n,int open,int close)
    {
        
        if (score<0 || curr.size()>2*n)
        {
            return;
        }
        
        if (score==0 && curr.size()==2*n)
        {
            v.push_back(curr);
            return;
        }
        
        
        if (close<open)
        ok(curr+")",score-1,n,open,close+1);
        
        if (open<n)
        ok(curr+"(",score+1,n,open+1,close);
        
    }
    
    vector<string> AllParenthesis(int n) 
    {
        string curr="";
        
        int open=0;
        int close=0;
        
        ok(curr,0,n,0,0);
        return v;
        
    }
};
