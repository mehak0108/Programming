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
	int n;
	cin>>n;

	vi a(n);

	for(int i=0;i<n;i++) cin>>a[i];

	int dist=0,prev=0;
	bool ans=true;
	
	int i=0;
	while(a[i]!=1) i++;

	prev = i;
	i++;
	// cout<<prev<<endl;
	while(i<n)
	{
		if(a[i]==1)
		{
			// cout<<i<<" ";
			dist = i-prev;
			// cout<<dist<<" ";
			if(dist<6) 
			{
				ans = false;
				break;
			}
			prev = i;
		}

		i++;
	}

	if(ans) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
}


int main()
{
	ONLINE_JUDGE
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