#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	// int a[n];
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];

	sort(v.begin(),v.end());

	int q;
	cin>>q;
	while(q--)
	{
		int x;
		cin>>x;
		
		if(x<v[0])
		{
			cout<<0<<endl;
			continue;
		}

		int p = upper_bound(v.begin(),v.end(),x)-v.begin();

		cout<<p<<endl;
	}
}
