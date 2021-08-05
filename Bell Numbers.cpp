// Pattern based only


class Solution{
public:

  int mod=1000000007;
    int bellNumber(int n)
    {
        int m[n+1][n+1];
        
        m[0][0]=1;
        
        for (int i=1;i<=n;i++)
        {
            for (int j=0;j<=i;j++)
            {
                if (j==0)
                {
                    m[i][j]=m[i-1][i-1];
                }
                else
                {
                    m[i][j]=(m[i-1][j-1]+m[i][j-1])%mod;
                }
            }
        }
        return m[n][0];
        
        
       
    }
};
