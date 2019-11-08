#include <bits/stdc++.h>
using namespace std;
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);

int moveApples(int n,int a[])
{
	if(n==1) return 0;
	
	int mean,sum=0;
	for(int i=0;i<n;i++) sum+=a[i];

	mean = sum/n;
	
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>mean)
			ans += (a[i]-mean);
	}
	return ans;
}

int main()
{
	ONLINE_JUDGE
	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];

	cout<<moveApples(n,a);
}