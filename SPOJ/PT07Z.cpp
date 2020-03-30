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
int dis[10001];
int vis[10001];

void dfs(int src)
{
	vis[src]=1;

	for(auto x:adj[src])
	{
		if(!vis[x])
		{
			dis[x] = 1+dis[src];
			dfs(x);
		}
	}
}

void solve()
{
	int n;
	cin>>n;
	int e = n-1;

	while(e--)
	{
		int x,y;
		cin>>x>>y;
		x--; y--;
		adj[x].pb(y);
		adj[y].pb(x);
			
	}

	int ans;

	rep(i,0,n)
	{
		vis[i]=0;
		dis[i]=0;	
	} 

	dfs(0);

	int maxdis = INT_MIN;
	int tmp;
	rep(i,0,n)
	{
		if(maxdis<dis[i])
		{
			tmp = i;
			maxdis = dis[i];
		}
	}

	rep(i,0,n)
	{
		vis[i]=0;
		dis[i]=0;	
	}

	dfs(tmp);		

	maxdis = INT_MIN;
	rep(i,0,n)
	{
		if(maxdis<dis[i])
		{
			maxdis = dis[i];
		}
	}
	cout<<maxdis<<endl;
}


int main()
{
	// ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	return 0;
}