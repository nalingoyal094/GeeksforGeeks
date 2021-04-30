class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int ternarySearch(int arr[], int N, int K) 
    {
        int l=0;
        int r=N-1;
        
        while (r>=l)
        {
            int mid1=l+(r-l)/3;
            int mid2=r-(r-l)/3;
            
            if (arr[mid1]==K)
                return 1;
            if (arr[mid2]==K)
               return 1;
               
            if (arr[mid1]>K)
            {
                r=mid1-1;
            }
            else if (arr[mid2]<K)
            {
                l=mid2+1;
            }
            else
            {
                l=mid1+1;
                r=mid2-1;
            }
            
            
            
        }
    return -1;
       
       
    }
};
