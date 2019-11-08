#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
unordered_map<ll,ll> vis;
unordered_map<ll,vector<ll>> adj;
#define pll pair<ll,ll> 
#define F first
#define S second

ll rev(ll n)
{
	vector<ll> v;
	while(n)
	{
		int r = n%10;
		v.push_back(r);
		n=n/10;
	}

	reverse(v.begin(),v.end());
	while(v[v.size()-1]==0)
		v.pop_back();

	ll res=0;
	for(int i=v.size()-1;i>=0;i--)
		res = res*10+v[i];

	return res;
}

ll bfs(ll n)
{
	queue<pll> q;
	q.push({1,1});
	vis[1]=1;
	while(!q.empty())
	{
		auto tp = q.front();
		q.pop();

		ll x = tp.F;
		ll d = tp.S;

		if(x==n) return d;

		for(auto v:adj[x])
		{
			if(!vis[v])
			{
				q.push({v,d+1});
				vis[v]=1;
			}
		}
	}
}

int main()
{
	ONLINE_JUDGE
	int t;
	cin>>t;

	for(int i=1;i<=100000;i++)
	{
		
		ll val = rev(i);
		if(val!=i)
		{
			adj[i].push_back(val);
		}
		adj[i].push_back(i+1);
	}
	while(t--)
	{
		ll n;
		cin>>n;

		for(int i=1;i<=100000;i++) vis[i]=0;
		cout<<bfs(n)<<endl;

	}
}