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
#define lol         1000000007
#define endl        '\n'
#define debug(x)    cerr << #x << " = " << x << endl;

using namespace std;

void MOD(ll &x)
{
	if (x >= lol) x -= lol;
	if (x < 0) x += lol;
}

// int isPrime[100000];

// void seive()
// {
// 	for(int i=2;i<MAX;i++) isPrime[i] = true;

// 	for(int i=2;i<=sqrt(MAX);i++)
// 	{
// 		if(isPrime[i])
// 		{
// 			for(int j=i*i;j<=MAX;j=j+i)
// 			{
// 				isPrime[j] = false;
// 			}
// 		}
// 	}
// }

ll findDiv(ll x)
{
	// map<ll,ll> mp;
	
	ll ct=0,tmp=0;
	while(x%2==0)
	{
		ct++;
		x = x/2;
	}

	for(ll i=3;i<=sqrt(x);i=i+2)
	{
		// ct=0;
		while(x%i==0)
		{
			ct++;
			x = x/i;
		}
	}

	if(x>2) ct++;

	return ct;
}

void solve()
{
	ll x,k;
	cin>>x>>k;

	ll val = findDiv(x);

	if(val>=k)
		cout<<1<<endl;
	else
		cout<<0<<endl;
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