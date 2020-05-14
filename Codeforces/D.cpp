#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];

	int dp[n+1][4];

	for(int i=0;i<=n;i++) for(int j=0;j<4;j++) dp[i][j] = INT_MAX-1;

	dp[0][0] = 0;
	for(int i=1; i<=n; i++) 
	{
   		dp[i][0] = min(dp[i][0], min(dp[i-1][0], min(dp[i-1][1], dp[i-1][2]))) + 1;
   		if(a[i-1] == 1 || a[i-1] == 3)
   			dp[i][1] = min(dp[i][1], min(dp[i-1][0], dp[i-1][2]));
   		if(a[i-1] == 2 || a[i-1] == 3)
   			dp[i][2] = min(dp[i][2], min(dp[i-1][0], dp[i-1][1]));
   	}
   	cout << min(dp[n][0], min(dp[n][1], dp[n][2]));

}
