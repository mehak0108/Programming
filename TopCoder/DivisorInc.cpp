#include <bits/stdc++.h>

#define ONLINE_JUDGE  freopen("../input","r",stdin); freopen("../output","w",stdout);
#define MAX 		100001
#define ll          long long
#define ld          long double
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define rep(i,a,b)	for(int i=a;i<b;i++)
#define M         1000000007
#define endl        '\n'
#define debug(x)    cerr << #x << " = " << x << endl;

using namespace std;

int dp[MAX];

class DivisorInc
{
	public:
		int countOperations(int n,int m)
		{
			int n,m;
			cin>>n>>m;

			if(n==m)
			{
				cout<<0<<endl;
				return;
			} 
				
			for(int i=0;i<MAX;i++) dp[i]=INT_MAX-1;

			dp[n] = 0;
			
			for(int i=n;i<=m;i++)
			{
				if(dp[i]!=INT_MAX-1)
				{
					for(int j=2;j*j<=i;j++)
					{
						if(i%j==0)
						{
							if(i+j<=m)
								dp[i+j] = min(dp[i+j],dp[i]+1);
							if(i+i/j<=m)
								dp[i+i/j] = min(dp[i+i/j],dp[i]+1);
						}
					}
				}
			}

			if(dp[m]!=INT_MAX-1)
				cout<<dp[m]<<endl;
			else
				cout<<-1<<endl;
			// int ops=0;
			// int sum=n;
			
			// findOps(m,sum,ans,ops);

			// cout<<ans<<endl;
		}
};

// int main()
// {
// 	// ONLINE_JUDGE
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);
// 	int t=1;
// 	// cin>>t;
// 	while(t--)
// 	{
// 		solve();
// 	}
// 	return 0;
// }

/*
6
4 24
4 576
8748 83462
235 98234
4 99991
82736 82736
*/