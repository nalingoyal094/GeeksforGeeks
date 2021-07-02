string fractionToDecimal(int n, int d) {
	    
	    int q=n/d;
	    int r=n%d;
	    string ans="";
	    ans+=to_string(q);
	    map<int ,int >mp;
	    if (r==0)
	    {
	        return ans;
	    }
	    else
	    {
	        ans+=".";
	        
	        while(r!=0)
	        {
	            if (mp[r]!=0)
	            {
	                ans.insert(mp[r],"(");
	                ans.insert(ans.size(),")");
	                break;
	            }
	            
	            mp[r]=ans.length();
	            n=r*10;
	            q=n/d;
	            r=n%d;
	            ans+=to_string(q);
	            
	        }
	    }
	    return ans;
	    
	}
