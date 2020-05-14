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
#define hell        1000000007
#define endl        '\n'
using namespace std;

int main()
{
	// ONLINE_JUDGE
	ll t;
	cin>>t;
	while(t--)
	{
		ll x,y,k,n;
		cin>>x>>y>>k>>n;

		bool fl = false;
		for(int i=0;i<n;i++)
		{
			ll a,b;
			cin>>a>>b;
			if(y+a>=x && b<=k) 
			{
				fl = true;
				// break;
			}
		}	

		if(fl) cout<<"LuckyChef"<<endl;
		else cout<<"UnluckyChef"<<endl;
	}
}