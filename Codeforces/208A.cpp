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
	string s;
    cin>>s;
    int n = s.length();
    string ans;
    int ct=0;
    for(int i=0;i<n;i++)
    {
        if(ct==1 && i!=3) ans = ans+' ';
        if(s[i]=='W' && i+1<n && i+2<n && s[i+1]=='U' && s[i+2]=='B')
        {
            i = i+2;
            ct++;
        }
        else
        {
            
            ans = ans + s[i];
            ct=0;
        }
    }
	cout<<ans<<endl;
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