#include <bits/stdc++.h>
// #pragma GCC optimize ("Ofast")
// #pragma GCC target ("sse4")
// #pragma GCC optimize ("unroll-loops")
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
#define hell        1000000007
#define endl        '\n'
using namespace std;

int main()
{
	ONLINE_JUDGE
	int n,m;

	cin>>n>>m;
	vector<vector<int>>A(n,vector<int>(m));

	for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>A[i][j];
	
	int B[n][m];

	for(int i=n-1;i>0;i--)
	{
		for(int j=m-1;j>0;j--)
		{
			B[i][j] = A[i][j] - A[i-1][j] - A[i][j-1] + A[i-1][j-1];
		}
	}	

	for(int i=m-1;i>0;i--) B[0][i] = A[0][i] - A[0][i-1];
	for(int i=n-1;i>0;i--) B[i][0] = A[i][0] - A[i-1][0];

	B[0][0] = A[0][0];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<B[i][j]<<" ";
		cout<<endl;
	}

}