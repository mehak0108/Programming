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


void solve()
{
	ll n,k;
    cin>>n>>k;
    ll ans;
    if(n%2==0)
    {
        if(k<=n/2)
            ans = 2*k - 1;
        else
            ans = 2*(k-n/2);
    }
    else
    {
        ll x = n/2;
        if(k<=x+1)
            ans = 2*k-1;
        else 
            ans = 2*(k-x-1);
    }
	cout<<ans<<endl;
}


int main()
{
	// ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	// cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}