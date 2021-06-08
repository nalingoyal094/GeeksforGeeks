class Solution{
public:		

		
	int lps(string s)
	{
	    
	    
	    int i=0;
	    int j=0;
	    int cnt=0;
	    for (int j=1;j<s.size();j++)
	    {
	        if (s[j]==s[i])
	        {
	            cnt++;
	            
	            i++;
	        }
	        else
	        {
	            j=j-(i-1)-1;
	            i=0;
	            cnt=0;
	        }
	        
	    }
	  return i;
	    
	    
	}
};
