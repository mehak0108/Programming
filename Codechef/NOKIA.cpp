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
	int n,m;
	cin>>n>>m;

	int minl[31],maxl[31];

	minl[0]=0;
	maxl[0]=0;
	
	for(int i=1;i<=30;i++)
	{
		int k=i/2;
		minl[i] = i+1 + minl[k] + minl[i-1-k];
		maxl[i] = i+1 + maxl[i-1];
	}

	if(m<minl[n])
		cout<<-1<<endl;
	else if(m<=maxl[n]) 
		cout<<0<<endl;
	else
		cout<<abs(maxl[n]-m)<<endl;
	
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
	}
	return 0;
}