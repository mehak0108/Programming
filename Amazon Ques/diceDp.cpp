class Solution {
public:
    int numRollsToTarget(int n, int f, int sum) {
        
        long long dp[n+1][sum+1];
        
        for(int i=0;i<=n;i++) for(int j=0;j<=sum;j++) dp[i][j]=0;
        
        for(int i=1;i<=n;i++) dp[i][0] = 0;
        for(int i=1;i<=sum;i++) dp[0][i] = 0;
        
        dp[0][0]=1;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                for(int k=1;k<=f;k++)
                {
                    if(j>=k)
                        dp[i][j] = (dp[i-1][j-k] + dp[i][j])%(long long)(1e9+7);
                }
            }
        }
        
        return dp[n][sum];

    }
};