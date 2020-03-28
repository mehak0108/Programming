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
	int n,m,x,y;
	cin>>n>>m>>x>>y;

	ll val;
	val = n*x+m*y;
	bool fl = false;
	if(val%2!=0)
		cout<<"NO"<<endl;
	else
	{
		if(y!=0)
		{
			ll hf = val/2;

			for(int i=0;i<=n;i++)
			{
				int z = (int)(hf - i*x)/y;
				if(i*x+z*y==hf && z<=m && z>=0)
				{
					fl = true;
					break;
				}
			}

			
		}
		else
		{
			if((n*x)%2==0 ) fl = true;
			else fl = false;

		}
		if(fl) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	
}


int main()
{
	// ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}