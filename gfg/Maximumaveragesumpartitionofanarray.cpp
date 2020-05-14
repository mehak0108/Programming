#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    
	    int k;
	    cin>>k;
	    int pref[n+1];
	    pref[0]=0;
	    
	    for(int i=1;i<=n;i++)
	        pref[i] = pref[i-1]+a[i-1];
	   
	   double dp[n+1][k];
	   //k=0 no partition;
	   for(int i=1;i<=n;i++) dp[i][0] = (double)pref[i]/(i);
	   for(int i=1;i<k;i++) dp[0][i] = 0;
	   dp[0][0]=0;
	   
	   for(int i=1;i<=n;i++)
	   {
	       for(int j=1;j<k;j++)
	       {
	           if(j>i)
	           {
	               dp[i][j] = dp[i][i];
	               continue;
	           }
	           
	           dp[i][j] = INT_MIN;
	           for(int h=i;h>=j;h--)
	           {
	               dp[i][j] = max(dp[i][j], dp[h-1][j-1]+(double)(pref[i]-pref[h-1])/(i-h+1));
	           }
	       }
	   }
	    
	   cout<<dp[n][k-1]<<endl;
	}
}