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
	int x,y,z,a1,a2,b1,b2,c1,c2;
    cin>>x>>a1>>a2>>b1>>y>>b2>>c1>>c2>>z;

    x = (2*c1+c2-a1)/2;
    y = (a1+c2+2*a2+2*c1-2*b1-2*b2)/2;
    z = (2*a2-c2+a1)/2;

    cout<<x<<" "<<a1<<" "<<a2<<endl;
    cout<<b1<<" "<<y<<" "<<b2<<endl;
    cout<<c1<<" "<<c2<<" "<<z<<endl;


}


int main()
{
	// ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
//	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}