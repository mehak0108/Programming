using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n, x, y;
        cin>>n>>x>>y;
        int a[n], b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int dp[x+1][y+1];
        for(int i=0;i<=x;i++)
        {
            for(int j=0;j<=y;j++)
            {
                dp[i][j] = 0;
            }
        }
        dp[0][0] = 0;
        for(int i=0;i<=x;i++)
        {
            for(int j=0;j<=y;j++)
            {
                if((i+j)>n) continue;
                if(!i && !j) continue;
                else if(!i) dp[i][j] = dp[i][j-1]+b[i+j-1];
                else if(!j) dp[i][j] = dp[i-1][j]+a[i+j-1];
                else dp[i][j] = max(dp[i-1][j]+a[i+j-1], dp[i][j-1]+b[i+j-1]);
            }
        }
        int ans = 0;
        for(int i=0;i<=x;i++)
        {
            for(int j=0;j<=y;j++)
            {
                ans = max(ans, dp[i][j]);
            }
        }

        cout<<ans<<endl;
        
        
    }
    
    
    
    
    
	//code
	return 0;
}