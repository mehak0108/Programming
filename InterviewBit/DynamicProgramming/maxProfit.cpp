using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>k>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int dp[n+1][k+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=k;j++)
            {
                dp[i][j] = 0;
            }
        }
        for(int j=1;j<=k;j++)
        {
            for(int i=1;i<=n;i++)
            {
                dp[i][j] = dp[i-1][j];
                for(int l=1;l<i;l++)
                {
                    dp[i][j] = max(dp[i][j], dp[l][j-1] + arr[i-1] - arr[l-1]);
                }
            }
        }
        
        
        
        cout<<dp[n][k]<<endl;
        
        
    }
    
    
    
    
    
    
    
	//code
	return 0;
}