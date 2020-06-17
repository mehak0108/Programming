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
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;

	int i=0,prev=-1,ct=0;

	int r=0;
	while(r<n && s[r]=='0') r++;

	if(r==n)
	{
		if(n%(k+1))
			ct = n/(k+1) + 1;
		else
			ct = n/(k+1);
	}
	else
	{
		while(r<n)
		{
			if(s[r]=='1' && prev==-1)
			{
				ct += r/(k+1);
				prev = r;
			}
			else if(s[r]=='1' && prev!=-1)
			{
				ct += (((r-prev)/(k+1)) - 1);
				// cout<<ct<<"      ";
				prev = r;
			}
			r++;
		}
		if(prev!=n-1)
		{
			ct+= (n-prev-1)/(k+1);
			// cout<<ct<<"   "; 
		}
	}

	cout<<ct<<endl;
	
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