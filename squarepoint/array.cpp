#include <bits/stdc++.h>
using namespace std;
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);


int main()
{
	ONLINE_JUDGE
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];

		int sum = a[0];
		for(int i=1;i<n;i++)
		{
			if(a[i]<=a[i-1])
				a[i] = a[i-1]+1;
			sum+=a[i];
		}
		cout<<sum<<endl;
	}
}