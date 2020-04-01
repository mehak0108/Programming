#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		double sum=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			sum+=x;
		}
		// cout<<sum<<endl;
		long long val = ceil((double)sum/n);
		cout<<val<<endl;

	}
}
