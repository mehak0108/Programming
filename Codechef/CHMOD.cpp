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
#define M        	1000000007
#define endl        '\n'
#define debug(x)    cerr << #x << " = " << x << endl;

using namespace std;


vector<int> prime{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89,97};
vector<vector<int> > A(101,vector<int>(25));
vector<vector<int> > pref(100001,vector<int>(25));

void findFactors()
{
	
	for(int i=2;i<=100;i++)
	{
		int cp = i;
		for(int j=0;j<25;j++)
		{
			int ct=0;
			// cout<<i<<" ";
			while(cp!=1 && cp%prime[j]==0)
			{
				ct++;
				cp /= prime[j];
			}

			A[i][j] = ct;
		}
	}
}

ll eval(ll base, ll exp, ll m)
{
	ll vl = 1;
	base = base % m;

	while(exp>0)
	{
		if(exp%2)
			vl = (vl * base) % m;
		base = ((base%m) * (base%m)) % m;
		exp /= 2;
	}
	return vl;
}

void solve()
{
	ll m;
	int l,r;
	cin>>l>>r>>m;
	l--;r--;

	ll vl = 1;
	if(l)
	{

		for(int i=0;i<25;i++)
		{
			vl = (vl * eval(prime[i],pref[r][i]-pref[l-1][i],m))%m;
		}
	}
	else
	{
		for(int i=0;i<25;i++)
		{
			vl = (vl * eval(prime[i],pref[r][i],m))%m;
		}	
	}

	cout<<vl<<endl;
	// cout<<"ok"<<endl;
}

int main()
{
	// ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(0);

	findFactors();

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	

	for(int j=0;j<25;j++)
		pref[0][j] = A[a[0]][j];
	for(int i=1;i<n;i++)
	{
		int x = a[i];
		
		for(int j=0;j<25;j++)
		{
			pref[i][j] = pref[i-1][j] + A[x][j];
		}	
	}

	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}