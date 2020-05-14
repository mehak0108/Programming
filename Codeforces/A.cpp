#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<k;i++)
		{
			cin>>a[i];
		}

		int tm=a[0];

		for(int i=0;i<k-1;i++)
		{
			int t1 = a[i];
			int t2 = a[i+1];
			// l = (i==0)? a[i]:(t2-t1)/2;
			// r = (i+1==k-1)?
			tm = max(tm, (t2-t1)/2+1);
		} 

		tm = max(tm,n-a[k-1]+1);

		cout<<tm<<endl;
	}
}
