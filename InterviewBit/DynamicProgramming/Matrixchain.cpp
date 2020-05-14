using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int dp[n][n];
        for(int len=1;len<n;len++)
        {
            for(int i=0;i<n-1;i++)
            {
                int j = i+len-1;
                if(j>=(n-1)) continue;
                if(len==1)
                {
                    dp[i][j]=0;
                    continue;
                }
                dp[i][j] = INT_MAX;
                for(int k=i;k<j;k++)
                {
                    dp[i][j] = min(dp[i][j], dp[i][k]+dp[k+1][j]+arr[i]*arr[k+1]*arr[j+1]);
                }
            }
        }
        cout<<dp[0][n-2]<<endl;
        
    }
	return 0;
}