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

void solve()
{
	int n;
	cin>>n;

	vi a(n);

	rep(i,0,n) cin>>a[i];

	if(n==1)
	{
		cout<<-1<<endl;
		return;
	}

	bool fl = false;
	int i;
	for(i=n-1;i>=1;i--)
	{
		if(a[i-1]<a[i])
		{
			fl = true;
			break;
		}
	}

	int j=i-1,k;	
	for(k=n-1;k>=i;k--)
	{
		if(a[k]>a[j])
		{
			
			break;
		}
	}

	if(!fl)
	{
		cout<<-1<<endl;
		return;
	}
	swap(a[j],a[k]);

	sort(a.begin()+i,a.end());

	rep(i,0,n)
		cout<<a[i];
	cout<<endl;

	
}


int main()
{
	// ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}