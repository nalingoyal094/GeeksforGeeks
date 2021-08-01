int findZeroes(int arr[], int n, int m) 
    {
        int cnt=0;
        int len= INT_MIN;
        int j=0;
        
        int i=0;
        
        for ( i=0;i<n;i++)
        {
            if (arr[i]==0)
            {
                cnt++;
            }
            
            while(cnt>m)
            {
               if (arr[j]==0)
               {
                   cnt--;
               }
               j++;
                
            }
            
            len=max(len,i-j+1);
            
        }
        
        len=max(len,i-j);
        
        
        
        return len;
        
        
        
        
        
        
        
        
        
    } 
