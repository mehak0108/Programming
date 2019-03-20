#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> *adj,int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void dfs(vector<int> *adj,int v){
	stack<int> s;
	vector<bool> visited(v,false);
	s.push(v);
	visited[v]=true;
	while(!s.empty()){
		int a = s.top();
		s.pop();
		cout<<a<<endl;
		// if(visited[a]==false){
		// 	cout<<a<<endl;
		// 	visited[a]=true;
		// }
		//for same ans in case of recursion
		for(int i=adj[a].size()-1;i>=0;i--){
			if(visited[adj[a][i]]==false){
				s.push(adj[a][i]);
				visited[adj[a][i]]=true;
			}
		}
	}

}

// vector<bool> visited(5,false);
// void dfs(vector<int> *adj,int v){
// 	visited[v]=true;
// 	cout<<v<<" ";
// 	for(int i=0;i<adj[v].size();i++){
// 		if(visited[adj[v][i]]==false)
// 			dfs(adj,adj[v][i]);
// 	}
// }


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
	dfs(adj,0);
}
