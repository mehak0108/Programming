#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
#define MAX 100001

int n,m;
int maze[11][11];
bool visited[11][11];

bool microdfs(int x,int y){
	if(x == n-1 && y == m-1)
		return true;
	if(x>=n || y>=m)
		return false;
	if(x<0 || y<0)
		return false;
	if(visited[x][y] == true)
		return false;
	if(maze[x][y]==0)
		return false;
	visited[x][y] = true;
	if(microdfs(x+1,y)==true)
		return true;
	if(microdfs(x-1,y)==true)
		return true;
	if(microdfs(x,y+1)==true)
		return true;
	if(microdfs(x,y-1)==true)
		return true;
	return false;
}
int main(){
	//ONLINE_JUDGE
	
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		{
			cin>>maze[i][j];
			visited[i][j] = false;
		}
	}
	bool ans = microdfs(0,0);
	if(ans)
		cout<<"Yes";
	else
		cout<<"No";
}

/*
3 3
1 0 1
1 0 0
1 1 1
ans - Yes
*/