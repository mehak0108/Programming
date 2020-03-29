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

vector<int>a,b;

void convert(int n,int fl)
{
	int res=0;
	while(n)
	{
		res = n%10;
		n = n/10;
		if(fl) b.pb(res);
		else a.pb(res);
	}

}

int convert1(vector<int> v)
{
	int ans=v[v.size()-1];
	for(int i=v.size()-2;i>=0;i--)
	{
		ans = ans*10 + v[i];
	}
	return ans;
}

int calc(int n,int m)
{
	vector<int> v;
	int carry = 0, p=0;
	for(int i=0;i<max(n,m);i++)
	{
		int sum = ((i<n)? a[i]:0) + ((i<m)? b[i]:0) + carry;
		p = sum%10;
		carry = sum/10;
		v.pb(p);
	}

	if(carry) v.pb(carry);

	return convert1(v);
}

int addv(int n,int m, int fl)
{
	int ans1=0,ans2=0;
	if(fl==0)
	{
		swap(a[0],b[0]);
		ans1 = calc(n,m);
		swap(a[0],b[0]);

		swap(a[1],b[0]);
		ans2 = calc(n,m);
		swap(a[1],b[0]);
	}
	else
	{
		swap(a[0],b[0]);
		ans1 = calc(n,m);
		// cout<<ans1<<endl<<endl;
		swap(a[0],b[0]);

		swap(a[0],b[1]);
		ans2 = calc(n,m);
		swap(a[0],b[1]);	
	}

	return max(ans1,ans2);
}

int addv2(int n,int m)
{
	int ans1,ans2,ans3,ans4;

	swap(a[0],b[0]);
	ans1 = calc(n,m);
	// cout<<ans1<<endl<<endl;
	swap(a[0],b[0]);

	swap(a[0],b[1]);
	ans2 = calc(n,m);
	swap(a[0],b[1]);	

	swap(a[1],b[0]);
	ans3 = calc(n,m);
	swap(a[1],b[0]);

	swap(a[1],b[1]);
	ans4 = calc(n,m);
	swap(a[1],b[1]);

	return max(ans1,max(ans2,max(ans3,ans4)));
}

void solve()
{
	
	int x,y;
	cin>>x>>y;

	convert(x,0);
	convert(y,1);

	int n = a.size();
	int m = b.size();

	// for(int i=0;i<n;i++) cout<<a[i];
	// 	cout<<endl;
	// for(int i=0;i<m;i++) cout<<b[i];

	int res=0;
	if((n==1 && m==2) || (n==2 && m==1))
	{
		if(n>m)
			res = addv(n,m,0);
		else
			res = addv(n,m,1);
		cout<<res<<endl;
	}
	else if(n==1 && m==1)
		cout<<x+y<<endl;
	else 
	{
		cout<<addv2(n,m)<<endl;
	}

	a.clear();
	b.clear();
	
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