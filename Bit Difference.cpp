class Solution{
public:
    int countBits(int N, long long int A[])
    {
        long long int res=0;
        
        for (int ii=0;ii<32;ii++)
        {
            long count=0;
            
            for (int i=0;i<N;i++)
            {
                if (A[i]& (1<<ii))
                {
                    count++;
                }
            }
            
            res=(res+(count*(N-count)*2)%1000000007)%1000000007;
            
        }
        return res;
    }
};
