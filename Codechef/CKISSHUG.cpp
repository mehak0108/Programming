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

ll power(ll base,ll exp)
{
	ll res=1;
	while(exp>0)
	{
		if(exp%2==1)
			res = (res*base)%M;
		base = (base*base)%M;
		exp/=2;
	}
	return res%M;
}

void solve()
{
	ll n;

	cin>>n;

	ll tmp = power(2,n/2);
	ll val;
	if(n%2==1)
	{
		val = (4*tmp - 2)%M;
	}
	else
		val = (3*tmp-2)%M;

	cout<<val<<endl;
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