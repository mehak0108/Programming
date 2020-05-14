
long long dp[1000001];

int findDerangement(int n) {

    dp[0]=1;
    dp[1]=0;
    dp[2]=1;
    
    for(int i=3;i<=n;i++)
    {
        dp[i] = ((i-1)*(dp[i-1]+dp[i-2]))%(long long)(1e9+7);
    }
    
    return dp[n]%(long long)(1e9+7);

    }
};