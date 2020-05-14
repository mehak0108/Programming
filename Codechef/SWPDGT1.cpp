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

int form(int a,int b, int c, int d)
{
	int v1 = 10*a+b;
	int v2 = 10*c+d;

	return v1+v2;
}

int sum(int a,int b,int c)
{
	return 10*a+b+c;
}
void solve()
{
	int x,y;
	cin>>x>>y;

	int a2 = x%10;
	int a1 = x/10;

	int b2 = y%10;
	int b1 = y/10;

	if(a1==0 && b1==0) cout<<x+y<<endl;

	else if(a1!=0 && b1!=0) 
	{
		int ans1 = x+y;
		int ans2 = form(b1,a2,a1,b2);
		int ans3 = form(a1,b1,a2,b2);
		int ans4 = form(b2,a2,b1,a1);
		cout<<max(ans1,max(ans2,max(ans3,ans4)))<<endl;
	}
	else
	{
		if(b1==0)
		{
			int ans1 = x+y;
			int ans2 = sum(b2,a2,a1);
			int ans3 = sum(a1,b2,a2);
			cout<<max(ans1,max(ans2,ans3))<<endl;
		}
		if(a1==0)
		{
			int ans1 = x+y;
			int ans2 = sum(a2,b2,b1);
			int ans3 = sum(b1,a2,b2);
			cout<<max(ans1,max(ans2,ans3))<<endl;	
		}
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
	while(t--){
		solve();
	}
	return 0;
}