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
         int dp[n];
         dp[0] = arr[0];
         dp[1] = arr[1];
        //  dp[2] = min(arr[0], arr[1]) + arr[2];
         for(int i=2;i<n;i++)
         {
             dp[i] = min(dp[i-1], dp[i-2]) + arr[i];
         }
         cout<<min(dp[n-1], dp[n-2])<<"\n";
         
         
     }
	//code
	return 0;
}