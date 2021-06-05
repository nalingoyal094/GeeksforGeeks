class Solution{
public:
	
	int findMaximum(int a[], int n) {
	    
	    int l=0;
	    int h=n-1;
	    
	    
	    while(l<=h)
	    {
	       int mid=(l+h)/2;
	       
	       if (mid-1<0 && mid+1>=n)
	       {
	           return a[mid];
	       }
	        
	        if (mid-1<0 )
	        {
	            if (a[mid+1]>=a[mid])
	            {
	                l=mid+1;
	            }
	            else
	            {
	                return a[mid];
	            }
	            
	        }
	        
	        else if (mid+1>=n)
	        {
	            if (a[mid-1]>=a[mid])
	            {
	                h=mid-1;
	            }
	            else
	            {
	                return a[mid];
	            }
	            
	        }
	        
	        
	        else if (a[mid+1]<a[mid] && a[mid-1]<a[mid] )
	        {
	            return a[mid];
	        }
	        
	        
	        else if (a[mid+1]>=a[mid])
	        {
	            l=mid+1;
	        }
	        else if (a[mid+1]<a[mid])
	        {
	            h=mid;
	        }
	        
	    }
	 
	    
	    
	    
	}
};
