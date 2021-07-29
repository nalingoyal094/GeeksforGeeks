class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    
    static bool comparison( Job Job1,  Job Job2)
    {
        return Job1.profit>Job2.profit;
    }
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        
        sort(arr,arr + n,comparison);
        
        int result[n];
        int slot[n];
        
        for (int i=0;i<n;i++)
        {
            slot[i]=0;
        }
        
       
        
        
        for (int i=0;i<n;i++)
        {
            for (int j=min(n,arr[i].dead)-1;j>=0;j--)
            {
                if (slot[j]==0)
                {
                    slot[j]=1;
                    result[j]=i;
                    break;
                }
                
            }
            
            
        }
        int cnt=0;
        int pr=0;
        for (int i=0;i<n;i++)
        {
            if (slot[i]==1)
            {
                cnt++;
                pr+=arr[result[i]].profit;
            }
        }
        
        return {cnt,pr};

    } 
};
