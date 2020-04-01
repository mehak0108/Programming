#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll mid,ll n,ll k,ll a[])
{
	ll tot=0;
	for(int i=n/2;i<n;i++)
		tot+=max(0LL,mid-a[i]);
	return tot<=k;
}

int main()
{
	ll n,k;
	cin>>n>>k;
	ll a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	ll lo=0,hig=2e9,mid;
	while(lo<hig)
	{
		mid = (lo+hig+1)/2;
		if(check(mid,n,k,a))
			lo = mid;
		else
			hig = mid-1;
	}
	cout<<lo<<endl;
}
