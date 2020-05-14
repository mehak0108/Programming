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
	string s;
	cin>>s;

	stack<int> st;

	int n = s.length();

	int l=0,currl=0,ct=0;
	// bool fl = false;
	st.push(-1);
	rep(i,0,n)
	{
		if(s[i]=='(')
		{
			st.push(i);
		}
		else
		{
			st.pop();
			if(!st.empty())
			{
				int tp = st.top();
				currl = i-tp;
				if(l<currl)
				{
					l = currl;
					ct=1;
				}
				else if(l==currl)
					ct++;
				
			}
			else
				st.push(i);
		}
	}	

	// if(fl && l==currl) ct++;

	if(ct==0)
		cout<<"0 1"<<endl;
	else
		cout<<l<<" "<<ct<<endl;
	
}


int main()
{
	// ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	// cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}