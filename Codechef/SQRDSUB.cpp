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

void MOD(ll &x)
{
	if (x >= M) x -= M;
	if (x < 0) x += M;
}

ll findSum(vector<ll> &a, int n)
{
	ll sum=0;
	ll ct=0;
	unordered_map<ll,ll> mp;

	for(ll i=0;i<n;i++)
	{
		sum += a[i];
		if(sum==1)
			ct++;
		if(mp.find(sum-1)!=mp.end())
			ct += (mp[sum-1]);
		mp[sum]++;
	}

	return ct;
}
void solve()
{
	ll n;
	cin>>n;

	vector<ll> a(n);

	rep(i,0,n) cin>>a[i];

	rep(i,0,n)
	{
		if(a[i]%4==0)
			a[i] = 2;
		else if(a[i]%2==0)
			a[i] = 1;
		else
			a[i] = 0;
	}

	// for(int i=0;i<n;i++) cout<<a[i]<<" ";
	ll vl = ((n*(n+1))/2 - findSum(a,n));
	
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