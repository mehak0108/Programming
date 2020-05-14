#include <bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define lol         1000000007
#define endl        '\n'
#define rep(i,a,b)	for(int i=a;i<b;i++)
#define SIZE        1000005
#define debug(x)    cerr << #x << " = " << x << endl;

using namespace std;

void MOD(ll &x)
{
	if (x >= lol) x -= lol;
	if (x < 0) x += lol;
}

ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }


void solve()
{
	int n;
	cin>>n;
	int arr[n];
	rep(i,0,n) cin>>arr[i];
	int lastind=n-1;
	int dp[n];
	dp[0]=0;
	rep(i,1,n)
	{
		dp[i] = 101;
		rep(j,0,i)
		{
			if((j+arr[j])>=i) dp[i] = min(dp[i], dp[j]+1);
		}
	}
	if(dp[n-1]==101) cout<<-1<<endl;
	else cout<<dp[n-1]<<endl;

	
	
}


// Remove  debugs!!

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
// 	#ifndef ONLINE_JUDGE
// 	    freopen("input.txt", "r", stdin);
// 	    freopen("output.txt", "w", stdout);
// 	#endif
	int t=1;
	cin>>t; int i=1;
	while(t--){
		//cout<<"Case #"<<i++<<": ";
		solve();
  	  	//cout<<endl;	
  	}
	return 0;
}