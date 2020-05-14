using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        int arr[m];
        for(int i=0;i<m;i++) cin>>arr[i];
        int n;
        cin>>n;
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++) dp[i][0]=1;
        for(int i=1;i<=n;i++) dp[0][i]=0;
        // dp[0] = 1;
        // for(int i=0;i<m;i++) dp[arr[i]]=1;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(j>=arr[i]) dp[i+1][j] = dp[i][j] + dp[i][j-arr[i]];
                else dp[i+1][j] = dp[i][j];
            }
        }
        cout<<dp[m][n]<<endl;
        
        
        
        
    }
    
    
    
    
    
    
    
    
	//code
	return 0;
}