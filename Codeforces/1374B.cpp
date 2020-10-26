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
	ll n,cp;
	cin>>n;
	
	ll ctwo = 0, cth=0;
	bool fl = true;

	while (n % 2 == 0)  
    {  
        ctwo++;  
        n = n/2;  
    }  
    while (n % 3 == 0)  
    {  
        cth++;  
        n = n/3;  
    }
    for (int i = 5; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            n = n/i;
            fl = false;  
        }  
    }  
  
    if (n > 2)  
    {
    	fl = false;
    }
	
	if(ctwo>cth || !fl) cout<<-1<<endl;
	else
	{
		
		ll ans = 2*cth - ctwo;
		cout<<ans<<endl;
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