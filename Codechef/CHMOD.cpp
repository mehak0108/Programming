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
#define M        	1000000007
#define endl        '\n'
#define debug(x)    cerr << #x << " = " << x << endl;

using namespace std;

int a[MAX];
ll pref[MAX];

int l,r,m;
int n;

void MOD(ll &x)
{
	if (x >= m) x -= m;
	if (x < 0) x += m;
}

void solve()
{
	cin>>l>>r>>m;

	l--;r--;

	pref[0] = a[0];
	for(int i=1;i<n;i++)
	{
		pref[i] = pref[i-1]*a[i];
		MOD(pref[i]);
	}

	ll val;
	if(l>0)
	{
		// while((pref[r]/pref[l-1])>=m) MOD(pref[r]/pref[l-1]);
		val = (pref[r]/pref[l-1])%m;
	}
	else
	{
		while(pref[r]>=m) MOD(pref[r]);
		val = pref[r];
	}
	// val = val%m;
	cout<<val<<endl;	
}


int main()
{
	// ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	
	cin>>n;

	rep(i,0,n) cin>>a[i];
	
	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}