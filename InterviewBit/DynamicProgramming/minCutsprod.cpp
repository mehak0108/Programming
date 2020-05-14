#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long dp[n+1];
        for(int i=0;i<=n;i++) dp[i] = 0;
        dp[2] = 1;
        dp[3] =2;
        for(int i=4;i<=n;i++)
        {
            for(int j=1;j<i;j++)
            {
                dp[i] = max((long long)dp[i-j]*(j+1),dp[i]);
            }
        }
        cout<<dp[n]<<endl;
    }
	return 0;
}