#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long a[n];
	long long sum=0,big=0;
	for(int i=0;i<n;i++) 
	{
		cin>>a[i];
		sum+=a[i];
		big = max(big,a[i]);
	}	


	if(sum%2)
		cout<<"NO"<<endl;
	else
	{
		if(big<=sum/2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

}
