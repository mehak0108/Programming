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
	string s,p;
	cin>>s;

	unordered_set<char> us;
	us.insert('A');
	us.insert('E');
	us.insert('I');
	us.insert('O');
	us.insert('U');
	us.insert('Y');
	us.insert('a');
	us.insert('e');
	us.insert('i');
	us.insert('o');
	us.insert('u');
	us.insert('y');

	int n = s.length();

	for(int i=0;i<n;i++)
	{
		if(us.find(s[i])!=us.end())
			continue;
		char x = tolower(s[i]);
		p = p + '.' + x;
	}

	cout<<p<<endl;
	
}


int main()
{
	// ONLINE_JUDGE
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