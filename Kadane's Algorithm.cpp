class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        int sum=INT_MIN;
        int s=0;
        
        for (int i=0;i<n;i++)
        {
            s+=arr[i];
            
            if(s>sum)
            {
                sum=s;
            }
            if (s<0)
            {
                s=0;
            }
            
            
        }
        return sum;
        
        
        
        return sum;
        
        
    }
};
