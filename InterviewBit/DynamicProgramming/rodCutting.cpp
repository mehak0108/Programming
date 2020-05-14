using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int arr[n+1];
         for(int i=1;i<=n;i++)
         {
             cin>>arr[i];
         }
         int dp[n+1];
         dp[0] = 0;
         dp[1] = arr[1];
         for(int i=2;i<=n;i++)
         {
             int temp = 0;
             for(int j=1;j<=i;j++)
             {
                 temp = max(temp, dp[i-j]+arr[j]);
             }
             dp[i] = temp;
         }
         cout<<dp[n]<<"\n";
         
         
         
     }
	//code
	return 0;
}