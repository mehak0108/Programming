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
		ll n,c;
		cin>>n>>c;

		ll sum=0;
		
		for(int i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			sum += x;
		}	

		if(sum<=c) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}