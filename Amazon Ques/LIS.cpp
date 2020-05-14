class Solution {
public:
    int lengthOfLIS(vector<int>& A) {
        
        int n = A.size();
        if(n==0) return 0;
        
        int dp[n];
        
        for(int i=0;i<n;i++) dp[i]=1;
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(A[j]<A[i])
                {
                    dp[i]= max(dp[i],dp[j]+1);
                    // break;
                }
            }
        }
        
        int ans=0;
        for(int i=0;i<n;i++)
            ans = max(ans,dp[i]);
        return ans;
    }
};