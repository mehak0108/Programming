#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long a[n];

	for(int i=0;i<n;i++) cin>>a[i];

	sort(a,a+n);

	long long ct=0;
	bool flag;
	for(long long i=1;i<=a[0];i++)
	{
		flag = true;
		for(int j=0;j<n;j++)
		{
			if(a[j]%i!=0)
			{
				flag = false;
			}
		}
		if(flag)
			ct++;
	}

	cout<<ct<<endl;
}
