#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
#define MAX 100001

int n,m;
vector<int> adj[11];
vector<bool> visited(11,false);
int inDeg[11];
vector<int> ans;

void initialise(){
	for(int i=1;i<=11;i++)
		inDeg[i]=0;
}

void topofxn(){
	for(int i=1;i<=n;i++){
		for(auto e: adj[i]){
			//if(adj[i][j])
			inDeg[e] = inDeg[e]+1;
		}
	}
	priority_queue<int,vector<int>,greater<int>>q;
	for(int i=1;i<=n;i++){
		if(inDeg[i]==0){
			q.push(i);
			visited[i] = true;
		}
	}
	while(!q.empty()){
		int p = q.top();
		q.pop();
		cout<<p<<" ";
		for(auto e:adj[p]){
			if(visited[e]==false){
				inDeg[e] = inDeg[e]-1;
				if(inDeg[e]==0){
					q.push(e);
					visited[e]=true;
				}
			}
		}

	}

}

int main(){

	ONLINE_JUDGE
	int x,y;
	cin>>n>>m;
	initialise();
	for(int i=0;i<m;i++){
		cin>>x>>y;
		adj[x].push_back(y);
	}

	topofxn();
}
