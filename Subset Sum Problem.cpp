class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        bool dp[N+1][sum+1];
        
        for(int i = 0; i <= N; i++){
            for(int j = 0; j <= sum; j++){
                if(j==0)
                    dp[i][j] = true;
                else if(i==0)
                    dp[i][j] = false;
                else if(j < arr[i-1])
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
                
            }
        }
        return dp[N][sum];
    }
};
