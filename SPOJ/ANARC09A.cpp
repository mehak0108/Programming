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


void solve(string s,int t)
{	
	int n = s.length();

	stack<char>st;
	int ct=0;

	rep(i,0,n)
	{
		if(s[i]=='{')
			st.push(s[i]);
		else
		{
			if(st.empty()) 
			{
				ct++;
				st.push('}');
			}
			else
			{
				st.pop();
			}
		}
	}

	int tmp = st.size();

	ct += tmp/2;

	cout<<t<<". "<<ct<<endl;

	
}


int main()
{
	// ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
//	cin>>t;
	while(1)
	{
		string s;
		cin>>s;

		if(s[0]=='-') break;
		solve(s,t);
		t++;
	}
	return 0;
}