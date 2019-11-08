#include <bits/stdc++.h>
using namespace std;
int a[100010];

bool ok(int mid,int c,int n)
{
	int pos = a[0];
	int ct=1;
	for(int i=1;i<n;i++)
	{
		if(a[i]-pos>=mid)
		{
			ct++;
			pos = a[i];

			if(ct==c)
				return true;
		}
	}
	return false;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c;
		cin>>n>>c;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		int lo=a[0], hi=a[n-1];
		int res=INT_MIN;
		while(lo<=hi)
		{
			int mid = (lo+hi)/2;
			if(ok(mid,c,n))
			{
				res = max(res,mid);
				lo = mid+1;
			}
			else
				hi = mid-1;
		}
		cout<<res<<endl;
	}
}
