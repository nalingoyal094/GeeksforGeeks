class Solution
{
  public:
  
    long long int fun(string s, int k)
    {
        vector<int>v(26,0);
        
        long long int count=0;
        
        long long int ans=0;
        
        int start=0;
        
        for(int i=0;i<s.size();i++)
        {
            v[s[i]-'a']++;
            if (v[s[i]-'a']==1)
            {
                count++;
            }
            while(count>k)
            {
                v[s[start]-'a']--;
                if (v[s[start]-'a']==0)
                  count--;
                
                start++;
                
            }
            
            ans+=i-start+1;
             //cout<<ans<<endl;
            
        }
        return ans;
    }
    
    long long int substrCount (string s, int k) {
        
    //    return fun(s,k-1);
      return (fun(s,k)-fun(s,k-1));
     	
    }
};
