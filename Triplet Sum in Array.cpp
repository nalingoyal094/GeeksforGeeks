class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        sort(A,A+n);
        
        for (int i=0;i<n-2;i++)
        {
            int j=i+1,k=n-1;
            
            while(j<k)
            {if (A[i]+A[j]+A[k]==X)
            {
                return true;
                
            }
            else if (A[i]+A[j]+A[k]<X)
            {
                j++;
            }
            else
            {
                k--;
            }
            }
            
        }
        return false;

    }

};
