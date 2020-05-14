using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int dp[n+1];
        dp[0] = 1;
        for(int i=1;i<=n;i++) dp[i] = 0;
        for(int i=0;i<=n;i++)
        {
            if(i>=3) dp[i] += dp[i-3];
        }
        for(int i=0;i<=n;i++)
        {
            if(i>=5) dp[i] += dp[i-5];
        }
        for(int i=0;i<=n;i++)
        {
            if(i>=10) dp[i] += dp[i-10];
        }
        cout<<dp[n]<<endl;
        
        
    }
    
    
    
    
	//code
	return 0;
}