#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
#define MAX 100001
vector<int>adj[MAX];
int vis[MAX];

void dfs(int src,int &ct)
{
	vis[src]=1;
	ct++;
	for(auto x:adj[src])
	{
		if(!vis[x])
			dfs(x,ct);
	}
}

int main()
{
	ONLINE_JUDGE
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,clib,croad;
		cin>>n>>m>>clib>>croad;
		for(int i=0;i<m;i++)
		{
			int x,y;
			cin>>x>>y;
			x--;y--;
			adj[x].push_back(y);
			adj[y].push_back(x);	
		}

		if(clib<=croad)
		{
			cout<<n*clib<<endl;
			continue;
		}
		else
		{
			long long ans=0;
			for(int i=0;i<n;i++) vis[i]=0;

			for(int i=0;i<n;i++)
			{
				if(!vis[i])
				{
					long long ct=0;
					dfs(i,ct);
					ans += (ct-1)*croad + clib;
				}
			}
			cout<<ans<<endl;
		}
	}

}