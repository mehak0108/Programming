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


void solve(int n)
{
	vi a(n);

	rep(i,0,n) cin>>a[i];

	stack<int> s;

	ll i=0,tp,area = 0;
	while(i<n)
	{
		if(s.empty() || a[s.top()]<=a[i])
			s.push(i++);
		else
		{
			tp = s.top();
			s.pop();

			area = max(area,(ll)a[tp]*((s.empty())? i:i-s.top()-1));
		}

	}

	while(!s.empty())
	{
		tp = s.top();
		s.pop();

		area = max(area,(ll)a[tp]*((s.empty())? i:i-s.top()-1));
	}
	cout<<area<<endl;
	
}


int main()
{
	// ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	// cin>>t;
	while(1)
	{
		int n;
		cin>>n;

		if(n==0) break;
		solve(n);

	}
	return 0;
}