#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);

void dfs(vector<int> *adj,vector<bool> &visited,int s,int &ct){
	visited[s]=true;
	//cout<<s<<" ";
	ct++;
	for(int i=0;i<adj[s].size();i++){
		if(visited[adj[s][i]]==false){
			dfs(adj,visited,adj[s][i],ct);
		}
	}
}
int main(){
	ONLINE_JUDGE
	int n,m,x,u,v;
	cin>>n>>m;
	vector<int> adj[10010];
	vector<bool> visited(10010,false);
	for(int i=0;i<m;i++){
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	cin>>x;
	int ctt = 0;
	dfs(adj,visited,x,ctt);
	cout<<n-ctt;
}

/*input
10 10
8 1
8 3
7 4
7 5
2 6
10 7
2 8
10 9
2 10
5 10
2

Output
0*/