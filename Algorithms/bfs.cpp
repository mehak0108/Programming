#include <bits/stdc++.h>
using namespace std;
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);

void addEdge(vector<int> *adj,int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void bfs(vector<int> *adj,int v){
	vector<bool> visited(5,false);
	queue<int> q;
	q.push(v);
	visited[v]=true;
	while(!q.empty()){
		int s = q.front();
		q.pop();
		cout<<s<<endl;
		for(int i=0;i<adj[s].size();i++){
			if(visited[adj[s][i]]==false){
				q.push(adj[s][i]);
				visited[adj[s][i]]=true;
			}
		}
	}
}

int main(){
	int v = 5;
	vector<int> adj[5];
	addEdge(adj, 0, 1); 
	addEdge(adj, 0, 4); 
	addEdge(adj, 1, 2); 
	addEdge(adj, 1, 3); 
	addEdge(adj, 1, 4); 
	addEdge(adj, 2, 3); 
	addEdge(adj, 3, 4); 
	bfs(adj,0);
}
