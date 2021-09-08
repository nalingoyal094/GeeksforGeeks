//method 1 - using recusion only 

int paths(int i, int j , int ii , int jj)
{
    if (i>ii || j>jj)
    {
        return 0;
    }
    
    if (i==ii && j==jj)
    {
        return 1;
    }
    
    return paths(i+1,j,ii,jj)+paths(i,j+1,ii,jj);
    
}

long long  numberOfPaths(int m, int n)
{
    int i=0;
    int j=0;
    int ii=m-1;
    int jj=n-1;
    
    return paths(i,j,ii,jj);
    
}

// t.c= O(2^n)
// s.c= O(m*n) due to recusion stack


// method 2 : using memorisation in recursion


long long int paths(int i, int j , int ii , int jj, vector<vector<long long int>>&dp)
{
    if (i>ii || j>jj)
    {
        return 0;
    }
    
    if (i==ii && j==jj)
    {
    
        
        return 1;
    }
    
    if (dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    else
    {
    dp[i][j]=paths(i+1,j,ii,jj,dp)+paths(i,j+1,ii,jj,dp);
    return dp[i][j];
    }
}
long long  numberOfPaths(int m, int n)
{
    int i=0;
    int j=0;
    int ii=m-1;
    int jj=n-1;
    vector<vector<long long int>>dp(11,vector<long long int>(11,-1));
    paths(i,j,ii,jj,dp);
    return dp[0][0];
}

// t.c= O(m*n)
// s.c= O(m(*n)

// method 3 - using combinatrics

long long  numberOfPaths(int m, int n)
{
    long long paths=1;
     
     //refer editorial for explaination....
     //we are calculating (m+n-2)!/ (n-1)!(m-1)!
    
    for (long long i=n;i<m+n-1;i++)
    {
        paths*=i;
        paths/=(i-n+1);
    }
    return paths;
    
}
// t.c= O(m+n-1)
// s.c=O(1)
