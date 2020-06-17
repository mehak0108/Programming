#include <bits/stdc++.h>

#define ONLINE_JUDGE  freopen("../input","r",stdin); freopen("../output","w",stdout);
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
#define rep(i,a,b)	for(int i=a;i<b;i++)
#define M         1000000007
#define endl        '\n'
#define debug(x)    cerr << #x << " = " << x << endl;

using namespace std;

void MOD(ll &x)
{
	if (x >= M) x -= M;
	if (x < 0) x += M;
}


void solve()
{
	int n,ct=1;
	cin>>n;
	
	int l=0,r=n-1,t=0,d=n-1;
	int dir=0;

	vector<vector<int>> A(n, vector<int>(n));

	while(l<=r && t<=d)
	{
		if(dir==0)
		{
			for(int i=l;i<=r;i++) A[t][i] = ct++;
			t++;
		}
		else if(dir==1)
		{
			for(int i=t;i<=d;i++) A[i][r] = ct++;
			r--;
		}
		else if(dir==2)
		{
			for(int i=r;i>=l;i--) A[d][i] = ct++;
			d--;
		}
		else
		{
			for(int i=d;i>=t;i--) A[i][l] = ct++;
			l++;
		}
		dir = (dir+1)%4;
	}

	for(int i=0;i<n;i++) 
	{
		for(int j=0;j<n;j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
}


int main()
{
	// ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
		// cout<<endl;
	}
	return 0;
}