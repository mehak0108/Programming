#include <bits/stdc++.h>

#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
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
#define lol         1000000007
#define endl        '\n'
#define debug(x)    cerr << #x << " = " << x << endl;

using namespace std;

void MOD(ll &x)
{
	if (x >= lol) x -= lol;
	if (x < 0) x += lol;
}


ll solve(string s)
{
	int n = s.length();

	ll dp[n+1];

	dp[0] = 1;
	dp[1] = 1;


	for(int i=2;i<=n;i++)
	{
		if(s[i-2]=='0' && s[i-1]=='0') return 0;
		dp[i] = ((s[i-1]!='0')? dp[i-1]:0) + ((s[i-2]=='1' || (s[i-2]=='2' && s[i-1]<='6'))? dp[i-2]:0);
	}
	
	// cout<<dp[n]<<endl;
	return dp[n];
}


int main()
{
	ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
// 	int t=1;
// //	cin>>t;
// 	while(t--){
// 		solve();
// 	}
	string s;
	
	while(cin>>s)
	{
		if(s[0]=='0') break;
		cout<<solve(s)<<endl;
	}
	
	return 0;
}