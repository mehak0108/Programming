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
	int n,p;
	cin>>n>>p;

	p--;
	vi a(n);

	rep(i,0,n)
	{
		cin>>a[i];
	}

	int m = n-p+1,ct=0;
	bool fl = false;
	if(a[p]==1) ct++;

	for(int i=1;i<=m;i++)
	{
		if(p+i<n && a[p+i]==1 && p-i>=0 && a[p-i]==1) 
		{
			fl = true;
			ct += 2;
			cout<<i<<" "<<"1"<<endl;
		}
		else if(p+i<n && a[p+i]==1 && !fl)
			ct++;
		else if(p-i>=0 && a[p-i]==1 && !fl)
			ct++;
		fl = false;
		// if(p-i>=0 && a[p-i]==1)
		// 	ct++;
	}
	cout<<ct;
	
}


int main()
{
	ONLINE_JUDGE
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