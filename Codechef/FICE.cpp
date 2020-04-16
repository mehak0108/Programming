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

int n,m;

void MOD(int &x)
{
	if (x >= m) x -= m;
	if (x < 0) x += m;
}


void solve()
{
	
	cin>>n>>m;

	int dp[n+1];
	dp[0]=0;
	dp[1]=1;
	dp[2]=1;

	for(int i=3;i<=n;i++)
	{
		dp[i] = dp[i-1] + dp[i-2];
		// if(dp[i]>=m) dp[i] -= m;
		MOD(dp[i]);
	}

	int vl = dp[n]*2;
	while(vl>=m) MOD(vl);
	// ll val = dp[];

	cout<<vl<<endl;
	
}


int main()
{
	// ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}