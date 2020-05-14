int Solution::numDecodings(string A) {
    
    int  n = A.length();
    
    int dp[n+1];
    
    if(n==1 && A[0]=='0') return 0;
   
    dp[1] = (A[0]!='0')? 1 : 0;
    dp[0] = 0;
    for(int i=2;i<=n;i++)
    {
        if(A[i-1]=='0' && (A[i-2]!='1' && A[i-2]!='2' ))
            return 0;
        dp[i] = ((A[i-1]!='0')? dp[i-1] : 1) + (((A[i-2]=='2' && A[i-1]>='0' && A[i-1]<='6') || (A[i-2]=='1' && A[i-1]<='9' && A[i-1]>='0'))? dp[i-2]:0);
    }
    
    return dp[n];
}
