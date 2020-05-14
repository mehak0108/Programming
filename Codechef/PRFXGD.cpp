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
	string s;
	cin>>s;
	int k,x;
	cin>>k>>x;

	int cp = k;
	int freq[26];
	for(int i=0;i<26;i++) freq[i] = 0;

	int n = s.length();
	int i;
	for(i=0;i<n;i++)
	{
		freq[s[i]-'a']++;
		if(freq[s[i]-'a']>x && k>0)
		{
			k--;
			freq[s[i]-'a']--;
			// continue;
		}
		else if(freq[s[i]-'a']>x && k==0)
			break;
	}

	// if(cp==k) cout<<i<<endl;
	 cout<<i-(cp-k)<<endl;
	
}


int main()
{
	ONLINE_JUDGE
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