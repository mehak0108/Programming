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
	int n;
	cin>>n;

	int a[n];
	rep(i,0,n) cin>>a[i];

	unordered_map<int,int> mp;
	mp[5] = 0;
	mp[10] = 0;
	mp[15] = 0;
	
	bool fl = true;
	rep(i,0,n)
	{
		if(a[i]==5)
			mp[5]++;
		else if (a[i]==10 && mp[5]>0)
		{
			mp[10]++;
			mp[5]--;
		}
		else if(a[i]==15 && (mp[10]>0 || mp[5]>1) )
		{
			mp[15]++;
			if(mp[10]>0) mp[10]--;
			else mp[5] = mp[5]-2;
		}
		else
		{
			fl = false;
			break;
		}
	
	}

	if(fl) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
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