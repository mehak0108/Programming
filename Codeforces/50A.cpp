#include <bits/stdc++.h>

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
#define rep(i,a,b)	for(int i=a;i<b;i++)
#define lol         1000000007
#define endl        '\n'
#define debug(x)    cerr << #x << " = " << x << endl;

using namespace std;

void MOD(ll &x)
{
	if (x >= lol) x -= lol;
	if (x < 0) x += lol;
}


void solve()
{
	int m,n;
	cin>>m>>n;

	if(m==1 && n==1)
		cout<<0<<endl;
	// else if(m==1 || n==1)
	// {
		
	// }
	else
	{
		if(m%2==0)
		{
			int x = m/2;
			cout<<x*n<<endl;
		}
		else
		{
			int y,p,q;
			y = m/2;
			p = y*n;
			q = n/2;
			cout<<p+q<<endl;
		}
	}
}


int main()
{
	// ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
