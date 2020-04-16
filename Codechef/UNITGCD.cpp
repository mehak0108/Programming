#include <bits/stdc++.h>

#define ONLINE_JUDGE  freopen("../input","r",stdin); freopen("../output","w",stdout);
#define MAX 		1000001
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

int spf[MAX];

void MOD(ll &x)
{
	if (x >= lol) x -= lol;
	if (x < 0) x += lol;
}

// void calculate(vector<vector<int>> &A,int n)
// {
// 	// int k=0;
// 	vector<int> p;
// 	p.pb(1);
// 	p.pb(2);
// 	p.pb(3);
// 	A.pb(p);

// 	for(int i=4;i<=n;i=i+2)
// 	{
// 		vector<int> v;
// 		v.pb(i);
// 		A.pb(v);
// 	}

// 	for(int i=5;i<=n;i=i+2)
// 	{
		
// 		for(int j=0;j<A.size();j++)
// 		{
// 			bool fl = true;
// 			for(int k=0;k<A[j].size();k++)
// 			{
// 				if(__gcd(i,A[j][k])!=1)
// 				{
// 					fl = false;
// 					break;
// 				}
// 			}
// 			if(fl)
// 			{
// 				A[j].pb(i);
// 				break;
// 			}
// 		}
// 	}
// }

void solve()
{
	int n;
	cin>>n;

	vector<vector<int>> A;

	if(n==1 || n==2)
	{
		cout<<1<<endl;
		if(n==1) cout<<"1 1"<<endl;
		else cout<<"2 1 2"<<endl;
	}
	else
	{
		cout<<n/2<<endl;
		cout<<"3 1 2 3"<<endl;

		for(int i=4;i<n;i=i+2)
		{
			cout<<2<<" "<<i<<" "<<i+1<<endl;
		}

		if(n%2==0)
			cout<<1<<" "<<n<<endl;
		// calculate(A,n);

		// cout<<A.size()<<endl;
		// for(int i=0;i<A.size();i++)
		// {
		// 	cout<<A[i].size()<<" ";
		// 	for(int j=0;j<A[i].size();j++)
		// 		cout<<A[i][j]<<" ";
		// 	cout<<endl;
		// }
	}
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