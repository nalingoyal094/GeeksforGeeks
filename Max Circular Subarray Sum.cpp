class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    
    
    int kadane(int arr[],int num)
    {
        int max_so_far=0;
        int max_ending_here=0;
        
        for (int i=0;i<num;i++)
        {
            max_ending_here+=arr[i];
            
            if (max_ending_here<0)
            {
                max_ending_here=0;
            }
            
            if (max_ending_here>max_so_far)
            {
                max_so_far=max_ending_here;
            }
            
        }
        return max_so_far;
        
    }
    
    
    
    
    
    int circularSubarraySum(int arr[], int num)
    {
        int a=kadane(arr,num);
        
        int sum=0;
        int maxx=INT_MIN;
        for (int i=0;i<num;i++)
        {
            sum+=arr[i];
            maxx=max(maxx,arr[i]);
            arr[i]=-arr[i];
            
        }
        if (maxx<0)
        return maxx;
        
        int b=kadane(arr,num);
        
        return max(a,sum-(-b));
        
        
        
        
        
        
    }
};
