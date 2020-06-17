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
	int k,n;
	string s;

	cin>>k>>s;

	n = s.length();
	bool fl = true,ck;

	if(n==1)
	{
		if(s[0]=='?')
			cout<<0<<endl;
		else
			cout<<s<<endl;
		return;
	}
	// else if(n>1 && k==1)
 //        {
 //            cout<<"NO\n";
 //            // continue;
 //        }
	if(k==2)
	{
		if(n%2!=0)
			fl = false;
		else if(s[0]=='?')
		{
			int l=1;

			while(s[l]=='?' && l<n) l++;

			l=1;
			while(s[l]=='?')
				l++;
			if((l%2==0 and s[l]=='1') or (l%2==1 and s[l]=='0'))
				s[0] = '1';
			else
				s[0] = '0';

		}
	}

	for(int i=0; i<n;i++)
	{
		int x = (i-1+n)%n;
		int y = (i+1)%n;

		if(s[i]!='?')
		{
			if(s[x]==s[i] || s[y]==s[i])
			{
				fl = false;
				break;
			}
			
		}
		else
		{
			// cout<<"ye";
			ck = false;
			for(int j=0;j<k;j++)
			{
				if(j!=(s[x]-'0') && j!=(s[y]-'0'))
				{
					s[i] = j+'0';
					ck = true;
					break;
				}
			}
			if(ck == false)
				break;
		}
	}

	if(!fl || !ck)
		cout<<"NO"<<endl;
	else
		cout<<s<<endl;

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