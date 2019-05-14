#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
#define MAX 100001
ll nodes,edges;
vector<pair<ll,ll>> adj[MAX];
vector<bool> visited(MAX,false);

void dijkstra(){
	vector<ll> dis(MAX,2e9);
	dis[1]=0;
	priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> q;
	q.push(make_pair(0,1));

	while(!q.empty()){
		pair<ll,ll> p = q.top();
		q.pop();
		ll x = p.second;
		if(visited[x]==true)
			continue;
		visited[x] = true;
		for(int i=0;i<adj[x].size();i++){
			//pair<ll,ll> y = adj[x][i];
			ll w = adj[x][i].first;
			ll z = adj[x][i].second;

			if(visited[z]==true)
				continue;
			if(!visited[z] && dis[z]>dis[x]+w){
				dis[z] = dis[x]+w;
				q.push(make_pair(dis[z],z));
			}
		}
	}
	for(int i=2;i<=nodes;i++)
		cout<<dis[i]<<" ";
}

int main(){
	ONLINE_JUDGE

	ll x,y,w;
	cin>>nodes>>edges;
	for(ll i=0;i<edges;i++){
		cin>>x>>y>>w;
		adj[x].push_back(make_pair(w,y));
		//adj[y].push_back(make_pair(w,x));

	}
	dijkstra();
}

/*
5 5
1 2 5
1 3 2
3 4 1
1 4 6
3 5 5
*/