#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
#define MAX 100001
ll n,p;
vector<int> adj[MAX];
vector<bool> visited(MAX,false);

void dfs(int v,ll &c){
	visited[v] = true;
	c++;
	for(int i=0;i<adj[v].size();i++){
		if(visited[adj[v][i]]==false)
			dfs(adj[v][i],c);
	}
}
int main(){
	//ONLINE_JUDGE
	cin>>n>>p;
	for(int i=0;i<p;i++){
		ll x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	vector<int> v;
	for(int i=0;i<n;i++){
		ll ct=0;
		if(visited[i]==false){
			dfs(i,ct);
			v.push_back(ct);
		}
	}

	ll prev = v[0],ans=0;
	for(int i=0;i<v.size()-1;i++){
		//cout<<v[i]<<endl;
		ans += prev*v[i+1];
		prev += v[i+1]; 
	}
	cout<<ans<<endl;
}