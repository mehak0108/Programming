#include <bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);

vector<int> adj[10010];
int level[10010];
vector<bool> visited(10010,false);

void calNode(int v){
	queue<int> q;
	q.push(v);
	visited[v] = true;
	level[v]=1;
	while(!q.empty()){
		int s = q.front();
		q.pop();
		for(int i=0;i<adj[s].size();i++){
			if(visited[adj[s][i]]==false){
				level[adj[s][i]] = level[s] + 1;
				q.push(adj[s][i]);
				visited[adj[s][i]]=true;
			}
		}

	}

}

int main(){
	//ONLINE_JUDGE

	int n,u,v,x;
	cin>>n;
	for(int i=1;i<n;i++){
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	cin>>x;
	calNode(1);
	cout<<count(level,level+n,x)<<endl;
}
