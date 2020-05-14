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
vector<int> adj[10001];
bool vis[10001];

void MOD(ll &x)
{
	if (x >= lol) x -= lol;
	if (x < 0) x += lol;
}

void dfs(int src)
{
	vis[src] = true;

	for(auto x:adj[src])
	{
		if(!vis[x])
			dfs(x);
	}
}

void solve()
{
	int n,e;
	cin>>n>>e;

	if(e!=n-1)
		cout<<"NO"<<endl;
	else
	{
		while(e--)
		{
			int u,v;
			cin>>u>>v;
			u--;v--;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		for(int i=0;i<n;i++) vis[i]=false;

		dfs(0);

		int ct=0;
		for(int i=0;i<n;i++)
		{
			if(vis[i]==true)
				ct++;
		}
		if(ct==n)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}


int main()
{
	// ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}